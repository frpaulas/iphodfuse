var chai = require('chai')
  , expect = require("chai").expect
  , moment = require('moment')
  , MPEP = require("../Modules/mpep")
  ;

describe("getDailyReading", function () {
  describe('given advent, 1, Sunday', function () {
    it('contains 6 elements', function () {
      let resp = MPEP.getDailyReading('advent', 1, 'Sunday')
        ;
      expect(resp).to.have.property('title')
      expect(resp).to.have.property('colors')
      expect(resp).to.have.property('mp1')
      expect(resp).to.have.property('mp2')
      expect(resp).to.have.property('ep1')
      expect(resp).to.have.property('ep2')
    })
    it('has lists of readings', function () {
      let resp = MPEP.getDailyReading('advent', 1, 'Sunday')
        ;
      expect(resp.mp1).to.be.a('array')
      expect(resp.mp2).to.be.a('array')
      expect(resp.ep1).to.be.a('array')
      expect(resp.ep2).to.be.a('array')
    })
    describe('contents of mp1', function () {
      it('has two elements', function () {
        let mp1 = MPEP.getDailyReading('advent', 1, 'Sunday').mp1
          , first = mp1[0]
          , second = mp1[1]
          ;
        expect(mp1).to.have.lengthOf(2)
        expect(first).to.have.property('style')
        expect(first).to.have.property('read')
        expect(second).to.have.property('style')
        expect(second).to.have.property('read')
      })
      it('has styles req and opt', function () {
        let mp1 = MPEP.getDailyReading('advent', 1, 'Sunday').mp1
          , first = mp1[0]
          , second = mp1[1]
          ;
        expect(first.style).to.eql('req')
        expect(second.style).to.eql('opt')
      })
      it('has readings from Isaiah', function () {
        let mp1 = MPEP.getDailyReading('advent', 1, 'Sunday').mp1
          , first = mp1[0]
          , second = mp1[1]
          ;
        expect(first.read).to.eql('Isa 1:1-20')        
        expect(second.read).to.eql('Isa 1:21-31')
      })
    })
  })
})

describe("getDailyTitle", function () {
  describe('given advent, 1, Sunday', function () {
    it('returns First Sunday in Advent', function () {
      expect(MPEP.getDailyTitle('advent', 1, 'Sunday')).to.eql('First Sunday in Advent')
    })
  })
})

describe("getDailyColor", function () {
  describe('given advent, 1, Sunday', function () {
    it('should return list of colors', function () {
      expect(MPEP.getDailyColor('advent', 1, 'Sunday')).to.eql(["violet", "blue"])
    })
  })
  
})

describe("getDailyAntiphon", function () {
  describe('given advent', function () {
    it('returns "Our King..." given advent', function () {
      expect(MPEP.getDailyAntiphon('advent')).to.be.a('string')
      expect(MPEP.getDailyAntiphon('advent')).to.match(/^Our King and/)
    }) 
  })
})

describe("getDailyOpeningSentence", function () {
  describe('given mp & epiphany', function () {
    it('has properties vss: & ref:', function () {
      let resp = MPEP.getDailyOpeningSentence('mp', 'epiphany')
        ;
      expect(resp).to.have.property('vss')
      expect(resp).to.have.property('ref')
    })
    it('has ref: == Malachi 1:11', function () {
      expect(MPEP.getDailyOpeningSentence('mp', 'epiphany').ref).to.eql('Malachi 1:11')
    })
    it('has vss: matching /^For from/', function () {
      expect(MPEP.getDailyOpeningSentence('mp', 'epiphany').vss).to.match(/^For from/)
    })
  })
  
})

