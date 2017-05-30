var chai = require('chai')
  , expect = require("chai").expect
  , moment = require('moment')
  , lityear = require("../Modules/lityear")
  , January = 0,    February = 1,   March = 2,      April = 3
  , May = 4,        June = 5,       July = 6,       August = 7
  , September = 8,  October = 9,    November = 10,  December = 11
  ;

describe("LitYear", function () {
  describe("inRange", function() {
    it("checks if a number is in range", function(){
      expect(lityear.inRange(1, 1, 2)).to.be.true;
      expect(lityear.inRange(2, 2, 2)).to.be.true;
      expect(lityear.inRange(0, 1, 2)).to.be.false;
      expect(lityear.inRange(3, 1, 2)).to.be.false;
      expect(lityear.inRange(1, 2, 1)).to.be.true;
      expect(lityear.inRange(-1, -1, -2)).to.be.true;
      expect(lityear.inRange(-1, -2, -1)).to.be.true;
    })
  })

  describe("thisYear", function() {
    it("returns the year if given a date", function(){
      expect(lityear.thisYear(moment('2017-05-10'))).to.eql(2017);
    })
    it("returns the interger if given an integer", function(){
      expect(lityear.thisYear(2012)).to.eql(2012)
    })
  })

  describe('listContains', function () {
    it('returns true if obj is in list, otherwise false', function () {
      let list = [1,2,3]
      expect(lityear.listContains(list, 1)).to.be.true
      expect(lityear.listContains(list, 4)).to.be.false
      expect(lityear.listContains(list, 'blork')).to.be.false
      expect(lityear.listContains(list, '1')).to.be.false
    })
  })

  describe("daysTill", function () {
    it("returns number of days from first date to the second", function () {
      let d1 = moment('2017-01-01')
        , d2 = moment('2017-01-31')
        , d3 = moment('2017-02-01')
      expect(lityear.daysTill(d1, d2)).to.eql(30)
      expect(lityear.daysTill(d2, d1)).to.eql(-30)
      expect(lityear.daysTill(d1, d3)).to.eql(31)
    })
  })

  describe("weeksTill", function () {
    it("returns number of weeks from first date to second date", function () {
      let d1 = moment('2017-01-01')
        , d2 = moment('2017-01-05')
        , d3 = moment('2017-01-15')
      expect(lityear.weeksTill(d1, d2)).to.eql(0)
      expect(lityear.weeksTill(d1, d3)).to.eql(2)
      expect(lityear.weeksTill(d3, d1)).to.eql(-2)
      expect(lityear.weeksTill(d2, d1)).to.eql(-1)
    })
  })

  describe("litYear", function () {
    it("returns liturgical year when given a date", function() {
      let d1 = moment('2017-11-01')
        , d2 = moment('2017-12-25')
      expect(lityear.litYear(d1)).to.eql(2017)
      expect(lityear.litYear(d2)).to.eql(2018)
    })
  })

  describe("litYearName", function () {
    it("returns name of liturgical year when given a date", function() {
      let d1 = moment('2017-11-01')
        , d2 = moment('2017-12-25')
      expect(lityear.litYearName(d1)).to.eql("a")
      expect(lityear.litYearName(d2)).to.eql("b")
    })
  })

  describe("dateLastSunday", function () {
    it("returns the date of last sunday when given a date", function () {
      let d1 = moment('2017-01-07')
        , d2 = moment('2017-01-01')
        , d3 = moment('2016-12-25')
      expect(lityear.dateLastSunday(d1).isSame(d2)).to.be.true
      expect(lityear.dateLastSunday(d2).isSame(d3)).to.be.true
    })
  })

  describe("dateNextSunday", function () {
    it("returns the date of last sunday when given a date", function () {
      let d1 = moment('2017-12-25')
        , d2 = moment('2017-12-31')
        , d3 = moment('2018-01-07')
      expect(lityear.dateNextSunday(d1).isSame(d2)).to.be.true //eql(d2)
      expect(lityear.dateNextSunday(d2).isSame(d3)).to.be.true //eql(d3)
    })
  })

  describe("advent", function () {
    it("returns date for weeks in Advent given either a date or year", function () {
      let a1 = moment('2017-12-03')
        , a4 = moment('2017-12-24')
        , d1 = moment('2017-05-15')
      expect(lityear.advent(2017, 1).isSame('2017-12-03')).to.be.true // eql(a1)
      // more tests here
    })
  })

  describe("christmas", function () {
    // takes either date, year and n (sundays after christmas)
    // n should be 1 or 2; if 2, 2nd sunday afterwards, otherwise 1st
    it("returns date for weeks in Christmas given either a date or year", function () {
      expect(lityear.christmas(2017, 1).isSame('2017-12-31')).to.be.true // eql(c1)
      expect(lityear.christmas(2017, 99).isSame('2017-12-31')).to.be.true // eql(c1)
      expect(lityear.christmas(2017, 2).isSame('2018-01-07')).to.be.true // eql(c2)

    })
  })

  describe("christmasDay", function () {
    it("returns date for Christmas Day given either a date or year", function () {
      expect(lityear.christmasDay(2017).isSame('2017-12-25')).to.be.true // eql(c1)
    })
  })

  describe("Easter Season: ", function () {
    describe("easter", function () {
      // 20th April 2014   10th April 2039    6th April 2064    3rd April 2089
      //  5th April 2015    1st April 2040   29th March 2065   16th April 2090
      // 27th March 2016   21st April 2041   11th April 2066    8th April 2091
      // 16th April 2017    6th April 2042    3rd April 2067   30th March 2092
      it("returns correct date for easter given a year", function () {
        expect(lityear.easter(2014).isSame('2014-04-20')).to.be.true
        expect(lityear.easter(2015).isSame('2015-04-05')).to.be.true
        expect(lityear.easter(2016).isSame('2016-03-27')).to.be.true
        expect(lityear.easter(2017).isSame('2017-04-16')).to.be.true
        expect(lityear.easter(2039).isSame('2039-04-10')).to.be.true
        expect(lityear.easter(2040).isSame('2040-04-01')).to.be.true
        expect(lityear.easter(2041).isSame('2041-04-21')).to.be.true
        expect(lityear.easter(2042).isSame('2042-04-06')).to.be.true
        expect(lityear.easter(2064).isSame('2064-04-06')).to.be.true
        expect(lityear.easter(2065).isSame('2065-03-29')).to.be.true
        expect(lityear.easter(2066).isSame('2066-04-11')).to.be.true
        expect(lityear.easter(2067).isSame('2067-04-03')).to.be.true
        expect(lityear.easter(2089).isSame('2089-04-03')).to.be.true
        expect(lityear.easter(2090).isSame('2090-04-16')).to.be.true
        expect(lityear.easter(2091).isSame('2091-04-08')).to.be.true
        expect(lityear.easter(2092).isSame('2092-03-30')).to.be.true
      })
    })

    describe("palmSunday", function () {
      it("returns the date of Palm Sunday given a year", function () {
        expect(lityear.palmSunday(2018).isSame('2018-03-25')).to.be.true
      })
    })
  
    describe("goodFriday", function () {
      it("returns the date of Good Friday given a year", function () {
        expect(lityear.goodFriday(2018).isSame('2018-03-30')).to.be.true
      })
    })
  
    describe('isGoodFriday', function () {
      it('returns true if given date is Good Friday, else false', function () {
        expect(lityear.isGoodFriday(moment('2018-03-30'))).to.be.true
        expect(lityear.isGoodFriday(moment('2018-03-29'))).to.be.false          
      })
    })

    describe("sundayInEaster", function () {
      it("returns the correct date for the nth sunday in easter", function () {
        let e = moment('2018-04-01')
          , e2 = moment('2018-04-08')
          , e4 = moment('2018-04-22')
        expect(lityear.sundayInEaster(2018, 1).isSame(e)).to.be.true //eql(e)
        expect(lityear.sundayInEaster(2018, 2).isSame(e2)).to.be.true //eql(e2)
        expect(lityear.sundayInEaster(2018, 4).isSame(e4)).to.be.true //eql(e4)
      })
    })
  
    describe("secondMondayAfterEaster", function() {
      it("returns date of second monday after easter", function() {
        expect(lityear.secondMondayAfterEaster(2018).isSame('2018-04-09')).to.be.true
      })
    })
  
    describe("Ascension", function() {
      describe("ascension", function() {
        it("returns date of ascension", function() {
          expect(lityear.ascension(2018).isSame('2018-05-10')).to.be.true
        })
      })
      describe("rightAfterAscension", function () {
        it("returns true if date is between Ascension and bafore Sunday following", function () {
          let asc = moment('2018-05-10')
            , fri = moment('2018-05-11')
            , sat = moment('2018-05-12')
            , sun = moment('2018-05-13')
          expect(lityear.rightAfterAscension(asc)).to.be.true
          expect(lityear.rightAfterAscension(fri)).to.be.true
          expect(lityear.rightAfterAscension(sat)).to.be.true
          expect(lityear.rightAfterAscension(sun)).to.be.false
        })
      })
    })
    
  })

  describe("Season of Pentecost: ", function () {
    describe("pentecost", function () {
      it("returns dates of weeks of pentecost", function () {
        let pen = moment('2018-05-20')
          , p2 = moment('2018-05-27')
        expect(lityear.pentecost(2018, 1).isSame(pen)).to.be.true //eql(pen)
        expect(lityear.pentecost(2018, 2).isSame(p2)).to.be.true //eql(p2)
      })
    })
    describe("trinity", function () {
      it("returns date of Trinity Sunday", function () {
        expect(lityear.trinity(2018).isSame('2018-05-27')).to.be.true
      })
    })
    describe("proper", function () {
      it("returns date of proper sunday given year and n", function () {
        let p29 = moment('2016-11-20')
          , p4  = moment('2017-06-04')
        expect(lityear.proper(2016, 29).isSame(p29)).to.be.true // eql(p29)
        expect(lityear.proper(2017, 4).isSame(p4)).to.be.true // eql(p4)
      })
    })
  })

  describe("Season of Epiphany: ", function () {
    describe("epiphanyDay", function () {
      it("returns date of Epiphany", function () {
        expect(lityear.epiphanyDay(2018).isSame('2018-01-06')).to.be.true
      })
    })
    describe('epiphanyBeforeSunday', function () {
      it("returns true if date is between epiphany and first sunday in epiphany", function  () {
        let d1 = moment('2017-01-07')
          , d2 = moment('2017-01-06')
          , d3 = moment('2017-01-08') // sunday
          , d4 = moment('2018-01-07') // sunday, epiphany is on saturday
          , d5 = moment('2017-02-06')
        expect(lityear.epiphanyBeforeSunday(d1)).to.be.true
        expect(lityear.epiphanyBeforeSunday(d2)).to.be.true
        expect(lityear.epiphanyBeforeSunday(d3)).to.be.false
        expect(lityear.epiphanyBeforeSunday(d4)).to.be.false
        expect(lityear.epiphanyBeforeSunday(d5)).to.be.false
      })
    })
    describe("sundayAfterEpiphany", function () {
      it("returns date of First Sunday after Epiphany", function () {
        let d1 = moment('2019-01-13') // epiphany on Sunday in 2019
          , d2 = moment('2018-01-07')
        expect(lityear.sundayAfterEpiphany(2019).isSame(d1)).to.be.true // eql(d1)
        expect(lityear.sundayAfterEpiphany(2018).isSame(d2)).to.be.true // eql(d2)
      })
    })
    describe("weekOfEpiphany", function () {
      it("returns date of the nth sunday in Epiphany", function () {
        let ep1 = moment('2018-01-07')
          , ep4 = moment('2018-01-28')
        expect(lityear.weekOfEpiphany(2018, 1).isSame(ep1)).to.be.true
        expect(lityear.weekOfEpiphany(2018, 4).isSame(ep4)).to.be.true
      })
    })
  })

  describe("Season of Lent: ", function () {
    describe("ashWednesday", function () {
      it("returns the date of Ash Wednesday given the year", function () {
        let aw = moment()
        expect(lityear.ashWednesday(2018).isSame('2018-02-14')).to.be.true
      })
    })
    describe("rightAfterAshWednesay", function () {
      it("returns true if date is between Ash Wednesday and before Lent 1", function () {
        let aw = moment('2018-02-14')
          , thu = moment('2018-02-15') // thursday
          , fri = moment('2018-02-16')
          , sat = moment('2018-02-17')
          , sun = moment('2018-02-18')
        expect(lityear.rightAfterAshWednesday(aw)).to.be.true
        expect(lityear.rightAfterAshWednesday(thu)).to.be.true
        expect(lityear.rightAfterAshWednesday(fri)).to.be.true
        expect(lityear.rightAfterAshWednesday(sat)).to.be.true
        expect(lityear.rightAfterAshWednesday(sun)).to.be.false
      })
    })
    describe("lent", function () {
      it("returns date of nth sunday in lent", function () {
        let expected = moment('2018-02- 18')
          , recvd = lityear.lent(2018, 1)
        expect(expected.isSame(recvd)).to.be.true
      })
    })
  })

  describe("toSeason", function () {
    it('returns season tuple for all mondays in epiphany', function () {
      let d = moment('2017-02-06')
      expect(lityear.toSeason(d)).is.eql(["epiphany", "5", "a", d])
    })
    it('returns correct Sunday in Lent', function () {
      let l1 = moment('2017-03-06')
      expect(lityear.toSeason(l1)).is.eql(["lent", "1", "a", l1])
    })
    it('returns correct Sunday in Epiphany', function () {
      let c2 = moment('2017-01-03')
        , ep = moment('2017-01-06')
        , e0 = moment('2017-01-07')
        , e1 = moment('2017-01-08')
      expect(lityear.toSeason(c2)).to.eql( ['christmas', '2', 'a', c2])
      expect(lityear.toSeason(ep)).to.eql( ['epiphany', '0', 'a', ep])
      expect(lityear.toSeason(e0)).to.eql( ['epiphany', '0', 'a', e0])
      expect(lityear.toSeason(e1)).to.eql( ['epiphany', '1', 'a', e1])
    })
    it("should return season of ashWednesday between Ash Wednesday and before Lent 1", function () {
      let aw = moment('2017-03-01');
      expect(lityear.toSeason(aw)).to.eql(["ashWednesday", "1", "a", aw])
    })
    it("should return holy week and day of week (mon == 1) during Holy Week", function () {
      // n.b. good friday does its own thing
      let mon = moment('2017-04-10')
        , tue = moment('2017-04-11')
        , wed = moment('2017-04-12')
        , thu = moment('2017-04-13')
        , sat = moment('2017-04-15')
      expect(lityear.toSeason(mon)).to.eql(["holyWeek", "1", "a", mon])
      expect(lityear.toSeason(tue)).to.eql(["holyWeek", "2", "a", tue])
      expect(lityear.toSeason(wed)).to.eql(["holyWeek", "3", "a", wed])
      expect(lityear.toSeason(thu)).to.eql(["holyWeek", "4", "a", thu])
      // expect(lityear.toSeason(fri)).to.eql(["holyWeek", "5", "a", fri])
      expect(lityear.toSeason(sat)).to.eql(["holyWeek", "6", "a", sat])
    })
    it('should return easterWeek and day of week (mon == 1) during easter week', function () {
      let mon = moment('2017-04-17')
        , tue = moment('2017-04-18')
        , wed = moment('2017-04-19')
        , thu = moment('2017-04-20')
        , fri = moment('2017-04-21')
        , sat = moment('2017-04-22')
      expect(lityear.toSeason(mon)).to.eql(["easterWeek", "1", "a", mon])
      expect(lityear.toSeason(tue)).to.eql(["easterWeek", "2", "a", tue])
      expect(lityear.toSeason(wed)).to.eql(["easterWeek", "3", "a", wed])
      expect(lityear.toSeason(thu)).to.eql(["easterWeek", "4", "a", thu])
      expect(lityear.toSeason(fri)).to.eql(["easterWeek", "5", "a", fri])
      expect(lityear.toSeason(sat)).to.eql(["easterWeek", "6", "a", sat])
    })
    it('should ascension 1 on Ascension Day', function () {
      let asc = moment('2017-05-25')
      expect(lityear.toSeason(asc)).to.eql(["ascension", "1", "a", asc])
    })
  })

  describe('Translate', function () {
    describe('translateFromSunday', function () {
      it('should return date of next day if date is a Sunday', function () {
        let sun = moment('2017-03-19')
          , mon = moment('2017-03-20')
        expect(lityear.translateFromSunday(sun).isSame(mon)).to.be.true
      })
      it('should return itself if date is not a Sunday', function () {
        let mon = moment('2017-03-20')
        expect(lityear.translateFromSunday(mon).isSame(mon)).to.be.true
      })
    })
    describe('holyDay', function () {
      it('should show false if holy day is on Sunday (with exceptions) else true', function () {
        // takes into account translation of holy days from sunday to monday
        let sun = moment('2017-03-19')
          , hd  = moment('2017-03-20')
        // St. Joseph falls on Sunday and holyDay should be false
        expect(lityear.holyDay(sun)).is.eql([false, ""])
        // the following day should show as St. Joseph
        expect(lityear.holyDay(hd)).is.eql([true, 'stJoseph'])
      })
    })
    describe('Handling The Transfiguration', function () {
      it('should move Transfiguration from Sunday to Monday', function () {
        expect(lityear.holyDay(moment('2017-08-06'))).to.eql([false, ''])
        expect(lityear.holyDay(moment('2017-08-07'))).to.eql([true, 'transfiguration'])
      })
    })
    describe('The Presentation', function () {
      it('should not be translated', function () {
        let pres = moment('2020-02-02')
        expect(pres.day()).to.eql(0) // make sure it's on a sunday for the test
        expect(lityear.holyDay(pres)).to.eql([true, 'presentation'])
      })
    })
  }) // end of translate

  describe('Finding Thanksgiving', function () {
    it('should give correct date for Thanksgiving', function () {
      expect(lityear.thanksgiving(2012).isSame(moment('2012-11-22'))).to.be.true
      expect(lityear.thanksgiving(2013).isSame(moment('2013-11-28'))).to.be.true
      expect(lityear.thanksgiving(2014).isSame(moment('2014-11-27'))).to.be.true
      expect(lityear.thanksgiving(2015).isSame(moment('2015-11-26'))).to.be.true
      expect(lityear.thanksgiving(2016).isSame(moment('2016-11-24'))).to.be.true
      expect(lityear.thanksgiving(2017).isSame(moment('2017-11-23'))).to.be.true
      expect(lityear.thanksgiving(2022).isSame(moment('2022-11-24'))).to.be.true
      expect(lityear.thanksgiving(2021).isSame(moment('2021-11-25'))).to.be.true
    })
  })

  describe('Finding Memorial Day', function () {
    it('should give correct date for Memorial Day', function () {
      expect(lityear.memorial(2016).isSame(moment('2016-05-30'))).to.be.true
      expect(lityear.memorial(2017).isSame(moment('2017-05-29'))).to.be.true
      expect(lityear.memorial(2018).isSame(moment('2018-05-28'))).to.be.true
      expect(lityear.memorial(2019).isSame(moment('2019-05-27'))).to.be.true
      expect(lityear.memorial(2020).isSame(moment('2020-05-25'))).to.be.true
      expect(lityear.memorial(2021).isSame(moment('2021-05-31'))).to.be.true
      expect(lityear.memorial(2025).isSame(moment('2025-05-26'))).to.be.true
      expect(lityear.memorial(2026).isSame(moment('2026-05-25'))).to.be.true
    })
  })

})