"use strict";
var moment = require('node_modules/moment/moment')
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
  ;

function thisYear(date) { return Number.isInteger(date) ? date : moment(date).year(); }
function inRange(n, min, max) { return n >= Math.min(min, max) && n <= Math.max(min, max); }
function listContains(list, obj) { return list.indexOf(obj) >= 0; }
// function advDays(d, days) { return new Date( d.valueOf() + oneDay * days ) }
// function advWeeks(d, weeks) { return advDays(d, weeks * 7) }
function daysTill(d1, d2) { return Math.floor( (d2 - d1)/oneDay ); }
function weeksTill(d1, d2) { return Math.floor( (d2 - d1)/oneWeek ); }
function litYear(d) {
  d = moment(d);
  var yr = thisYear(d);
  return d.isSameOrAfter(advent(d, 1)) ? yr + 1 : yr;
}
function litYearName(d) { return litYearNames[ litYear(d) % 3 ]; }
function isSunday(d) { return moment(d).day() == sunday; }
function isMonday(d) { return moment(d).day() == monday; }
function daysTillSunday(d) { return 7 - moment(d).day(); }
function dateNextSunday(d) { 
  d = moment(d);
  return d.add( daysTillSunday(d), 'days') ;
}
function dateLastSunday(d) { 
  d = moment(d);
  var day = d.day();
  day = (day === 0) ? -7 : -day;
  return d.add(day, 'days') ;
}
// algorithm from http://en.wikipedia.org/wiki/Computus#cite_note-otheralgs-47
// presumes `d` is either int or date
function easter(thisDate) {
  var year = thisYear(thisDate) 
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
function sundayInEaster(d, n) { 
  d = moment(d);
  return easter(d).add(n - 1, 'weeks');
}
function secondMondayAfterEaster(d) {
  d = moment(d);
  return easter(d).add(8, 'days');
}
function ascension(d) { 
  d = moment(d);
  return easter(d).add(39, 'days');
}
function rightAfterAscension(d) {
  d = moment(d);
  var a = ascension(d)
    , ascen = d.isSameOrAfter(a)
    , beforeSaad = d.isBefore(sundayAfterAscension(d)) // saad - sunday after ascension day
    ;
    return ascen && beforeSaad;
}
function sundayAfterAscension(d) { 
  d = moment(d);
  return sundayInEaster(d, 7) ;
}
function pentecost(d, n) { 
  d = moment(d);
  return easter(d).add(n + 6, 'weeks') ;
}
function trinity(d) { 
  d = moment(d);
  return pentecost(d, 2) ;
}
function proper(d, n) { 
  d = moment(d);
  return advent(d, n - 29) ;
}
function christmasDay(d) { 
  d = moment(d);
  return moment(thisYear(d) + '-12-25') ;
}
function christmas(d, n) { 
  d = moment(d);
  var y = thisYear(d)
    , sundayAfter = dateNextSunday( christmasDay(y) )
    ;
  return (n == 2) ? sundayAfter.add(1, 'weeks') : sundayAfter;
}
function advent(d, n) { 
  d = moment(d);
  var sundayBefore = dateLastSunday(christmasDay(d));
  return sundayBefore.add(n - 4, 'weeks'); 
}
function epiphanyDay(d) { return moment(thisYear(d) + '-01-06'); }
function epiphanyBeforeSunday(d) { 
  d = moment(d);
  return d.isSameOrAfter(epiphanyDay(d)) && d.isBefore(weekOfEpiphany(d, 1)) ;
}
function sundayAfterEpiphany(d) { 
  d = moment(d);
  return dateNextSunday( epiphanyDay(d) ) ;
}
function weekOfEpiphany(d, n) { 
  d = moment(d);
  return sundayAfterEpiphany(d).add(n - 1, 'weeks');
}
function ashWednesday(d) { 
  d = moment(d);
  return easter(d).add( -46, 'days');
}
function rightAfterAshWednesday(d) { 
  d = moment(d);
  return d.isSameOrAfter(ashWednesday(d)) && d.isBefore(lent(d, 1)); 
}
function lent(d, n) { 
  d = moment(d);
  return easter(d).add( n - 7, 'weeks') ;
}
function palmSunday(d) { 
  d = moment(d);
  return easter(d).add( -1, 'weeks') ;
}
function goodFriday(d) { 
  d = moment(d);
  return easter(d).add( -2, 'days') ;
}
function isGoodFriday(d) { 
  d = moment(d);
  return d.isSame(goodFriday(d)) ;
}
function toSeason(date) {
  date = moment(date);
  var sunday = isSunday(date) ? date : dateLastSunday(moment(date))
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
  
    if      (rightAfterAshWednesday(date))      { return {season: "ashWednesday", week: "1", year: yrABC, date: date}; }
    else if (rightAfterAscension(date))         { return {season: "ascension", week: "1", year: yrABC, date: date}; }
    else if (isChristmas)                       { return {season: "christmasDay", week: "1", year: yrABC, date: date}; }
    else if (isHolyName)                        { return {season: "holyName", week: "1", year: yrABC, date: date}; }
    else if (christmas(y-1) == date)            { return {season: "christmas", week: "1", year: yrABC, date: date}; }
    else if (isChristmas2)                      { return {season: "christmas", week: "2", year: yrABC, date: date}; }
    else if (inRange(daysTillEpiphany, 6, 11))  { return {season: "christmas", week: "1", year: yrABC, date: date}; }
    else if (daysTillEaster == 2)               { return {season: "goodFriday", week: "1", year: yrABC, date: date}; }
    else if (inRange(daysTillEaster, 1, 6))     { return {season: "holyWeek", week: (7 - daysTillEaster).toString(), year: yrABC, date: date}; }
    else if (inRange(daysTillEaster, -1, -6))   { return {season: "easterWeek", week: (0 - daysTillEaster).toString(), year: yrABC, date: date}; }
    else if (inRange(weeksFromEaster, -2, -6))  { return {season: "lent", week: (7 + weeksFromEaster).toString(), year: yrABC, date: date}; }
    else if (weeksFromEaster == -1)             { return {season: "palmSunday", week: "1", year: yrABC, date: date}; }
    else if (weeksFromEaster == -7)             { return {season: "epiphany", week: "9", year: yrABC, date: date}; }
    else if (weeksFromEaster == -8)             { return {season: "epiphany", week: "8", year: yrABC, date: date}; }
    else if (weeksFromEaster === 0)              { return {season: "easterDay", week: "1", year: yrABC, date: date}; }
    else if (inRange(weeksFromEaster, 0, 6))    { return {season: "easter", week: (1 + weeksFromEaster).toString(), year: yrABC, date: date}; }
    else if (weeksFromEaster == 7)              { return {season: "pentecost", week: "1", year: yrABC, date: date}; }
    else if (weeksFromEaster == 8)              { return {season: "trinity", week: "1", year: yrABC, date: date}; }
    else if (inRange(weeksTillAdvent, 1, 27))   { return {season: "proper", week: (30 - weeksTillAdvent).toString(), year: yrABC, date: date}; }
    else if (inRange(weeksTillAdvent, 0, -3))   { return {season: "advent", week: (1 - weeksTillAdvent).toString(), year: yrABC, date: date}; }
    else if (inRange(weeksFromChristmas, 0, 1)) { return {season: "christmas", week: (weeksFromChristmas + 1).toString(), year: yrABC, date: date}; }
    else if (epiphanyBeforeSunday(date))        { return {season: "epiphany", week: "0", year: yrABC, date: date}; }
    else if (inRange(weeksFromEpiphany, 0, 8))  { return {season: "epiphany", week: (weeksFromEpiphany + 1).toString(), year: yrABC, date: date}; }
    else                                        { return {season: "unknown", week: "unknown", year: "unknown",date: date}; }
  
}

function getSeasonName(season) {
return {
    advent: 'Advent'
  , christmas: 'Christmas'
  , christmasDay: 'Christmas Day'
  , holyName: 'Holy Name'
  , epiphany: 'Epiphany'
  , ashWednesday: 'Ash Wednesday'
  , lent: 'Lent'
  , palmSunday: 'Palm Sunday'
  , holyWeek: 'Holy Week'
  , goodFriday: 'Good Friday'
  , easter: 'Easter'
  , easterDay: 'Easter Day'
  , easterWeek: 'Easter Week'
  , ascension: 'Ascension'
  , pentecost: 'Pentecost'
  , trinity: 'Trinity Sunday'
  , proper: 'Season after Pentecost'
  }[season];
}

function getCanticle(office, season, day, reading) {
  switch(office) {
    case 'mp':
      switch(reading) {
        case 'ot':
          switch(day){
            case 'Sunday':
              switch(season) {
                case 'advent': return "surge_illuminare";
                case 'easter': return "cantemus_domino";
                case 'lent': return "kyrie_pantokrator";
                default: return "benedictus";
              }
              break;
            case 'Monday':
              switch(season) {
                case 'lent': return "quaerite_dominum";
                default: return "ecce_deus";
              }
              break;
            case 'Tuesday':
              switch(season){
                case 'lent': return "quaerite_dominum";
                default: return "benedictis_es_domine";
              }
              break;
            case 'Wednesday':
              switch(season){
                case 'lent': return "kyrie_pantokrator";
                default: return "surge_illuminare";
              }
              break;
            case 'Thursday':
              switch(season){
                case 'lent': return "quaerite_dominum";
                default: return "cantemus_domino";
              }
              break;
            case 'Friday':
              switch(season){
                case 'lent': return "kyrie_pantokrator";
                case 'easter': return "te_deum";
                case 'easterWeek': return "te_deum";
                default: return "quaerite_dominum";
              }
              break;
            case 'Saturday':
              switch(season){
                case 'lent': return "quaerite_dominum";
                default: return "benedicite_omnia_opera_domini";
              }
          }
          break;
        case 'nt':
          switch(day){
            case 'Sunday':
              switch(season) {
                case 'advent': return "benedictus";
                case 'easter': return "cantemus_domino";
                case 'lent': return "benedictus";
                default: return "benedictus";
              }
              break;
            case 'Thursday':
              switch(season){
                case 'advent': return "magna_et_mirabilia";
                case 'lent': return "magna_et_mirabilia";
                default: return "cantemus_domino";
              }
              break;
            default: return "benedictus";
          }
      }
      break;
    case 'ep':
      switch(reading) {
        case 'ot': 
          switch('day'){
            case 'Sunday':return  "magnificat";
            case 'Monday':
              switch(season) {
                case 'lent': return "kyrie_pantokrator";
                default: return "cantemus_domino";
              }
              break;
            case 'Tuesday': return "quaerite_dominum";
            case 'Wednesday': return "benedicite_omnia_opera_domini";
            case 'Thursday': return "surge_illuminare";
            case 'Friday': return "benedictis_es_domine";
            case 'Saturday': return "ecce_deus";
          }
          break;
        case 'nt': 
          switch('day'){
            case 'Sunday': return "nunc_dimittis";
            case 'Monday': return "nunc_dimittis";
            case 'Tuesday': return "magnificat";
            case 'Wednesday': return "nunc_dimittis";
            case 'Thursday': return "magnificat";
            case 'Friday': return "nunc_dimittis";
            case 'Saturday': return "magnificat";
          }
      }
  }
}

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
  };

function holyDay(date) {
  date = moment(date);
  var m_d = date.format(mdFormat)
    , rld = rlds[m_d]
    ;
  if (rld == 'presentation') {return [true, rld]; }
  else if ( isSunday(date)) {return [false, ""]; }
  else if ( isMonday(date)) { 
    // go back and check for translated RLD
    m_d = date.add(-1, 'days').format(mdFormat);
    rld = rlds[m_d];
  }
  return (rld === undefined) ? [false, ""] : [true, rld];

}

function nextHolyDay(date) {
  date = moment(date);
  var keys = Object.keys(rlds)
    , last_key = keys[keys.length - 1]
    , yr = date.year()
    , m_d = date.format(mdFormat) // month_day
    ;
  if (m_d >= last_key) {
    yr = yr + 1;
    m_d = last_key;
  }
  keys.forEach(function(el) {
    if (m_d < el) {
      return [moment(yr + "-" + el), rlds[el]];
    }
  });
  return [date, "unknown"]; // this should'ought'a never happen
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
  date = moment(date);
  var yr = thisYear(date);
  switch (name) {
    case "christmasDay":    return moment(yr + '-12-25');
    case "holyName":        return moment(yr + 1 + '-01-01');
    case "palmSunday":      return palmSunday(date);
    case "holyWeek":        return palmSunday(date).add( wk, 'days');
    case "easterDayVigil":  return easter(date).add( 1, 'days');
    case "easterDay":       return easter(date);
    case "easterWeek":      return easter(date).add( wk, 'days');
    default:                return date;
  }
}

function translateFromSunday(date) { 
  date = moment(date);
  return isSunday(date) ? date.add( 1, 'days') : date; 
}
function thanksgiving(date) {
  date = moment(date);
  var yr = thisYear(date)
    , tgd = { 0: 26, 1: 25, 2: 24, 3: 23, 4: 22, 5: 28, 6: 27 }
    , dow = moment(yr + '-11-01').day() // day() is 0 indexed on sunday
    ;
  return moment({'year': yr, 'month': November, 'date': tgd[dow]});
}
function memorial(date) {
  date = moment(date);
  var yr = thisYear(date)
    , md = { 0: 30, 1: 29, 2: 28, 3: 27, 4: 26, 5: 25, 6: 31 }
    , dow = moment(yr + '-05-01').day() // day() is 0 indexed on sunday
    ;
  return moment({'year': yr, 'month': May, 'date': md[dow]});
}

// dear confused programmer - for reasons for ever to remain a mystery
// javascript indexs months off 0 (jan = 0, dec = 11)
// and indexs days off of 1 (the first of the month is lo (and behold) 1)
function stAndrew(date)                 { return moment(thisYear(date) + '-11-30 ' ); }
function stThomas(date)                 { return moment(thisYear(date) + '-12-21 ' ); }
function stStephen(date)                { return moment(thisYear(date) + '-12-26 ' ); }
function stJohn(date)                   { return moment(thisYear(date) + '-12-27 ' ); }
function holyInnocents(date)            { return moment(thisYear(date) + '-12-28 ' ); }
function confessionOfStPeter(date)      { return moment(thisYear(date) + '-01-18 ' ); }
function conversionOfStPaul(date)       { return moment(thisYear(date) + '-01-25 ' ); }
function presentation(date)             { return moment(thisYear(date) + '-02-2 ' ); }
function stMatthias(date)               { return moment(thisYear(date) + '-02-24 ' ); }
function stJoseph(date)                 { return moment(thisYear(date) + '-03-19 ' ); }
function annunciation(date)             { return moment(thisYear(date) + '-03-25 ' ); }
function stMark(date)                   { return moment(thisYear(date) + '-04-25 ' ); }
function stsPhilipAndJames(date)        { return moment(thisYear(date) + '-05-1 ' ); }
function visitation(date)               { return moment(thisYear(date) + '-05-31 ' ); }
function stBarnabas(date)               { return moment(thisYear(date) + '-06-11 ' ); }
function nativityOfJohnTheBaptist(date) { return moment(thisYear(date) + '-06-24 ' ); }
function stPeterAndPaul(date)           { return moment(thisYear(date) + '-06-29 ' ); }
function dominion(date)                 { return moment(thisYear(date) + '-07-1 ' ); }
function independence(date)             { return moment(thisYear(date) + '-07-4 ' ); }
function stMaryMagdalene(date)          { return moment(thisYear(date) + '-07-22 ' ); }
function stJames(date)                  { return moment(thisYear(date) + '-07-25 ' ); }
function transfiguration(date)          { return moment(thisYear(date) + '-08-6 ' ); }
function bvm(date)                      { return moment(thisYear(date) + '-08-15 ' ); }
function stBartholomew(date)            { return moment(thisYear(date) + '-08-24 ' ); }
function holyCross(date)                { return moment(thisYear(date) + '-09-14 ' ); }
function stMatthew(date)                { return moment(thisYear(date) + '-09-21 ' ); }
function michaelAllAngels(date)         { return moment(thisYear(date) + '-09-29 ' ); }
function stLuke(date)                   { return moment(thisYear(date) + '-10-18 ' ); }
function stJamesOfJerusalem(date)       { return moment(thisYear(date) + '-10-23 ' ); }
function stsSimonAndJude(date)          { return moment(thisYear(date) + '-10-28 ' ); }
function remembrance(date)              { return moment(thisYear(date) + '-11-11 ' ); }

function translateFromSunday(date) { return isSunday(date) ? date.add(1, 'day') : date; }

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
  , getSeasonName: getSeasonName
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
};
