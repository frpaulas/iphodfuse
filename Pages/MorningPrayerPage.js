var Observable = require("FuseJS/Observable")
  , moment = require('node_modules/moment/moment')
  , bcp = require("Modules/bcp")
  , MpEp = require("Modules/mpep")
  , WEBBible = require('Modules/WEBBible')
//  , ps = {}
//  , psName = Observable()
//  , psTitle = Observable()
//  , vss = Observable()
//  , directiveVisibility = Observable('Collapsed')
  , title = Observable("")
  , openingSentence = Observable("Nothing")
  , antiphon = Observable("")
  , colors = Observable([])
  , readings = Observable()
  , firstReading = Observable()
  , secondReading = Observable()
  , psalms = Observable()
  , nameOfSeason = Observable()
  , invitatoryCanticle = Observable("Jubilate")
  ;

function setup() {
  var now = moment()
    , resp = null
    ;
  title.value = MpEp.getDailyTitle(now)
  nameOfSeason.value = MpEp.getSeasonName(now)
  openingSentence.value = MpEp.getDailyOpeningSentence("mp", now)
  antiphon.value = MpEp.getDailyAntiphon(now)
  colors.value = MpEp.getDailyColor(now)
  resp = MpEp.getDailyReading('mp', now)
  setLessons(resp)
  psalms.value = MpEp.getDailyPsalms('mp', now)
  invitatoryCanticle.value = MpEp.getInvitatoryCanticle(now)

  MpEp.getDailyPsalms('mp', now).forEach( function(ps) { psalms.add( bcp.getPsalm(ps) ); })
}

function setLessons(readings) {
  var mp1 = readings.first
    , mp2 = readings.second
    , text1 = ""
    , text2 = ""
    , resp = null
    ;
  mp1.forEach(function(el) {
      var obj = WEBBible.getReading(el.read);
      obj.type = el.style;
      firstReading.add(obj);
    })
  mp2.value = mp2.map(function(el) {
    var obj = WEBBible.getReading(el.read)
    obj.type = el.style;
    secondReading.add(obj);
  })
}

module.exports = {
    openingSentence: openingSentence
  , title: title
  , antiphon: antiphon
  , colors: colors
  , readings: readings
  , psalms: psalms
  , nameOfSeason: nameOfSeason
  , invitatoryCanticle: invitatoryCanticle
  , setup: setup
}