var moment = require('moment')
  , leapDay = 60
  , sunday = 0
  , monday = 1
  , thursday = 4
  , oneDay = 60 * 60 * 24 * 1000
  , oneWeek = oneDay * 7
  , litYearNames = ["c", "a", "b"]
  , January = 0,    February = 1,   March = 2,      April = 3
  , May = 4,        June = 5,       July = 6,       August = 7
  , September = 8,  October = 9,    November = 10,  December = 11
  , mdFormat = "MM-DD"
  , tz = "America/Los_Angeles"

function thisYear(date) { return Number.isInteger(date) ? date : date.year() }
function inRange(n, min, max) { return n >= Math.min(min, max) && n <= Math.max(min, max)}
function listContains(list, obj) { return list.indexOf(obj) >= 0 }
// function advDays(d, days) { return new Date( d.valueOf() + oneDay * days ) }
// function advWeeks(d, weeks) { return advDays(d, weeks * 7) }
function daysTill(d1, d2) { return Math.floor( (d2 - d1)/oneDay ) }
function weeksTill(d1, d2) { return Math.floor( (d2 - d1)/oneWeek )}
function litYear(d) {
  let yr = thisYear(d)
  return d.isSameOrAfter(advent(d, 1)) ? yr + 1 : yr;
}
function litYearName(d) { return litYearNames[ litYear(d) % 3 ] }
function isSunday(d) { return d.day() == sunday }
function isMonday(d) { return d.day() == monday }
function daysTillSunday(d) { return 7 - d.day() }
function dateNextSunday(d) { return d.add( daysTillSunday(d), 'days') }
function dateLastSunday(d) { 
  let day = d.day();
  day = (day == 0) ? -7 : -day;
  return d.add(day, 'days') 
}
// algorithm from http://en.wikipedia.org/wiki/Computus#cite_note-otheralgs-47
// presumes `d` is either int or date
function easter(d) {
  var year = thisYear(d) 
    , a = year % 19
    , b = Math.floor(year / 100)
    , c = year % 100
    , d = Math.floor(b / 4)
    , e = b % 4
    , f = Math.floor((b + 8) / 25)
    , g = Math.floor((b - f + 1) / 3)
    , h = (19 * a + b - d - g + 15) % 30
    , i = Math.floor(c / 4)
    , k = c % 4
    , l = (32 + 2 * e + 2 * i - h - k) % 7
    , m = Math.floor((a + 11 * h + 22 * l) / 451)
    , n0 = (h + l + 7 * m + 114)
    , n = Math.floor(n0 / 31) - 1
    , p = n0 % 31 + 1
    , date = moment({'year': year, 'month': n, 'day': p});
  return date; 
}
function sundayInEaster(d, n) { return easter(d).add(n - 1, 'weeks') }
function secondMondayAfterEaster(d) {return easter(d).add(8, 'days')}
function ascension(d) { return easter(d).add(39, 'days')}
function rightAfterAscension(d) {
  let a = ascension(d)
    , ascen = d.isSameOrAfter(a)
    , beforeSaad = d.isBefore(sundayAfterAscension(d)) // saad - sunday after ascension day
    return ascen && beforeSaad
}
function sundayAfterAscension(d) { return sundayInEaster(d, 7) }
function pentecost(d, n) { return easter(d).add(n + 6, 'weeks') }
function trinity(d) { return pentecost(d, 2) }
function proper(d, n) { return advent(d, n - 29) }
function christmasDay(d) { return moment(thisYear(d) + '-12-25') }
function christmas(d, n) { 
  let y = thisYear(d)
    , sundayAfter = dateNextSunday( christmasDay(y) )
  return (n == 2) ? sundayAfter.add(1, 'weeks') : sundayAfter;
}
function advent(d, n) { 
  let sundayBefore = dateLastSunday(christmasDay(d));
  return sundayBefore.add(n - 4, 'weeks'); 
}
function epiphanyDay(d) { return moment(thisYear(d) + '-01-06')}
function epiphanyBeforeSunday(d) { return d.isSameOrAfter(epiphanyDay(d)) && d.isBefore(weekOfEpiphany(d, 1)) }
function sundayAfterEpiphany(d) { return dateNextSunday( epiphanyDay(d) ) }
function weekOfEpiphany(d, n) { return sundayAfterEpiphany(d).add(n - 1, 'weeks')}
function ashWednesday(d) { return easter(d).add( -46, 'days')}
function rightAfterAshWednesday(d) { return d.isSameOrAfter(ashWednesday(d)) && d.isBefore(lent(d, 1)); }
function lent(d, n) { return easter(d).add( n - 7, 'weeks') }
function palmSunday(d) { return easter(d).add( -1, 'weeks') }
function goodFriday(d) { return easter(d).add( -2, 'days') }
function isGoodFriday(d) { return d.isSame(goodFriday(d)) }
function toSeason(date) {
  let sunday = isSunday(date) ? date : dateLastSunday(date.clone())
    , y = litYear(sunday)
    , yrABC = litYearName(sunday)
    , dOfMonth = (sunday.month() + 1) + "/" + sunday.date()

    , weeksTillAdvent = weeksTill(advent(1, sunday), sunday)
    , daysTillEpiphany = daysTill(date, epiphanyDay(y))
    , weeksFromEpiphany = weeksTill(epiphanyDay(sunday), sunday)
    , weeksFromChristmas = weeksTill(sunday, christmasDay(y))
    , isChristmas = isSunday(date) && dOfMonth == "12/25"
    , isHolyName = isSunday(date) && dOfMonth == "1/1"
    , isChristmas2 = (listContains(["1/1", "1/2", "1/3", "1/4", "1/5"], dOfMonth)  && (inRange(daysTillEpiphany, 1, 5)))
    , weeksFromEaster = weeksTill(easter(y), sunday)
    , daysTillEaster = daysTill(date, easter(y))
    ;
  
    if      (rightAfterAshWednesday(date))      { return ["ashWednesday", "1", yrABC, date] }
    else if (rightAfterAscension(date))         { return ["ascension", "1", yrABC, date] }
    else if (isChristmas)                       { return ["christmasDay", "1", yrABC, date] }
    else if (isHolyName)                        { return ["holyName", "1", yrABC, date] }
    else if (christmas(y-1) == date)            { return ["christmas", "1", yrABC, date] }
    else if (isChristmas2)                      { return ["christmas", "2", yrABC, date] }
    else if (inRange(daysTillEpiphany, 6, 11))  { return ["christmas", "1", yrABC, date] }
    else if (daysTillEaster == 2)               { return ["goodFriday", "1", yrABC, date] }
    else if (inRange(daysTillEaster, 1, 6))     { return ["holyWeek", (7 - daysTillEaster).toString(), yrABC, date] }
    else if (inRange(daysTillEaster, -1, -6))   { return ["easterWeek", (0 - daysTillEaster).toString(), yrABC, date] }
    else if (inRange(weeksFromEaster, -2, -6))  { return ["lent", (7 + weeksFromEaster).toString(), yrABC, date] }
    else if (weeksFromEaster == -1)             { return ["palmSunday", "1", yrABC, date] }
    else if (weeksFromEaster == -7)             { return ["epiphany", "9", yrABC, date] }
    else if (weeksFromEaster == -8)             { return ["epiphany", "8", yrABC, date] }
    else if (weeksFromEaster == 0)              { return ["easterDay", "1", yrABC, date] }
    else if (inRange(weeksFromEaster, 0, 6))    { return ["easter", (1 + weeksFromEaster).toString(), yrABC, date] }
    else if (weeksFromEaster == 7)              { return ["pentecost", "1", yrABC, date] }
    else if (weeksFromEaster == 8)              { return ["trinity", "1", yrABC, date] }
    else if (inRange(weeksTillAdvent, 1, 27))   { return ["proper", (30 - weeksTillAdvent).toString(), yrABC, date] }
    else if (inRange(weeksTillAdvent, 0, -3))   { return ["advent", (1 - weeksTillAdvent).toString(), yrABC, date] }
    else if (inRange(weeksFromChristmas, 0, 1)) { return ["christmas", (weeksFromChristmas + 1).toString(), date] }
    else if (epiphanyBeforeSunday(date))        { return ["epiphany", "0", yrABC, date] }
    else if (inRange(weeksFromEpiphany, 0, 8))  { return ["epiphany", (weeksFromEpiphany + 1).toString(), yrABC, date] }
    else                                        { return ["unknown", "unknown", "unknown", date]}
  
}

//var hd_index =
//    { 6:    "epiphany"
//    , 18:   "confessionOfStPeter"
//    , 382:  "confessionOfStPeter" // for dates at end of dec
//    , 25:   "conversionOfStPaul"
//    , 33:   "presentation"
//    , 55:   "stMatthias"
//    , 78:   "stJoseph"
//    , 84:   "annunciation"
//    , 115:  "stMark"
//    , 121:  "stsPhilipAndJames"
//    , 151:  "visitation"
//    , 162:  "stBarnabas"
//    , 175:  "nativityOfJohnTheBaptist"
//    , 180:  "stPeterAndPaul"
//    , 182:  "dominion"
//    , 185:  "independence"
//    , 203:  "stMaryMagdalene"
//    , 206:  "stJames"
//    , 218:  "transfiguration"
//    , 227:  "bvm"
//    , 236:  "stBartholomew"
//    , 257:  "holyCross"
//    , 264:  "stMatthew"
//    , 272:  "michaelAllAngels"
//    , 291:  "stLuke"
//    , 296:  "stJames"
//    , 301:  "stsSimonAndJude"
//    , 305:  "allSaints"
//    , 315:  "remembrance"
//    , 333:  "stAndrew"
//    , 355:  "stThomas"
//    , 358:  "christmasEve"
//    , 359:  "christmasDay"
//    , 361:  "stStephen"
//    , 361:  "stJohn"
//    , 362:  "holyInnocents"
//    }
//  , hd_doy =
//    [ 0, // zero indexed
//      18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,18,25,25,25,25,25,25,25,33,33,33,33,33,33,  // jan
//      33,33,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,55,78,78,78,78,           // feb
//      78,78,78,78,78,78,78,78,78,78,78,78,78,78,78,78,78,78,78,84,84,84,84,84,84,115,115,115,115,115,115,  // mar
//      115,115,115,115,115,115,115,115,115,115,115,115,115,115,115,115,115,115,115,115,115,115,115,115,115,121,121,121,121,121,     // apr
//      121,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151,151, // may
//      162,162,162,162,162,162,162,162,162,162,162,175,175,175,175,175,175,175,175,175,175,175,175,175,180,180,180,180,180,182,     // jun
//      182,185,185,185,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,203,206,206,206,218,218,218,218,218,218, // jul
//      218,218,218,218,218,218,227,227,227,227,227,227,227,227,227,236,236,236,236,236,236,236,236,236,257,257,257,257,257,257,257, // aug
//      257,257,257,257,257,257,257,257,257,257,257,257,257,257,264,264,264,264,264,264,264,272,272,272,272,272,272,272,272,291,     // sep
//      291,291,291,291,291,291,291,291,291,291,291,291,291,291,291,291,291,291,296,296,296,296,296,301,301,301,301,301,305,305,305, // oct
//      305,315,315,315,315,315,315,315,315,315,315,333,333,333,333,333,333,333,333,333,333,333,333,333,333,333,333,333,333,333,     // nov
//      355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,355,361,361,361,361,361,362,382,382,382,382  // dec
//    ]

// weak assumption: Object.keys(rlds) will return keys in the order below
var rlds =
  { '01-18': 'confessionOfStPeter'
  , '01-25': 'conversionOfStPaul'
  , '02-02': 'presentation'
  , '02-24': 'stMatthias'
  , '03-19': 'stJoseph'
  , '03-25': 'annunciation'
  , '04-25': 'stMark'
  , '05-01': 'stsPhilipAndJames'
  , '05-31': 'visitation'
  , '06-11': 'stBarnabas'
  , '06-24': 'nativityOfJohnTheBaptist'
  , '06-29': 'stPeterAndPaul'
  , '07-01': 'dominion'
  , '07-04': 'independence'
  , '07-22': 'stMaryMagdalene'
  , '07-25': 'stJames'
  , '08-06': 'transfiguration'
  , '08-15': 'bvm'
  , '08-24': 'stBartholomew'
  , '09-14': 'holyCross'
  , '09-21': 'stMatthew'
  , '09-29': 'michaelAllAngels'
  , '10-18': 'stLuke'
  , '10-23': 'stJamesOfJerusalem'
  , '10-28': 'stsSimonAndJude'
  , '11-11': 'remembrance'
  , '11-30': 'stAndrew'
  , '12-21': 'stThomas'
  , '12-26': 'stStephen'
  , '12-27': 'stJohn'
  , '12-28': 'holyInnocents'
  }

function holyDay(date) {
  var m_d = date.format(mdFormat)
    , rld = rlds[m_d]
  if (rld == 'presentation') {return [true, rld]}
  else if ( isSunday(date)) {return [false, ""]}
  else if ( isMonday(date)) { 
    // go back and check for translated RLD
    m_d = date.add(-1, 'days').format(mdFormat)
    rld = rlds[m_d]
  }
  return (rld == undefined) ? [false, ""] : [true, rld]

}

// function holyDay(date) {
//   // need to check if date is a sunday and if yesterday was a sunday and a holy day
//   // this should probably handle christmas  & epiphany
//   // since they float around like a holy day
//   let d = date.dayOfYear() // d is numerical day of year; 1-365 or 1-366
//     , resp = []
//     ;
//   console.log("HOLYDAY: ", d)
//   if        (hd_index[d] == "presentation") { [true, "presentation"]} // don't translate The Presentation
//   else if   (isSunday(date)) { return [false, ""]}
//   else if   (isMonday(date)) {
//     // go back a day and check
//     let hd = hd_index[d - 1];
//     return (hd_index[hd] == null) ? [false, ""] : [true, hd]
//   }
//   else if (hd_index[d] == null) { return [false, ""] }
//   else { return [true, hd_index[d]] }
// }

function nextHolyDay(date) {
  var keys = Object.keys(rlds)
    , last_key = keys[keys.length - 1]
    , yr = date.year()
    , m_d = date.format(mdFormat)
  [yr, md] = (m_d >= last_key) ? [yr + 1, last_key] : [yr, md]
  keys.forEach(function(el) {
    if (md < el) {
      return [moment(yr + "-" + el), rlds[el]]
    }
  })
  return [date, "unknown"] // this should'ought'a never happen
}

// function nextHolyDay(date) {
//   let yr = date.year()
//     , day = date.day()
//     , doy = dayOfYear(date)
//     , holy_doy = hd_doy[doy]
//     , advance = (holy_doy > 365) ? holy_doy + 1 : holy_doy
//     , newDate = advDate( moment(yr + '-01-01'), advance)
//   return [newDate, hd_index[holy_doy]]
// }
// function isLeapYear(date) {
//   let yr = thisYear(date);
//   return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
// }
// function dayOfYear(date) {
//   let newYear = moment(date.year() + '-01-01 ', )
//     , doy = Math.floor( (date - newYear) / oneDay )
//   return (isLeapYear(date) && doy > leapDay) ? doy - 1 : doy;
// }
// 
function namedDayDate(name, date, wk) {
  let yr = thisYear(date);
  switch (name) {
    case "christmasDay":    moment(yr + '-12-25');           break;
    case "holyName":        mmoment(yr + 1 + '-01-01');         break;
    case "palmSunday":      palmSunday(date);               break;
    case "holyWeek":        palmSunday(date).add( wk, 'days'); break;
    case "easterDayVigil":  easter(date).add( 1, 'days');      break;
    case "easterDay":       easter(date);                   break;
    case "easterWeek":      easter(date).add( wk, 'days');      break;
    default:                date;                           break;
  }
}

function translateFromSunday(date) { return isSunday(date) ? date.add( 1, 'days') : date; }
function thanksgiving(date) {
  let yr = thisYear(date)
    , tgd = { 0: 26, 1: 25, 2: 24, 3: 23, 4: 22, 5: 28, 6: 27 }
    , dow = moment(yr + '-11-01').day() // day() is 0 indexed on sunday
  return moment({'year': yr, 'month': November, 'date': tgd[dow]})
}
function memorial(date) {
  let yr = thisYear(date)
    , md = { 0: 30, 1: 29, 2: 28, 3: 27, 4: 26, 5: 25, 6: 31 }
    , dow = moment(yr + '-05-01').day() // day() is 0 indexed on sunday
  return moment({'year': yr, 'month': May, 'date': md[dow]})
}

// dear confused programmer - for reasons for ever to remain a mystery
// javascript indexs months off 0 (jan = 0, dec = 11)
// and indexs days off of 1 (the first of the month is lo (and behold) 1)
function stAndrew(date)                 { return moment(thisYear(date) + '-11-30 ' ) }
function stThomas(date)                 { return moment(thisYear(date) + '-12-21 ' ) }
function stStephen(date)                { return moment(thisYear(date) + '-12-26 ' ) }
function stJohn(date)                   { return moment(thisYear(date) + '-12-27 ' ) }
function holyInnocents(date)            { return moment(thisYear(date) + '-12-28 ' ) }
function confessionOfStPeter(date)      { return moment(thisYear(date) + '-01-18 ' ) }
function conversionOfStPaul(date)       { return moment(thisYear(date) + '-01-25 ' ) }
function presentation(date)             { return moment(thisYear(date) + '-02-2 ' ) }
function stMatthias(date)               { return moment(thisYear(date) + '-02-24 ' ) }
function stJoseph(date)                 { return moment(thisYear(date) + '-03-19 ' ) }
function annunciation(date)             { return moment(thisYear(date) + '-03-25 ' ) }
function stMark(date)                   { return moment(thisYear(date) + '-04-25 ' ) }
function stsPhilipAndJames(date)        { return moment(thisYear(date) + '-05-1 ' ) }
function visitation(date)               { return moment(thisYear(date) + '-05-31 ' ) }
function stBarnabas(date)               { return moment(thisYear(date) + '-06-11 ' ) }
function nativityOfJohnTheBaptist(date) { return moment(thisYear(date) + '-06-24 ' ) }
function stPeterAndPaul(date)           { return moment(thisYear(date) + '-06-29 ' ) }
function dominion(date)                 { return moment(thisYear(date) + '-07-1 ' ) }
function independence(date)             { return moment(thisYear(date) + '-07-4 ' ) }
function stMaryMagdalene(date)          { return moment(thisYear(date) + '-07-22 ' ) }
function stJames(date)                  { return moment(thisYear(date) + '-07-25 ' ) }
function transfiguration(date)          { return moment(thisYear(date) + '-08-6 ' ) }
function bvm(bvm)                       { return moment(thisYear(date) + '-08-15 ' ) }
function stBartholomew(date)            { return moment(thisYear(date) + '-08-24 ' ) }
function holyCross(date)                { return moment(thisYear(date) + '-09-14 ' ) }
function stMatthew(date)                { return moment(thisYear(date) + '-09-21 ' ) }
function michaelAllAngels(date)         { return moment(thisYear(date) + '-09-29 ' ) }
function stLuke(date)                   { return moment(thisYear(date) + '-10-18 ' ) }
function stJamesOfJerusalem(date)       { return moment(thisYear(date) + '-10-23 ' ) }
function stsSimonAndJude(date)          { return moment(thisYear(date) + '-10-28 ' ) }
function remembrance(date)              { return moment(thisYear(date) + '-11-11 ' ) }

function translateFromSunday(date) { return isSunday(date) ? date.add(1, 'day') : date }

module.exports = {
    inRange: inRange
  , thisYear: thisYear
  , listContains: listContains
  , daysTill: daysTill
  , weeksTill: weeksTill
  , litYear: litYear
  , litYearName: litYearName
  , dateLastSunday: dateLastSunday
  , dateNextSunday: dateNextSunday
  , easter: easter
  , sundayInEaster: sundayInEaster
  , secondMondayAfterEaster: secondMondayAfterEaster
  , ascension: ascension
  , rightAfterAscension: rightAfterAscension
  , pentecost: pentecost
  , trinity: trinity
  , proper: proper
  , advent: advent
  , christmasDay: christmasDay
  , christmas: christmas
  , epiphanyDay: epiphanyDay
  , epiphanyBeforeSunday: epiphanyBeforeSunday
  , sundayAfterEpiphany: sundayAfterEpiphany
  , weekOfEpiphany: weekOfEpiphany
  , ashWednesday: ashWednesday
  , rightAfterAshWednesday: rightAfterAshWednesday
  , lent: lent
  , palmSunday: palmSunday
  , goodFriday: goodFriday
  , isGoodFriday: isGoodFriday
  , toSeason: toSeason
  , holyDay: holyDay
  , stAndrew: stAndrew
  , stThomas: stThomas
  , stStephen: stStephen
  , stJohn: stJohn
  , holyInnocents: holyInnocents
  , confessionOfStPeter: confessionOfStPeter
  , conversionOfStPaul: conversionOfStPaul
  , presentation: presentation
  , stMatthias: stMatthias
  , stJoseph: stJoseph
  , annunciation: annunciation
  , stMark: stMark
  , stsPhilipAndJames: stsPhilipAndJames
  , visitation: visitation
  , stBarnabas: stBarnabas
  , nativityOfJohnTheBaptist: nativityOfJohnTheBaptist
  , stPeterAndPaul: stPeterAndPaul
  , dominion: dominion
  , independence: independence
  , stMaryMagdalene: stMaryMagdalene
  , stJames: stJames
  , transfiguration: transfiguration
  , bvm: bvm
  , stBartholomew: stBartholomew
  , holyCross: holyCross
  , stMatthew: stMatthew
  , michaelAllAngels: michaelAllAngels
  , stLuke: stLuke
  , stJamesOfJerusalem: stJamesOfJerusalem
  , stsSimonAndJude: stsSimonAndJude
  , translateFromSunday: translateFromSunday
  , remembrance: remembrance
  , thanksgiving: thanksgiving
  , memorial: memorial
}
