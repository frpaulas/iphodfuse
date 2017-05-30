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
  , psalms = Observable()
  , nameOfSeason = Observable()
  , invitatoryCanticle = Observable("Jubilate")
  ;

function setup() {
  var now = moment()
  title.value = MpEp.getDailyTitle(now)
  nameOfSeason.value = MpEp.getSeasonName(now)
  openingSentence.value = MpEp.getDailyOpeningSentence("mp", now)
  antiphon.value = MpEp.getDailyAntiphon(now)
  colors.value = MpEp.getDailyColor(now)
  readings.value = MpEp.getDailyReading('mp', now)
  psalms.value = MpEp.getDailyPsalms('mp', now)
  invitatoryCanticle.value = MpEp.getInvitatoryCanticle(now)
  debugger;
  console.log("SETUP: ", psalms.value)
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