var Observable = require("FuseJS/Observable")
  , Backend = require("./Backend")
  , BCP = require("./bcp")
  , EU = require("./eu")
  , MPEP = require("./mpep")
  , pages = Observable()
  ;

Backend.getPages()
  .then(function(newPages) {
    pages.replaceAll(newPages);
  })
  .catch(function(error) {
    console.log("Couldn't get pages: " + error)
  })

module.exports = {
    pages: pages
  , getPsalm: getPsalm
  , getEU: getEU
  , getDailyReading: getDailyReading
  , getDailyTitle: getDailyTitle
  , getDailyColor: getDailyColor
  , getDailyAntiphon: getDailyAntiphon
  , getDailyOpeningSentence: getDailyOpeningSentence
  , getSunday: getSunday
}