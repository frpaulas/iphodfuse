var chai = require('chai')
  , expect = require('chai').expect
  , WEBBible = require('../Modules/WEBBible')
  ;

describe('WEBBible', function () {
  describe('getReading("1 chron", 1)', function () {
    it('gives title as 1 Chronicles', function () {
      let title = WEBBible.getReading('1 chron', 1).title;
      expect(title).to.eql('1 Chronicles')
    })
    it('give entire chapter of 1 Chronicles', function () {
      let vss = WEBBible.getReading('1 chron', 1).vss;
      expect(vss).to.have.length(54)
    })
  })
  describe('getReading("rom", 1, 30)', function () {
    it('gives vss 30 - 32 (last verse)', function () {
      let vss = WEBBible.getReading("rom", 1, 30).vss;
      expect(vss).to.have.length(3)
    })
    it('gives vss 30 - 32 (last verse)', function () {
      let vss = WEBBible.getReading("rom", 1, 30).vss;
      expect(vss[0].number).to.equal('30')
      expect(vss[1].number).to.equal('31')
      expect(vss[2].number).to.equal('32')
    })
    it('gives class for all vss', function () {
      let vss = WEBBible.getReading("rom", 1, 30).vss;
      // each vs in vss has a list of {class: nn, text: ...}
      expect(vss[0].vs[0].class).to.equal('vs')
      expect(vss[1].vs[0].class).to.equal('vs')
      expect(vss[2].vs[0].class).to.equal('vs')
    })
    it('gives text for all vss', function () {
      var vss = WEBBible.getReading("rom", 1, 30).vss
        ;
      // second member of tuple is an array of classes & text
      // [{class: xx, text: zz} ...] 
      expect(vss[0].vs[0].text).to.match(/backbiters, hateful to God/)
      expect(vss[1].vs[0].text).to.match(/without understanding/)
      expect(vss[2].vs[0].text).to.match(/who, knowing the ordinance of God/)
    })
    it('does not contain the words of Jesus', function () {
      var vss = WEBBible.getReading('rom', 1, 30).vss
        ;
      expect(vss[0].vs[0].wj).to.not.be.ok
      expect(vss[1].vs[0].wj).to.not.be.ok
      expect(vss[2].vs[0].wj).to.not.be.ok
    })
  })
  describe('getReading("rom", 1, 30, 31)', function () {
    it('gives vss 30 - 31', function () {
      let vss = WEBBible.getReading("rom", 1, 30, 31).vss;
      expect(vss).to.have.length(2)
    })
    it('gives vss 30 - 31', function () {
      let vss = WEBBible.getReading("rom", 1, 30, 31).vss;
      expect(vss[0].number).to.equal('30')
      expect(vss[1].number).to.equal('31')
    })
    it('gives class for all vss', function () {
      let vss = WEBBible.getReading("rom", 1, 30, 31).vss;
      // each vs in vss has a list of {class: nn, text: ...}
      expect(vss[0].vs[0].class).to.equal('vs')
      expect(vss[1].vs[0].class).to.equal('vs')
    })
    it('gives text for all vss', function () {
      var vss = WEBBible.getReading("rom", 1, 30, 31).vss
        ;
      // second member of tuple is an array of classes & text
      // [{class: xx, text: zz} ...] 
      expect(vss[0].vs[0].text).to.match(/backbiters, hateful to God/)
      expect(vss[1].vs[0].text).to.match(/without understanding/)
    })
    it('does not contain the words of Jesus', function () {
      var vss = WEBBible.getReading('rom', 1, 30, 31).vss
        ;
      expect(vss[0].vs[0].wj).to.not.be.ok
      expect(vss[1].vs[0].wj).to.not.be.ok
    })
  })
  describe('getReading("mark", 10, 23, 23', function () {
    it('has 2 partial verses', function () {
      let shards = WEBBible.getReading('mark', 10, 23, 23).vss[0].vs
        ;
      expect(shards).to.have.length(2);
    })
    it('has words of Jesus in the second shard of the verse', function () {
      let shards = WEBBible.getReading('mark', 10, 23, 23).vss[0].vs
      expect(shards[0].wj).to.not.be.ok
      expect(shards[1].wj).to.be.ok
    })
  })
})