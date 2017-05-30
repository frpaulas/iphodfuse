'use strict';
var moment = require('node_modules/moment/moment')
  , LitYear = require('Modules/lityear')
  , seasonObj
  , season = null
  , week = null
  , yrABC = null
  , date = null
  , dayOfWeek = null
  , dayOfMonth = null
  ;

function setup(thisDate) {
  thisDate = moment(thisDate);
  if (thisDate != date) {
    date = thisDate;
    seasonObj = LitYear.toSeason(date); // expensive
    season = seasonObj.season;
    week = seasonObj.week;
    yrABC = seasonObj.year;
    dayOfWeek = date.format('dddd');
    dayOfMonth = date.date();
  }
}

function getDailyReading(office, date) {
  setup(date);
  var readings = daily[season][week][dayOfWeek];
  console.log("GDR>>>", office, season, week, dayOfWeek)
  return { first: readings[office + "1"], second: readings[office + "2"]};
}

function getDailyTitle(date) {
  setup(date);
  return daily[season][week][dayOfWeek].title;
}

function getDailyColor(date) {
  setup(date);
  return daily[season][week][dayOfWeek].colors;
}

function getDailyAntiphon(date) {
  setup(date);
  return oneOf(daily.antiphon[season]);
}

function getDailyOpeningSentence(office, date) {
  setup(date);
  return oneOf( daily[office + "_opening"][season] );
}

function getDailyPsalms(mpep, date) {
  setup(date);
  return assignedPsalms[dayOfMonth][mpep];
}

function getSeasonName(date) {
  setup(date);
  return LitYear.getSeasonName(season);
}
function oneOf(list) {
  return list[Math.floor(Math.random()*list.length)];
}

function getInvitatoryCanticle(date) {
  setup(date);
  switch(season) {
    case 'lent': return 'LentVenite';
    case 'easterDay':
      if (week === 1) {return 'PaschaNostrum';};
    case 'easter': return oneOf(['Veniter', 'Jubilate', 'PaschaNostrum']);
    default: return oneOf(['Veniter', 'Jubilate']);
  }
}

module.exports = {
    daily: daily
  , oneOf: oneOf
  , getDailyReading: getDailyReading
  , getDailyTitle: getDailyTitle
  , getDailyColor: getDailyColor
  , getDailyAntiphon: getDailyAntiphon
  , getDailyOpeningSentence: getDailyOpeningSentence
  , getDailyPsalms: getDailyPsalms
  , getSeasonName: getSeasonName
  , getInvitatoryCanticle: getInvitatoryCanticle
};

var assignedPsalms = {
    1:  { mp: [[1, 1, 999],[2, 1, 999],[3, 1, 999],[4, 1, 999],[5, 1, 999]], ep: [[6, 1, 999],[7, 1, 999],[8, 1, 999]] },
    2:  { mp: [[9, 1, 999],[10, 1, 999],[11, 1, 999]], ep: [[12, 1, 999],[13, 1, 999],[14, 1, 999]] },
    3:  { mp: [[15, 1, 999],[16, 1, 999],[17, 1, 999]], ep: [[18, 1, 999]] },
    4:  { mp: [[19, 1, 999],[20, 1, 999],[21, 1, 999]], ep: [[22, 1, 999],[23, 1, 999]] },
    5:  { mp: [[24, 1, 999],[25, 1, 999],[26, 1, 999]], ep: [[27, 1, 999],[28, 1, 999],[29, 1, 999]] },
    6:  { mp: [[30, 1, 999],[31, 1, 999]], ep: [[32, 1, 999],[33, 1, 999],[34, 1, 999]] },
    7:  { mp: [[35, 1, 999],[36, 1, 999]], ep: [[37, 1, 999]] },
    8:  { mp: [[38, 1, 999],[39, 1, 999],[40, 1, 999]], ep: [[41, 1, 999],[42, 1, 999],[43, 1, 999]] },
    9:  { mp: [[44, 1, 999],[45, 1, 999],[46, 1, 999]], ep: [[47, 1, 999],[48, 1, 999],[49, 1, 999]] },
    10: { mp: [[50, 1, 999],[51, 1, 999],[52, 1, 999]], ep: [[53, 1, 999],[54, 1, 999],[55, 1, 999]] },
    11: { mp: [[56, 1, 999],[57, 1, 999],[58, 1, 999]], ep: [[59, 1, 999],[60, 1, 999],[61, 1, 999]] },
    12: { mp: [[62, 1, 999],[63, 1, 999],[64, 1, 999]], ep: [[65, 1, 999],[66, 1, 999],[67, 1, 999]] },
    13: { mp: [[68, 1, 999]], ep: [[69, 1, 999],[70, 1, 999]] },
    14: { mp: [[71, 1, 999],[72, 1, 999]], ep: [[73, 1, 999],[74, 1, 999]] },
    15: { mp: [[75, 1, 999],[76, 1, 999],[77, 1, 999]], ep: [[78, 1, 999]] },
    16: { mp: [[79, 1, 999],[80, 1, 999],[81, 1, 999]], ep: [[82, 1, 999],[83, 1, 999],[84, 1, 999],[85, 1, 999]] },
    17: { mp: [[86, 1, 999],[87, 1, 999],[88, 1, 999]], ep: [[89, 1, 999]] },
    18: { mp: [[90, 1, 999],[91, 1, 999],[92, 1, 999]], ep: [[93, 1, 999],[94, 1, 999]] },
    19: { mp: [[95, 1, 999],[96, 1, 999],[97, 1, 999]], ep: [[98, 1, 999],[99, 1, 999],[100, 1, 999],[101, 1, 999]] },
    20: { mp: [[102, 1, 999],[103, 1, 999]], ep: [[104, 1, 999]] },
    21: { mp: [[105, 1, 999]], ep: [[106, 1, 999]] },
    22: { mp: [[107, 1, 999]], ep: [[108, 1, 999], [109, 1, 999]] },
    23: { mp: [[110, 1, 999],[111, 1, 999],[112, 1, 999],[113, 1, 999]], ep: [[114, 1, 999],[115, 1, 999]] },
    24: { mp: [[116, 1, 999],[117, 1, 999],[118, 1, 999]], ep: [[119, 1, 32]] },
    25: { mp: [[119, 33, 72]], ep: [[119, 73, 104]] },
    26: { mp: [[119, 105, 144]], ep: [[119, 145, 176]] },
    27: { mp: [[120, 1, 999],[121, 1, 999],[122, 1, 999],[123, 1, 999],[124, 1, 999],[125, 1, 999]]
        , ep: [[126, 1, 999],[127, 1, 999],[128, 1, 999],[129, 1, 999],[130, 1, 999],[131, 1, 999]] 
        },
    28: { mp: [[132, 1, 999],[133, 1, 999],[134, 1, 999],[135, 1, 999]], ep: [[136, 1, 999],[137, 1, 999],[138, 1, 999]] },
    29: { mp: [[139, 1, 999],[140, 1, 999]], ep: [[141, 1, 999],[143, 1, 999]] },
    30: { mp: [[144, 1, 999],[145, 1, 999],[146, 1, 999]], ep: [[147, 1, 999],[148, 1, 999],[149, 1, 999],[150, 1, 999]] },
    31: { mp: [[120, 1, 999],[121, 1, 999],[122, 1, 999],[123, 1, 999],[124, 1, 999],[125, 1, 999],[126, 1, 999],[127, 1, 999]]
        , ep: [[128, 1, 999],[129, 1, 999],[130, 1, 999],[131, 1, 999],[132, 1, 999],[133, 1, 999],[134, 1, 999]] 
        }
  };


var daily = {
    antiphon: {
      advent: ["Our King and Savior now draws near: O come, let us adore him."]
    , christmas: ["Alleluia, to us a child is born: O come, let us adore him. Alleluia."]
    , epiphany: ["The Lord has shown forth his glory: O come, let us adore him."]
    , lent: ["The Lord is full of compassion and mercy: O come, let us adore him."]
    , palmSunday: ["The Lord is full of compassion and mercy: O come, let us adore him."]
    , easterDay: ["Alleluia. The Lord is risen indeed: O come, let us adore him. Alleluia."]
    , easter: ["Alleluia. The Lord is risen indeed: O come, let us adore him. Alleluia."]
    , proper: [
          "The earth is the Lord's for he made it: O Come let us adore him."
        , "Worship the Lord in the beauty of holiness: O Come let us adore him."
        , "The mercy of the Lord is everlasting: O Come let us adore him."
        , "Worship the Lord in the beauty of holiness: O Come let us adore him."
      ]
    , ascension: ["Alleluia. Christ the Lord has ascended into heaven: O come, let us adore him. Alleluia."]
    , pentecost: ["Alleluia. The Spirit of the Lord renews the face of the earth: O come, let us adore him. Alleluia."]
    , trinity: ["Father, Son and Holy Spirit, one God: O come, let us adore him."] 
    , incarnation: ["The Word was made flesh and dwelt among us: O come, let us adore him."]
    , saints: ["The Lord is glorious in his saints: O come, let us adore him."]
    }
  , mp_opening: {  
      advent: [ 
        { vss: "In the wilderness prepare the way of the Lord; make straight in the desert a highway for our God."
        , ref: "Isaiah 40:3"
        }
      ]
    , christmas:  
      [ { vss: "Fear not, for behold, I bring you good news of a great joy that will be for all people. For unto you is born this day in the city of David a Savior, who is Christ the Lord."
        , ref: "luke 2:10-11"
        }
      ]
    , epiphany:   
      [ { vss: "For fromans the rising of the sun to its setting my name will be great among the nations, and in every place incense will be offered to my name, and a pure offering. For my name will be great among the nations, says the Lord of hosts."
        , ref: "Malachi 1:11"
        }
      ]
    , lent:
      [ { vss: "Repent, for the kingdom of heaven is at hand."
        , ref: "matthew hew 3:2"
        }
      ]
    , goodFriday: 
      [ { vee:  "Is it nothing to you, all you who pass by? Look and see if there is any sorrow like my sorrow, which was brought upon me, which the Lord inflicted on the day of his fierce anger."
        , ref: "Lamentations 1:12"
        }
      ]
    , easter:     
      [ { vss: "Christ is risen! The Lord is risen indeed!"
        , ref: "mark 16:6 and luke 24:34"
        }
      ]
    , ascension:  
      [ { vss: "Since then we have a great high priest who has passed through the heavens, Jesus, the Son of God, let us hold fast our confession. Let us then with confidence draw near to the throne of grace, that we may receive mercy and find grace to help in time of need."
        , ref: "Hebrews 4:14, 16"
        }
      ]
    , pentecost:  
      [ { vss: "You will receive power when the Holy Spirit has come upon you, and you will be my witnesses in Jerusalem and in all judea and Samaria, and to the end of the earth."
        , ref: "acts 1:8"
        }
      ]
    , trinity:    
      [ { vss: "Holy, holy, holy, is the Lord God Almighty, who was and is and is to come!"
        , ref: "Revelation 4:8"
        }
      ]
    , thanksgiving: 
      [ { vss: "Honor the Lord with your wealth and with the firstfruits of all your produce; then your barns will be filled with plenty, and your vats will be bursting with wine."
        , ref: "Proverbs 3:9-10"
        }
      ]
    , proper:     
      [ { vss: "The Lord is in his holy temple; let all the earth keep silence before him."
          , ref: "Habakkuk 2:20"
        }
        , { vss: "I was glad when they said to me, “Let us go to the house of the Lord!”"
          , ref: "Psalm 122:1"
        }
        , { vss: "Let the words of my mouth and the meditation of my heart be acceptable in your sight, O Lord, my rock and my redeemer."
          , ref: "Psalm 19:14"
        }
        , { vss: "Send out your light and your truth; let them lead me; let them bring me to your holy hill and to your dwelling!"
          , ref: "Psalm 43:3"
        }
        , { vss: "For thus says the One who is high and lifted up, who inhabits eternity, whose name is Holy: “I dwell in the high and holy place, and also with him who is of a contrite and lowly spirit, to revive the spirit of the lowly, and to revive the heart of the contrite.”"
          , ref: "Isaiah 57:15"
        }
        , { vss: "The hour is coming, and is now here, when the true worshipers will worship the Father in spirit and truth, for the Father is seeking such people to worship him."
          , ref: "john 4:23"
        }
        , { vss: "Grace to you and peace fromans God our Father and the Lord Jesus Christ."
          , ref: "Philippians 1:2"
        }   
      ]
    }
  , ep_opening:
    { advent: 
      [ { vss:  `Therefore stay awake – for you do not know when the master of the
                house will come, in the evening, or at midnight, or when the cock
                crows, or in the morning – lest he come suddenly and find you asleep.`
        , ref: "mark 13:35-36"
        }
      ]
    , christmas:
      [ { vss: `Behold, the dwelling place of God is with man. He will dwell with
                them, and they will be his people, and God himself will be with them
                as their God.`
        , ref: "Revelation 21:3"
        }
      ]
    , epiphany: 
      [ { vss: "Nations shall come to your light, and kings to the brightness of your rising."
        , ref:  "Isaiah 60:3"
        }
      ]
    , lent: 
      [ { vss: `If we say we have no sin, we deceive ourselves, and the truth is not in
                 us. If we confess our sins, he is faithful and just to forgive us our sins
                 and to cleanse us fromans all unrighteousness.`
        , ref: "john1 1:8-9"
        }
      , { vss: "For I know my transgressions, and my sin is ever before me."
        , ref: "Psalm 51:3"
        }
      , { vss: "To the Lord our God belong mercy and forgiveness, for we have rebelled against him."
        , ref: "Daniel 9:9"
        }
      ]
      , goodFriday: 
        [ { vss: `All we like sheep have gone astray; we have turned every one to his
                  own way; and the Lord has laid on him the iniquity of us all`
          , ref: "Isaiah 53:6"
        }
        ]
      , easter: 
        [ { vss: "Thanks be to God, who gives us the victory through our Lord Jesus Christ."
          , ref: "1 Corinthians 15:57"
        }
        , { vss: `If then you have been raised with Christ, seek the things that are
                  above, where Christ is, seated at the right hand of God.`
          , ref: "Colossians 3:1"
        }
        ]
      , ascension:
        [ { vss: `For Christ has entered, not into holy places made with hands, which
                  are copies of the true things, but into heaven itself, now to appear in
                  the presence of God on our behalf.`
          , ref: "Hebrews 9:24"
        }
        ]
      , pentecost:
        [ { vss: `The Spirit and the Bride say, “Come.” And let the one who hears say,
                  “Come.” And let the one who is thirsty come; let the one who desires
                  take the water of life without price.`
          , ref: "Revelation 22:17"
        }
          , { vss: "There is a river whose streams make glad the city of God, the holy habitation of the Most High."
            , ref: "Psalm 46:4"
          }
          ]
          , trinity:
            [ { vss: "Holy, holy, holy, is the Lord God of Hosts; the whole earth is full of his glory!"
              , ref: "Isaiah 6:3"
            }
            ]
          , thanksgiving:
            [ { vss: `The Lord by wisdom founded the earth; by understanding he
                  established the heavens; by his knowledge the deeps broke open, and
                  the clouds drop down the dew.`
              , ref: "Proverbs 3:19-20"
            }
            ]
          , proper:
            [ { vss: "The Lord is in his holy temple; let all the earth keep silence before him."
              , ref: "Habakkuk 2:20"
            }
            , { vss: "O Lord, I love the habitation of your house and the place where your glory dwells."
              , ref: "Psalm 26:8"
            }
            , { vss: `Let my prayer be counted as incense before you, and the lifting up of
                      my hands as the evening sacrifice!`
              , ref: "Psalm 141:2"
            }
            , { vss: "Worship the Lord in the splendor of holiness; tremble before him, all the earth!"
              , ref: "Psalm 96:9"
            }
            , { vss: `Let the words of my mouth and the meditation of my heart be
                      acceptable in your sight, O Lord, my rock and my redeemer.`
              , ref: "Psalm 19:14"
            }
            ]
        }
  , advent:
      { 1:
        { Sunday:
        { title: "First Sunday in Advent"
          , colors: ["violet", "blue"]
          , mp1: 
              [ { style: "req", read: "isaiah 1:1-20"}
              , { style: "opt", read: "isaiah 1:21-31"}
              ]
          , mp2: [ { style: "req", read: "matthew 24:1-28"} ]
          , ep1: 
              [ { style: "opt", read: "isaiah 2:1-9"}
              , { style: "req", read: "isaiah 2:10-999"}
              ]
          , ep2: [ { style: "req", read: "john 3:1-21"} ]
        }
      , Monday:
        { title: "Monday"
          , colors: ["violet", "blue"]
          , mp1: 
              [ { style: "req", read: "isaiah 3:1-15"}
              , {style: "opt", read: "isaiah 3:16-26"}
              ]
          , mp2: [ { style: "req", read: "mark 1:1-20"} ]
          , ep1: [ { style: "req", read: "isaiah 4:1-999"} ]
          , ep2: [ {style: "req", read: "revelation 6:1-999"} ]
        }
        , Tuesday:
        { title: "Tuesday"
          , colors:  ["violet", "blue" ]
          , mp1: [ {style: "req", read: "isaiah 6:1-999"} ]
          , mp2: [ {style: "req", read: "mark 1:21-999"} ]
          , ep1: [ {style: "req", read: "isaiah 8:16-999"}
                 , {style: "req", read: "isaiah 9:1-7"} 
                 ]
          , ep2: [ {style: "req", read: "revelation 7:1-999"} ]
        }
        , Wednesday:
        { title: "Wednesday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "isaiah 9:8-999"}
                 , {style: "req", read: "isaiah 10:1-4"} 
                 ]
          , mp2: [ {style: "req", read: "mark 2:1-22"} ]
          , ep1: [ {style: "req", read: "isaiah 10:5-23"} ]
          , ep2: [ {style: "req", read: "revelation 8:1-999"} ]
        }
        , Thursday:
        { title: "Thursday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "isaiah 10:24-34"}
                  ,{style: "opt", read: "isaiah 11:1-10"} 
                  ]
          , mp2: [ {style: "req", read: "mark 2:23-999"}
                 , {style: "req", read: "mark 3:1-12"} 
                 ]
          , ep1: [ {style: "req", read: "isaiah 13:1-999"}
                 , {style: "req", read: "isaiah 14:1-2"} 
                 ]
          , ep2: [ {style: "req", read: "revelation 9:1-999"} ]
        }
      , Friday:
        { title: "Friday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "isaiah 14:3-27"}
                 , {style: "opt", read: "isaiah 14:28-999"}
                 , {style: "opt", read: "isaiah 15:1-9"} 
                 ]
          , mp2: [ {style: "req", read: "mark 3:13-999"} ]
          , ep1: [ {style: "opt", read: "isaiah 16:1-999"}
                 , {style: "req", read: "isaiah 17:1-999"} 
                 ]
          , ep2: [ {style: "req", read: "revelation 10:1-999"} ]
        }
      , Saturday:
          {  title: "Saturday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "isaiah 18:1-999"} ]
          , mp2: [ {style: "req", read: "mark 4:1-20"} ]
          , ep1: [ {style: "req", read: "isaiah 19:1-17"} ]
          , ep2: [ {style: "req", read: "revelation 11:1-999"} ]
        }
        }
      , 2:
        { Sunday:
        { title: "Second Sunday in Advent"
          , colors: ["violet", "blue"]
          , mp1: [ { style: "req", read: "isaiah 5:1-16"} ]
          , mp2: [ { style: "req", read: "matthew 24:29-999"} ]
          , ep1: [ { style: "opt", read: "isaiah 5:17-30"}
                 , {style: "req", read: "isaiah 18-999"}
                 ]
          , ep2: [ { style: "req", read: "luke 1:1-25"} ]
        }
      , Monday:
        { title: "Monday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "isaiah 19:18-999"}
                 , {style: "opt", read: "isaiah 20:1-999"} 
                 ]
          , mp2: [ {style: "req", read: "mark 4:21-999"} ]
          , ep1: [ {style: "req", read: "isaiah 21:1-12"}
                 , {style: "opt", read: "isaiah 21:13-17"}
                 ]
          , ep2: [ {style: "req", read: "revelation 12:1-999"} ]
        }
        , Tuesday:
        { title: "Tuesday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "isaiah 22:1-14"}
                 , {style: "opt", read: "isaiah 22:15-25"} 
                 ]
          , mp2: [ {style: "req", read: "mark 5:1-20"} ]
          , ep1: [ {style: "opt", read: "isaiah 23:1-999"}
                 , {style: "req", read: "isaiah 24:1-999"} 
                 ]
          , ep2: [ {style: "req", read: "revelation 13:1-999" } ]
        }
        , Wednesday:  
        { title: "Wednesday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "opt", read: "isaiah 27:1-999"}
                 , {style: "req", read: "isaiah 28:1-8"}
                 , {style: "opt", read: "isaiah 21:9-999"} 
                 ]
          , mp2: [ {style: "req", read: "mark 5:21-999"} ]
          , ep1: [ {style: "req", read: "isaiah 29:1-14"} ]
          , ep2: [ {style: "req", read: "revelation 14:1-999"} ]
        }
        , Thursday:
        { title: "Thursday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "isaiah 29:15-999"}
                 , {style: "req", read: "isaiah 30:1-18"}
                 , {style: "opt", read: "isaiah 30:19-999"}
                 , {style: "opt", read: "isaiah 31:1-9"} 
                 ]
          , mp2: [ {style: "req", read: "mark 6:1-13"} ]
          , ep1: [ {style: "req", read: "isaiah 32:1-999"}
                 , {style: "opt", read: "isaiah 33:1-999"} 
                 ]
          , ep2: [ {style: "req", read: "revelation 15:1-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["violet", "blue"]
        , mp1: [ {style: "req", read: "isaiah 34:1-999"}
               , {style: "opt", read: "isaiah 36:1-999"} 
               ]
        , mp2: [ {style: "req", read: "mark 6:14-29"} ]
        , ep1: [ {style: "opt", read: "isaiah 37:1-999"}
               , {style: "req", read: "isaiah 38:1-999"} 
               ]
        , ep2: [ {style: "req", read: "revelation 16:1-999"} ]
          }
      , Saturday:
        { title: "Saturday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "opt", read: "isaiah 39:1-999"}
                 , {style: "req", read: "isaiah 40:12-999"} 
                 ]
          , mp2: [ {style: "req", read: "mark 6:30-999"} ]
          , ep1: [ {style: "req", read: "isaiah 41:1-999"} ]
        , ep2: [ {style: "req", read: "revelation 17:1-999"} ]
          }
        }
        , 3:
      { Sunday:
        { title: "Third Sunday in Advent"
        , colors: ["rose", "violet", "blue"]
        , mp1: [ {style: "req", read: "isaiah 25:1-9"}
               , {style: "opt", read: "isaiah 25:10-12"} 
               ]
        , mp2: [ {style: "req", read: "matthew 25:1-30"} ]
        , ep1: [ {style: "req", read: "isaiah 26:1-13"}
               , {style: "opt", read: "isaiah 26:14-999"} 
               ]
        , ep2: [ {style: "req", read: "matthew 3:1-999"} ]
          }
      , Monday:
        { title: "Monday"
        , colors: ["rose", "violet", "blue"]
        , mp1: [ {style: "req", read: "isaiah 42:1-17"} ]
        , mp2: [ {style: "req", read: "mark 7:1-23"} ]
        , ep1: [ {style: "req", read: "isaiah 42:18-999"}
               , {style: "req", read: "isaiah 43:1-13"} 
               ]
        , ep2: [ {style: "req", read: "revelation 18:1-999"} ]
          }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["rose", "violet", "blue"]
        , mp1: [ {style: "req", read: "isaiah 43:14-999"}
               , {style: "req", read: "isaiah 44:1-5"} 
               ]
        , mp2: [ {style: "req", read: "mark 7:24-999"}
               , {style: "req", read: "mark 8:1-10"} 
               ]
        , ep1: [ {style: "req", read: "isaiah 44:6-23"} ]
        , ep2: [ {style: "req", read: "revelation 19:1-999"} ]
          }
          , Wednesday:  
        { title: "Wednesday Ember Day"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "isaiah 44:24-999"}
               , {style: "req", read: "isaiah 45:1-13"} 
               ]
        , mp2: [ {style: "req", read: "mark 8:11-999"}
               , {style: "req", read: "mark 9:1"} 
               ]
        , ep1: [ {style: "req", read: "isaiah 45:14-999"} ]
        , ep2: [ {style: "req", read: "revelation 20:1-999"} ]
          }
        , Thursday:
        { title: "Thursday"
          , colors: ["rose", "violet", "blue"]
          , mp1: [ {style: "req", read: "isaiah 46:1-999"} ]
          , mp2: [ {style: "req", read: "mark 9:2-32"} ]
          , ep1: [ {style: "req", read: "isaiah 47:1-999"} ]
          , ep2: [ {style: "req", read: "revelation 21:1-14"} ]
        }
      , Friday:
        { title: "Friday Ember Day"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "isaiah 48:1-999"} ]
          , mp2: [ {style: "req", read: "mark 9:33-999"} ]
          , ep1: [ {style: "req", read: "isaiah 49:1-13"} ]
          , ep2: [ {style: "req", read: "revelation 21:15-999"}
                 , {style: "req", read: "revelation 22:1-5"} 
                 ]
        }
      , Saturday:
        { title: "Saturday Ember Day"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "isaiah 49:14-999"} ]
          , mp2: [ {style: "req", read: "mark 10:1-31"} ]
          , ep1: [ {style: "req", read: "isaiah 50:1-999"} ]
          , ep2: [ {style: "req", read: "revelation 22:6-999"} ]
        }
        }
      , 4:
        { Sunday:
        { title: "Fourth Sunday in Advent"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "isaiah 35:1-999"} ]
          , mp2: [ {style: "req", read: "matthew 25:31-999"} ]
          , ep1: [ {style: "req", read: "isaiah 40:1-11"} ]
          , ep2: [ {style: "req", read: "luke 1:26-45"} ]
        }
      , Monday:
        { title: "Monday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "isaiah 51:1-16"} ]
          , mp2: [ {style: "req", read: "mark 10:32-999"} ]
          , ep1: [ {style: "req", read: "isaiah 51:17-999"}
                 , {style: "req", read: "isaiah 52:1-12"} 
                 ]
          , ep2: [ {style: "req", read: "jude  1:1-16"} ]
        }
        , Tuesday:
        { title: "Tuesday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "isaiah 52:13-999"}
                 , {style: "req", read: "isaiah 53:1-999"} 
                 ]
          , mp2: [ {style: "req", read: "mark 11:1-26"} ]
          , ep1: [ {style: "req", read: "isaiah 54:1-999"} ]
          , ep2: [ {style: "req", read: "jude 17-999"} ]
        }
        , Wednesday:  
        { title: "Wednesday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "isaiah 56:1-8"}
                 , {style: "opt", read: "isaiah 56:9-12"} 
                 ]
          , mp2: [ {style: "req", read: "mark 11:27-999"}
                 , {style: "req", read: "mark 12:1-12"} 
                 ]
          , ep1: [ {style: "opt", read: "isaiah 57:1-14"}
                 , {style: "req", read: "isaiah 57:15-999"} 
                 ]
          , ep2: [ {style: "req", read: "peter2 1:1-999"} ]
        }
        , Thursday:
        { title: "Thursday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "isaiah 59:1-999"} ]
          , mp2: [ {style: "req", read: "mark 12:13-34"} ]
          , ep1: [ {style: "req", read: "isaiah 60:1-7"} ]
          , ep2: [ {style: "req", read: "peter2 2:1-999"} ]
        }
      , Friday:
        { title: "Friday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "isaiah 60:8-999"} ]
          , mp2: [ {style: "req", read: "mark 12:35-999"}
                 , {style: "req", read: "mark 13:1-13"} 
                 ]
          , ep1: [ {style: "req", read: "isaiah 61:1-999"} ]
          , ep2: [ {style: "req", read: "peter2 3:1-999"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "isaiah 62:1-999"} ]
          , mp2: [ {style: "req", read: "mark 13:14-999"} ]
          , ep1: [ {style: "req", read: "zechariah 2:10-999"} ]
          , ep2: [ {style: "req", read: "hebrews 2:10-18"} ]
        }
        }
        } // end of advent
    , christmas:
      { 1:
        { christmasEve:
        { title: "Christmas Eve"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "isaiah 62:1-999"} ]
          , mp2: [ {style: "req", read: "mark 13:14-999"} ]
          , ep1: [ {style: "req", read: "zechariah 2:10-999"} ]
          , ep2: [ {style: "req", read: "hebrews 2:10-18"} ]
        }
        , christmasDay:
        { title: "Christmas Day"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "isaiah 9:2-7"} ]
          , mp2: [ {style: "opt", read: "matthew 1:1-17"}
                 , {style: "req", read: "matthew 1:18-25"} 
                 ]
          , ep1: [ {style: "req", read: "isaiah 7:10-14"}
                 , {style: "opt", read: "isaiah 7:15-25"} 
                 ]
          , ep2: [ {style: "req", read: "john1 4:7-999"} ]
        }
        , stStephen:
        { title: "St Stephen"
          , colors: ["red"]
          , mp1: [ {style: "req", read: "genesis 4:1-10"} ]
          , mp2: [ {style: "req", read: "acts 6:1-999"} ]
          , ep1: [ {style: "req", read: "chronicles2 24:15-22"} ]
          , ep2: [ {style: "req", read: "acts 7:59-999"}
                 , {style: "req", read: "acts 8:1-8"} 
                 ]
        }
        , stjohn:
        { title: "St john Evangelist"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "exodus 33:9-999"} ]
          , mp2: [ {style: "req", read: "john 13:21-35"} ]
          , ep1: [ {style: "req", read: "isaiah 6:1-8"} ]
          , ep2: [ {style: "req", read: "john1 5:1-12"} ]
        }
        , holyInnocents:
        { title: "Holy Innocents"
          , colors: ["red"]
          , mp1: [ {style: "req", read: "baruch 4:21-27"} ]
          , mp2: [ {style: "req", read: "revelation 6:9-11"} ]
          , ep1: [ {style: "req", read: "jeremiah 31:1-17"} ]
          , ep2: [ {style: "req", read: "matthew 18:1-10"} ]
        }
        , Sunday:
        { title: "* First Sunday of Christmas"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "isaiah 41:8-20"} ]
          , mp2: [ {style: "req", read: "colossians 1:1-20"} ]
          , ep1: [ {style: "req", read: "isaiah 55:1-999"} ]
          , ep2: [ {style: "req", read: "luke 2:22-40"} ]
        }
        , Dec29:
        { title: "December 29"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "ruth 1:1-18"} ]
          , mp2: [ {style: "req", read: "john 1:14-18"} ]
          , ep1: [ {style: "req", read: "ruth 1:19-999"}
                 , {style: "req", read: "ruth 2:1-13"} 
                 ]
          , ep2: [ {style: "req", read: "matthew 11:2-6"} ]
        }
        , Dec30:
        { title: "December 30"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "ruth 2:14-999"} ]
          , mp2: [ {style: "req", read: "john 3:16-21"} ]
          , ep1: [ {style: "req", read: "ruth 3:1-999"} ]
          , ep2: [ {style: "req", read: "matthew 16:13-20"} ]
        }
        , Dec31:
        { title: "December 31"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "ruth 4:1-17"}
                 , {style: "opt", read: "ruth 4:18-21"} 
                 ]
          , mp2: [ {style: "req", read: "john 6:41-58"} ]
          , ep1: [ {style: "req", read: "micah 4:8-999"}
                 , {style: "req", read: "micah 5:1-4"} 
                 ]
          , ep2: [ {style: "req", read: "luke 22:24-30"} ]
        }
        , octaveChristmas:
        { title: "Octave Day of Christmas"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "genesis 17:1-13"} ]
          , mp2: [ {style: "req", read: "romans 2:17-999"} ]
          , ep1: [ {style: "req", read: "deuteronomy 30:1-999"} ]
          , ep2: [ {style: "req", read: "colossians 2:8-15"} ]
        }
        }
      , 2:
        { Sunday:
        { title: "Second Sunday of Christmas"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "isaiah 41:21-999"} ]
          , mp2: [ {style: "req", read: "john1 1:1-999"}
                 , {style: "req", read: "john1 2:1-6"} 
                 ]
          , ep1: [ {style: "req", read: "isaiah 55:1-999"} ]
          , ep2: [ {style: "req", read: "luke 2:22-40"} ]
        }
        , Jan02:
        { title: "January 2"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "isaiah 63:1-6"} ]
          , mp2: [ {style: "req", read: "matthew 1:18-999"} ]
          , ep1: [ {style: "req", read: "isaiah 63:7-999"} ]
          , ep2: [ {style: "req", read: "thessalonians1 1:1-999"} ]
        }
        , Jan03:
        { title: "January 3"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "isaiah 64:1-999"} ]
          , mp2: [ {style: "req", read: "matthew 2:19-999"} ]
          , ep1: [ {style: "req", read: "isaiah 65:1-16"} ]
          , ep2: [ {style: "req", read: "thessalonians1 2:1-16"} ]
        }
        , Jan04:
        { title: "January 4"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "isaiah 65:17-999"} ]
          , mp2: [ {style: "req", read: "matthew 3:1-999"}
                 , {style: "req", read: "matthew 4:1-11"} 
                 ]
          , ep1: [ {style: "req", read: "isaiah 66:1-9"} ]
          , ep2: [ {style: "req", read: "thessalonians1 2:17-999"}
                 , {style: "req", read: "thessalonians1 3:1-999"} ]
        }
        , Jan05:
        { title: "January 5"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "isaiah 66:10-999"} ]
          , mp2: [ {style: "req", read: "matthew 4:12-999"}
                 , {style: "req", read: "matthew 5:1-16"} 
                 ]
          , ep1: [ {style: "req", read: "isaiah 60:1-7"} ]
          , ep2: [ {style: "req", read: "romans 15:8-21"} ]
        }
        }
      } // end of Christmas
    , epiphany:
      { 0:
        { Epiphany:
        { title: "Epiphany"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "isaiah 49:1-13"} ]
          , mp2: [ {style: "req", read: "luke 3:15-22"}
                 , {style: "opt", read: "luke 3:23-28"} 
                 ]
          , ep1: [ {style: "req", read: "isaiah 60:9-999"} ]
          , ep2: [ {style: "req", read: "john 2:1-11"} ]
        }
      , Monday:
        { title: "Monday"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "amos 1:1-999"} ]
          , mp2: [ {style: "req", read: "matthew 5:17-999"} ]
          , ep1: [ {style: "req", read: "amos 2:1-999"} ]
          , ep2: [ {style: "req", read: "thessalonians1 4:1-12"} ]
        }
        , Tuesday:
        { title: "Tuesday"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "amos 3:1-999"} ]
          , mp2: [ {style: "req", read: "matthew 6:1-18"} ]
          , ep1: [ {style: "req", read: "amos 4:1-999"} ]
          , ep2: [ {style: "req", read: "thessalonians1 4:13-999"}
                 , {style: "req", read: "thessalonians 5:1-11"} 
                 ]
        }
        , Wednesday: 
        { title: "Wednesday"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "amos 5:1-999"} ]
          , mp2: [ {style: "req", read: "matthew 6:19-999"} ]
          , ep1: [ {style: "req", read: "amos 6:1-999"} ]
          , ep2: [ {style: "req", read: "thessalonians1 5:12-999"} ]
        }
        , Thursday:
        { title: "Thursday"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "amos 7:1-999"} ]
          , mp2: [ {style: "req", read: "matthew 7:1-999"} ]
          , ep1: [ {style: "req", read: "amos 8:1-999"} ]
          , ep2: [ {style: "req", read: "thessalonians2 1:1-999"} ]
        }
      , Friday:
        { Title: "Friday"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "amos 9:1-999"} ]
          , mp2: [ {style: "req", read: "matthew 8:1-17"} ]
          , ep1: [ {style: "req", read: "micah 1:1-999"} ]
          , ep2: [ {style: "req", read: "thessalonians2 2:1-999"}]
        }
      , Saturday:
        { Title: "Saturday"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "micah 2:1-999"} ]
          , mp2: [ {style: "req", read: "matthew 8:18-999"} ]
          , ep1: [ {style: "req", read: "micah 3:1-999"} ]
          , ep2: [ {style: "req", read: "thessalonians2 3:1-999"} ]
        }
      }
    , 1:
      { Sunday:
        { title: "First Sunday of Epiphany"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "isaiah 42:1-12"} ]
          , mp2: [ {style: "req", read: "john 4:1-26"}
                 , {style: "opt", read: "john 4:27-42"} 
                 ]
          , ep1: [ {style: "req", read: "isaiah 61:1-999"} ]
          , ep2: [ {style: "req", read: "matthew 2:1-999"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["white", "gold"]
        , mp1: [ {style: "req", read: "micah 4:1-999"}
               , {style: "req", read: "micah 5:1-1"} 
               ]
        , mp2: [ {style: "req", read: "matthew 9:1-17"} ]
        , ep1: [ {style: "req", read: "micah 5:2-999"} ]
        , ep2: [ {style: "req", read: "galatians 1:1-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["white", "gold"]
        , mp1: [ {style: "req", read: "micah 6:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 9:18-34"} ]
        , ep1: [ {style: "req", read: "micah 7:1-999"} ]
        , ep2: [ {style: "req", read: "galatians 2:1-999"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["white", "gold"]
        , mp1: [ {style: "req", read: "hosea 1:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 9:35-999"}
               , {style: "req", read: "matthew 10:1-13"}
                ]
        , ep1: [ {style: "req", read: "hosea 2:1-13"} ]
        , ep2: [ {style: "req", read: "galatians 3:1-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["white", "gold"]
        , mp1: [ {style: "req", read: "hosea 2:14-999"}
               , {style: "req", read: "hosea 3:1-999"} 
               ]
        , mp2: [ {style: "req", read: "matthew 10:24-999"} ]
        , ep1: [ {style: "req", read: "hosea 4:1-11"}
               , {style: "opt", read: "hosea 4:12-19"} 
               ]
        , ep2: [ {style: "req", read: "galatians 4:1-999"}
               , {style: "req", read: "galatians 5:1-1"} 
               ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["white", "gold"]
        , mp1: [ {style: "opt", read: "hosea 5:1-7"}
               , {style: "req", read: "hosea 5:8-999"}
               , {style: "req", read: "hosea 6:1-6"}
               , {style: "opt", read: "hosea 6:7-11"} 
               ]
        , mp2: [ {style: "req", read: "matthew 11:1-999"} ]
        , ep1: [ {style: "opt", read: "hosea 7:1-999"}
               , {style: "req", read: "hosea 8:1-999"} 
               ]
        , ep2: [ {style: "req", read: "galatians 5:2-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["white", "gold"]
        , mp1: [ {style: "req", read: "hosea 9:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 12:1-21"} ]
        , ep1: [ {style: "req", read: "hosea 10:1-999"} ]
        , ep2: [ {style: "req", read: "galatians 6:1-999"} ]
        }
      }
    , 2:
      { Sunday:
        { title: "Second Sunday of Epiphany"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "amos 3:1-999"} ]
          , mp2: [ {style: "req", read: "john 6:22-40"} ]
          , ep1: [ {style: "req", read: "isaiah 44:6-23"} ]
          , ep2: [ {style: "req", read: "mark 1:35-999"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "hosea 11:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 12:22-999"} ]
        , ep1: [ {style: "req", read: "hosea 12:1-999"} ]
        , ep2: [ {style: "req", read: "corinthians1 1:1-25"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "hosea 13:1-14"}
               , {style: "opt", read: "hosea 13:15-16"} 
               ]
        , mp2: [ {style: "req", read: "matthew 13:1-23"} ]
        , ep1: [ {style: "req", read: "hosea 14:1-999"} ]
        , ep2: [ {style: "req", read: "corinthians1 1:26-999"}
               , {style: "req", read: "corinthians1 2:1-999"} ]
        }
      , Wednesday: 
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "zephaniah 1:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 13:24-43"} ]
        , ep1: [ {style: "req", read: "zephaniah 2:1-999"} ]
        , ep2: [ {style: "req", read: "corinthians1 3:1-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "zephaniah 3:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 13:44-999"} ]
        , ep1: [ {style: "req", read: "nahum 1:1-999"} ]
        , ep2: [ {style: "req", read: "corinthians1 4:1-17"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "nahum 2:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 14:1-999"} ]
        , ep1: [ {style: "req", read: "nahum 3:1-999"} ]
        , ep2: [ {style: "req", read: "corinthians1 4:18-999"}
               , {style: "req", read: "corinthians1 5:1-999"} 
               ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "habakkuk 1:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 15:1-28"} ]
        , ep1: [ {style: "req", read: "habakkuk 2:1-999"} ]
        , ep2: [ {style: "req", read: "corinthians1 6:1-999"} ]
        }
      }
    , 3:
      { Sunday:
        { title: "Third Sunday of Epiphany"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "amos 5:6-24"} ]
        , mp2: [ {style: "req", read: "john 6:41-999"} ]
        , ep1: [ {style: "req", read: "isaiah 46:3-999"} ]
        , ep2: [ {style: "req", read: "mark 7:24-999"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "habakkuk 3:1-999"} ]
        , mp2: [ {style: "req", read: "corinthians1 7:1-999"} ]
        , ep1: [ {style: "req", read: "malichi 1:1-999"} ]
        , ep2: [ {style: "req", read: "corinthians1 8:1-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "malichi 2:1-16"} ]
        , mp2: [ {style: "req", read: "corinthians1 9:1-999"} ]
        , ep1: [ {style: "req", read: "malichi 2:17-999"}
               , {style: "req", read: "malichi 3:1-12"} 
               ]
        , ep2: [ {style: "req", read: "corinthians1 10:1-999"}
               , {style: "req", read: "corinthians 11:1-1"} 
               ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "malichi 3:13-999"}
               , {style: "req", read: "malichi 4:1-999"} 
               ]
        , mp2: [ {style: "req", read: "corinthians1 11:2-999"} ]
        , ep1: [ {style: "req", read: "obadiah 1:1-999"} ]
        , ep2: [ {style: "req", read: "corinthians1 12:1-27"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "joel 1:1-999"} ]
        , mp2: [ {style: "req", read: "corinthians1 12:27-999"}
               , {style: "req", read: "corinthians1 13:1-999"} 
               ]
        , ep1: [ {style: "req", read: "joel 2:1-14"} ]
        , ep2: [ {style: "req", read: "corinthians1 14:1-19"} ]
        }
      , Friday:
        { title: "Friday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "joel 2:15-999"} ]
          , mp2: [ {style: "req", read: "corinthians1 14:20-999"} ]
          , ep1: [ {style: "req", read: "joel 3:1-999"} ]
          , ep2: [ {style: "req", read: "corinthians1 15:1-34"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "jonah 1:1-999"}
                 , {style: "req", read: "jonah 2:1-999"} ]
          , mp2: [ {style: "req", read: "corinthians1 15:35-999"} ]
          , ep1: [ {style: "req", read: "jonah 3:1-999"} 
                 , {style: "req", read: "jonah 4:1-999"} 
                 ]
          , ep2: [ {style: "req", read: "corinthians1 16:1-999"} ]
        }
        }
    , 4:
      { Sunday:
        { title: "Fourth Sunday of Epiphany"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "amos 7:1-999"} ]
        , mp2: [ {style: "req", read: "john 7:53-999"}
               , {style: "req", read: "john 8:1-11"} 
               ]
        , ep1: [ {style: "req", read: "isaiah 54:1-14"} ]
        , ep2: [ {style: "req", read: "luke 13:1-17"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "jeremiah 1:1-10"}
               , {style: "req", read: "jeremiah 1:11-999"} 
               ]
        , mp2: [ {style: "req", read: "corinthians2 1:1-999"}
               , {style: "req", read: "corinthians2 2:1-11"}
                ]
        , ep1: [ {style: "req", read: "jeremiah 2:1-13"}
               , {style: "opt", read: "jeremiah 2:14-999"}
               , {style: "opt", read: "jeremiah 3:1-25"} 
               ]
        , ep2: [ {style: "req", read: "corinthians2 2 12-999"}
               , {style: "req", read: "corinthians2 3:1-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "jeremiah 4:1-18"}
               , {style: "opt", read: "jeremiah 4:19-31"} 
               ]
        , mp2: [ {style: "req", read: "corinthians2 4:1-999"} ]
        , ep1: [ {style: "req", read: "jeremiah 5:1-19"} ]
        , ep2: [ {style: "req", read: "corinthians2 5:1-999"} ]
        }
      , Wednesday: 
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "jeremiah 5:20-999"} ]
        , mp2: [ {style: "req", read: "corinthians2 5:20-999"}
               , {style: "req", read: "corinthians2 6:1-999"}
               , {style: "req", read: "corinthians2 7:1-1"} ]
        , ep1: [ {style: "req", read: "jeremiah 6:1-21"}
               , {style: "opt", read: "jeremiah 6:22-30"} 
               ]
        , ep2: [ {style: "req", read: "corinthians2 7:2-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "jeremiah 7:1-28"}
               , {style: "opt", read: "jeremiah 7:29-34"} 
               ]
        , mp2: [ {style: "req", read: "corinthians2 8:1-999"} ]
        , ep1: [ {style: "req", read: "jeremiah 8:1-999"} ]
        , ep2: [ {style: "req", read: "corinthians2 9:1-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "jeremiah 9:1-24"}
               , {style: "opt", read: "jeremiah 9:25-999"}
               , {style: "opt", read: "jeremiah 10:1-25"} 
               ]
        , mp2: [ {style: "req", read: "corinthians2 10:1-999"} ]
        , ep1: [ {style: "req", read: "jeremiah 11:1-999"}
               , {style: "opt", read: "jeremiah 12:1-999"} 
               ]
        , ep2: [ {style: "req", read: "corinthians2 11:1-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "jeremiah 13:1-999"}
            , {style: "req", read: "jeremiah 14:1-999"} 
            ]
        , mp2: [ {style: "req", read: "corinthians2 12:1-13"} ]
        , ep1: [ {style: "req", read: "jeremiah 15:1-999"}
            , {style: "opt", read: "jeremiah 16:1-999"} 
            ]
        , ep2: [ {style: "req", read: "corinthians2 12:14-999"}
               , {style: "req", read: "corinthians2 13:1-999"} 
               ]
        }
      }
    , 5:
      { Sunday:
        { title: "Fifth Sunday of Epiphany"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "amos 8:4-999"} ]
          , mp2: [ {style: "req", read: "john 7:14-36"} ]
          , ep1: [ {style: "req", read: "isaiah 60:1-999"} ]
          , ep2: [ {style: "req", read: "mark 2:1-12"} ]
        }
      , Monday:
        { title: "Monday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "jeremiah 17:1-18"} ]
          , mp2: [ {style: "req", read: "acts 15:1-29"} ]
          , ep1: [ {style: "req", read: "jeremiah 17:19-999"} ]
          , ep2: [ {style: "req", read: "acts 15:30-999"}
                 , {style: "req", read: "acts 16:1-5"} 
                 ]
        }
        , Tuesday:
        { title: "Tuesday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "jeremiah 18:1-17"}
                 , {style: "opt", read: "jeremiah 18:18-23"} 
                 ]
          , mp2: [ {style: "req", read: "acts 16:6-999"} ]
          , ep1: [ {style: "req", read: "jeremiah 20:1-999"} ]
          , ep2: [ {style: "req", read: "acts 17:1-15"} ]
        }
      , Wednesday: 
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "jeremiah 23:9-32"}
               , {style: "opt", read: "jeremiah 23:33-40"} 
               ]
        , mp2: [ {style: "req", read: "acts 17:16-999"} ]
        , ep1: [ {style: "req", read: "jeremiah 30:1-22"}
                 , {style: "opt", read: "jeremiah 30:23-24"} 
                 ]
        , ep2: [ {style: "req", read: "acts 18:1-23"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "jeremiah 31:1-20"}
               , {style: "opt", read: "jeremiah 31:21-22"} 
               ]
        , mp2: [ {style: "req", read: "acts 18:24-999"}
               , {style: "req", read: "acts 19:1-7"} 
               ]
        , ep1: [ {style: "req", read: "jeremiah 31:23-999"} ]
        , ep2: [ {style: "req", read: "acts 19:8-20"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "jeremiah 33:1-13"} ]
        , mp2: [ {style: "req", read: "acts 19:21-999"} ]
        , ep1: [ {style: "req", read: "jeremiah 33:14-999"} ]
        , ep2: [ {style: "req", read: "acts 20:1-16"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "jeremiah 35:1-11"} ]
        , mp2: [ {style: "req", read: "acts 20:17-999"} ]
        , ep1: [ {style: "req", read: "jeremiah 35:12-999"} ]
        , ep2: [ {style: "req", read: "acts 21:1-16"} ]
        }
      }
    , 6:
      { Sunday:
        { title: "Sixth Sunday of Epiphany"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "amos 9:5-999"} ]
        , mp2: [ {style: "req", read: "john 7:37-52"} ]
        , ep1: [ {style: "req", read: "isaiah 64:1-999"} ]
        , ep2: [ {style: "req", read: "luke 7:1-10"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "tobit 4:5-19"} ]
        , mp2: [ {style: "req", read: "acts 21:17-36"} ]
        , ep1: [ {style: "req", read: "tobit 13:1-999"} ]
        , ep2: [ {style: "req", read: "acts 21:37-999"}
               , {style: "req", read: "acts 22:1-12"} 
               ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "baruch 1:15-999"}
               , {style: "req", read: "baruch 2:1-10"} 
               ]
        , mp2: [ {style: "req", read: "acts 22:23-999"}
               , {style: "req", read: "acts 23:1-11"} 
               ]
        , ep1: [ {style: "req", read: "baruch 2:11-999"} ]
        , ep2: [ {style: "req", read: "acts 23:12-999"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "baruch 3:1-9"} ]
        , mp2: [ {style: "req", read: "acts 24:1-23"} ]
        , ep1: [ {style: "req", read: "baruch 3:9-999"} ]
        , ep2: [ {style: "req", read: "acts 24:24-999"}
               , {style: "req", read: "acts 25:1-12"} 
               ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "baruch 4:21-30"} ]
        , mp2: [ {style: "req", read: "acts 25:13-999"} ]
        , ep1: [ {style: "req", read: "baruch 4:36-999"}
               , {style: "req", read: "baruch 5:1-999"} 
               ]
        , ep2: [ {style: "req", read: "acts 26:1-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "maccabees2 4:7-17"} ]
        , mp2: [ {style: "req", read: "acts 27:1-26"} ]
        , ep1: [ {style: "req", read: "maccabees2 6:12-999"} ]
        , ep2: [ {style: "req", read: "acts 27:27-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "maccabees2 7:1-19"} ]
        , mp2: [ {style: "req", read: "acts 28:1-15"} ]
        , ep1: [ {style: "req", read: "maccabees2 7:20-41"} ]
        , ep2: [ {style: "req", read: "acts 28:16-999"} ]
        }
      }
    , 7:
      { Sunday:
        { title: "Seventh Sunday of Epiphany"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 1:1-999"}
               , {style: "req", read: "genesis 2:1-3"} 
               ]
        , mp2: [ {style: "req", read: "john 1:1-18"} ]
        , ep1: [ {style: "req", read: "genesis 2:4-999"} ]
        , ep2: [ {style: "req", read: "mark 10:1-16"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 3:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 15:29-999"}
               , {style: "req", read: "matthew 16:1-12"} 
               ]
        , ep1: [ {style: "req", read: "genesis 4:1-16"} ]
        , ep2: [ {style: "req", read: "romans 1:1-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 6:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 16:13-999"} ]
        , ep1: [ {style: "req", read: "genesis 7:1-999"} ]
        , ep2: [ {style: "req", read: "romans 2:1-999"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 8:1-14"} ]
        , mp2: [ {style: "req", read: "matthew 17:1-23"} ]
        , ep1: [ {style: "req", read: "genesis 8:15-999"}
               , {style: "req", read: "genesis 9:1-17"}
               , {style: "opt", read: "genesis 9:18-29"} 
               ]
        , ep2: [ {style: "req", read: "romans 3:1-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 11:1-9"}
               , {style: "req", read: "genesis 27-12:10"}
               , {style: "opt", read: "genesis 12:11-20"} 
               ]
        , mp2: [ {style: "req", read: "matthew 17:14-999"}
               , {style: "req", read: "matthew 18:1-14"} 
               ]
        , ep1: [ {style: "req", read: "genesis 13:1-999"} ]
        , ep2: [ {style: "req", read: "romans 4:1-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 14:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 18:15-999"} ]
        , ep1: [ {style: "req", read: "genesis 15:1-999"} ]
        , ep2: [ {style: "req", read: "romans 5:1-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 16:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 19:1-15"} ]
        , ep1: [ {style: "req", read: "genesis 17:1-22"}
               , {style: "opt", read: "genesis 17:23-27"} 
               ]
        , ep2: [ {style: "req", read: "romans 6:1-999"} ]
        }
      }
    , 8:
      { Sunday:
        { title: "Eighth Sunday of Epiphany"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 3:1-999"} ]
        , mp2: [ {style: "req", read: "corinthians1 10:1-13"}
               , {style: "opt", read: "corinthians1 10:14-24"} 
               ]
        , ep1: [ {style: "req", read: "genesis 4:1-15"} ]
        , ep2: [ {style: "req", read: "luke 10:25-37"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 18:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 19:16-999"}
               , {style: "req", read: "matthew 20:1-16"} 
               ]
        , ep1: [ {style: "req", read: "genesis 19:1-3"}
               , {style: "req", read: "genesis 19:12-29"} 
               ]
        , ep2: [ {style: "req", read: "romans 7:1-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 6:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 16:13-999"} ]
        , ep1: [ {style: "req", read: "genesis 7:1-999"} ]
        , ep2: [ {style: "req", read: "romans 2:1-999"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 23:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 21:1-22"} ]
        , ep1: [ {style: "req", read: "genesis 24:1-28"} ]
        , ep2: [ {style: "req", read: "romans 8:18-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 24:29-999"} ]
        , mp2: [ {style: "req", read: "matthew 21:23-999"} ]
        , ep1: [ {style: "opt", read: "genesis 25:1-6"}
               , {style: "req", read: "genesis 25:7-11"}
               , {style: "req", read: "genesis 25:19-999"} 
               ]
        , ep2: [ {style: "req", read: "romans 9:1-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 26:1-5"}
               , {style: "opt", read: "genesis 26:6-11"
               }
               , {style: "req", read: "genesis 26:12-999"} 
               ]
        , mp2: [ {style: "req", read: "matthew 22:1-33"} ]
        , ep1: [ {style: "req", read: "genesis 27:1-40"} ]
        , ep2: [ {style: "req", read: "romans 10:1-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 27:41-999"}
               , {style: "req", read: "genesis 281:1-999"} 
               ]
        , mp2: [ {style: "req", read: "matthew 22:14-999"}
               , {style: "req", read: "matthew 23:1-12"} 
               ]
        , ep1: [ {style: "req", read: "genesis 29:1-20"}
               , {style: "opt", read: "genesis 29:21-999"}
               , {style: "opt", read: "genesis 30:1-43"} 
               ]
        , ep2: [ {style: "req", read: "romans 11:1-999"} ]
        }
      }
    , 9:
      { Sunday:
        { title: "The Last Sunday of Epiphany [Transfiguration]"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "genesis 12:1-9"} ]
        , mp2: [ {style: "req", read: "corinthians1 12:5-999"} ]
        , ep1: [ {style: "req", read: "genesis 6:5-999"} ]
        , ep2: [ {style: "req", read: "luke 17:20-999"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 31:1-21"} ]
        , mp2: [ {style: "req", read: "matthew 23:13-999"} ]
        , ep1: [ {style: "req", read: "genesis 31:22-999"}
               , {style: "req", read: "genesis 32:1-2"} 
               ]
        , ep2: [ {style: "req", read: "romans 12:1-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 32:3-30"}
               ,  {style: "opt", read: "genesis 32:31-32"}
               ]
        , mp2: [ {style: "req", read: "matthew 24:1-28"} ]
        , ep1: [ {style: "req", read: "genesis 33:1-999"}
               , {style: "opt", read: "genesis 34:1-999"}
               ]
        , ep2: [ {style: "req", read: "romans 13:1-999"} ]
        }
      , Wednesday:
        { title: "Ash Wednesday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "isaiah 57:15-999"} ]
        , mp2: [ {style: "req", read: "mark 2:13-22"} ]
        , ep1: [ {style: "req", read: "isaiah 58:1-999"} ]
        , ep2: [ {style: "req", read: "hebrews 3:12-999"}
               , {style: "req", read: "hebrews 4:1-13"} 
               ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "genesis 35:1-20"}
               , {style: "opt", read: "genesis 35:21-29"} 
               ]
        , mp2: [ {style: "req", read: "matthew 24:29-999"} ]
        , ep1: [ {style: "req", read: "genesis 37:1-999"}
                 , {style: "opt", read: "genesis 38:1-999"} 
                 ]
        , ep2: [ {style: "req", read: "romans 14:1-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "genesis 39:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 25:1-30"} ]
        , ep1: [ {style: "req", read: "genesis 40:1-999"} ]
        , ep2: [ {style: "req", read: "romans 15:1-999"} ]
      }
      , Saturday:
        { title: "Saturday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "genesis 41:1-40"} ]
        , mp2: [ {style: "req", read: "matthew 25:31-999"} ]
        , ep1: [ {style: "req", read: "genesis 41:41-999"} ]
        , ep2: [ {style: "req", read: "romans 16:1-999"} ]
        }
      }
    }
    , lent:
      { 1:
        { Sunday:
        { title: "First Sunday in Lent"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "genesis 13:1-999"} ]
          , mp2: [ {style: "req", read: "matthew 9:1-17"} ]
          , ep1: [ {style: "req", read: "genesis 8:1-999"} ]
          , ep2: [ {style: "req", read: "mark 14:1-26"} ]
        }
      , Monday:
        { title: "Monday"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "genesis 42:1-999"} ]
          , mp2: [ {style: "req", read: "matthew 26:1-30"} ]
          , ep1: [ {style: "req", read: "genesis 43:1-999"} ]
          , ep2: [ {style: "req", read: "philippians 1:1-999"} ]
        }
        , Tuesday:
        { title: "Tuesday"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "genesis 44:1-999"} ]
          , mp2: [ {style: "req", read: "matthew 26:31-56"} ]
          , ep1: [ {style: "req", read: "genesis 45:1-15"} ]
          , ep2: [ {style: "req", read: "philippians 2:1-999"} ]
        }
        , Wednesday:  
        { title: "Wednesday Ember Day"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "genesis 45:16-999"}
                 , {style: "req", read: "genesis 46:1-7"} 
                 ]
          , mp2: [ {style: "req", read: "matthew 26:57-999"} ]
          , ep1: [ {style: "req", read: "genesis 46:26-999"}
                 , {style: "req", read: "genesis 47:1-12"} 
                 ]
          , ep2: [ {style: "req", read: "philippians 3:1-999"} ]
          }
        , Thursday:
        { title: "Thursday"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "genesis 47:13-999"} ]
          , mp2: [ {style: "req", read: "matthew 27:1-26"} ]
          , ep1: [ {style: "req", read: "genesis 48:1-999"} ]
          , ep2: [ {style: "req", read: "philippians 4:1-999"} ]
          }
      , Friday:
        { title: "Friday Ember Day"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "genesis 49:1-32"} ]
          , mp2: [ {style: "req", read: "matthew 27:27-56"} ]
          , ep1: [ {style: "req", read: "genesis 49:33-999"}
                 , {style: "req", read: "genesis 50:1-999"} 
                 ]
          , ep2: [ {style: "req", read: "colossians 1:1-20"} ]
          }
      , Saturday:
        { title: "Saturday Ember Day"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "exodus 1:1-14"}
                 , {style: "opt", read: "exodus 1:15-21"}
                 , {style: "req", read: "exodus 1:22-999"}
                 , {style: "req", read: "exodus 2:1-10"}
                 ]
          , mp2: [ {style: "req", read: "matthew 27:57-999"}
                 , {style: "req", read: "matthew 28:1-999"} 
                 ]
          , ep1: [ {style: "req", read: "exodus 2:11-22"} ]
          , ep2: [ {style: "req", read: "colossians 1:21-999"}
                 , {style: "req", read: "colossians 2:1-7"} 
                 ]
          }
        }
    , 2:
      { Sunday:
        { title: "Second Sunday in Lent"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "genesis 18:1-15"} ]
        , mp2: [ {style: "req", read: "luke 15:11-999"} ]
        , ep1: [ {style: "req", read: "genesis 9:1-17"}
               , {style: "opt", read: "genesis 11:1-9"} 
               ]
        , ep2: [ {style: "req", read: "mark 14:27-52"} ]
        }
      , Monday:
        { title: "Monday"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "exodus 2:23-999"}
                 , {style: "req", read: "exodus 3:1-999"} 
                 ]
          , mp2: [ {style: "req", read: "john 1:1-28"} ]
          , ep1: [ {style: "req", read: "exodus 4:1-23"}
                 , {style: "opt", read: "exodus 4:24-26"} 
                 ]
          , ep2: [ {style: "req", read: "colossians 2:8-999"}
                 , {style: "req", read: "colossians 3:1-11"} 
                 ]
        }
        , Tuesday:
        { title: "Tuesday"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "exodus 4:27-999"}
                 , {style: "req", read: "exodus 5:1-999"}
                 , {style: "req", read: "exodus6:1-1"} ]
          , mp2: [ {style: "req", read: "john 1:29-999"} ]
          , ep1: [ {style: "req", read: "exodus 6:2-13"}
                 , {style: "opt", read: "exodus 6:14-30"}
                 , {style: "req", read: "genesis 7:1-7"}
                 ]
          , ep2: [ {style: "req", read: "colossians 3:12-999"}
                 , {style: "req", read: "colossians 4:1-1"} 
                 ]
          }
        , Wednesday:
        { title: "Wednesday"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "exodus 7:8-999"} ]
          , mp2: [ {style: "req", read: "john 2:1-999"} ]
          , ep1: [ {style: "req", read: "exodus 8:1-19"} ]
          , ep2: [ {style: "req", read: "colossians 4:2-999"} ]
          }
        , Thursday:
        { title: "Thursday"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "exodus 8:20-999"}
                 , {style: "req", read: "exodus 9:1-12"} 
                 ]
          , mp2: [ {style: "req", read: "john 3:1-21"} ]
          , ep1: [ {style: "req", read: "exodus 9:13-999"} ]
          , ep2: [ {style: "req", read: "philemon 1:1-999"} ]
          }
      , Friday:
        { title: "Friday"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "exodus 10:1-20"} ]
          , mp2: [ {style: "req", read: "john 3:22-999"} ]
          , ep1: [ {style: "req", read: "exodus 10:21-999"}
                 , {style: "req", read: "exodus 11:1-999"} 
                 ]
          , ep2: [ {style: "req", read: "ephesians 1:1-999"} ]
          }
      , Saturday:
        { title: "Saturday"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "exodus 12:1-20"} ]
          , mp2: [ {style: "req", read: "john 4:1-26"} ]
          , ep1: [ {style: "req", read: "exodus 12:21-36"} ]
          , ep2: [ {style: "req", read: "ephesians 2:1-999"} ]
          }
        }
    , 3:
      { Sunday:
        { title: "Third Sunday in Lent"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "genesis 18:16-999"} ]
        , mp2: [ {style: "req", read: "luke 18:1-14"} ]
        , ep1: [ {style: "req", read: "genesis 24:1-28"} ]
        , ep2: [ {style: "req", read: "mark 14:53-999"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "exodus 12:37-999"} ]
        , mp2: [ {style: "req", read: "john 4:27-999"} ]
        , ep1: [ {style: "req", read: "exodus 13:1-16"} ]
        , ep2: [ {style: "req", read: "ephesians 3:1-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["violet"]
        ,   mp1: [ {style: "req", read: "exodus 13:17-999"}
               , {style: "req", read: "exodus 14:1-14"} 
               ]
        ,   mp2: [ {style: "req", read: "john 5:1-23"} ]
        , ep1: [ {style: "req", read: "exodus 14:15-999"} ]
        , ep2: [ {style: "req", read: "ephesians 4:1-16"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "exodus 15:1-26"} ]
        , mp2: [ {style: "req", read: "john 5:24-999"} ]
        , ep1: [ {style: "req", read: "exodus 15:27-999"}
               , {style: "req", read: "exodus 16:1-16"} 
               ]
        , ep2: [ {style: "req", read: "ephesians 4:17-30"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "exodus 17:1-999"} ]
        , mp2: [ {style: "req", read: "john 6:1-21"} ]
        , ep1: [ {style: "req", read: "exodus 18:1-999"} ]
        , ep2: [ {style: "req", read: "ephesians 4:31-999"}
               , {style: "req", read: "ephesians 5:1-11"} 
               ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "exodus 19:1-999"} ]
        , mp2: [ {style: "req", read: "john 6:22-40"} ]
        , ep1: [ {style: "req", read: "exodus 20:1-21"}
               , {style: "opt", read: "exodus 20:22-999"}
               , {style: "opt", read: "exodus 21:1-36"} 
               ]
        , ep2: [ {style: "req", read: "ephesians 5:22-999"}
               , {style: "req", read: "ephesians 6:1-9"} 
               ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["violet"]
        , mp1: [ {style: "opt", read: "exodus 22:1-19"}
               , {style: "req", read: "exodus 22:20-999"}
               , {style: "req", read: "exodus 23:1-17"} 
               ]
        , mp2: [ {style: "req", read: "john 6:41-999"} ]
        , ep1: [ {style: "opt", read: "exodus 23:1-17"}
               , {style: "req", read: "exodus 23:18-999"} 
               ]
        , ep2: [ {style: "req", read: "ephesians 6:10-999"} ]
        }
      }
    , 4:
      { Sunday:
        { title: "Fourth Sunday in Lent"
        , colors: ["rose", "violet"]
        , mp1: [ {style: "req", read: "exodus 1:8-14"}
               , {style: "req", read: "exodus 1:22-999"}
               , {style: "req", read: "exodus 2:1-999"}
               , {style: "req", read: "exodus 2:1-10"}
               ]
        , mp2: [ {style: "req", read: "luke 18:35-999"}
               , {style: "req", read: "luke 19:1-10"} 
               ]
        , ep1: [ {style: "req", read: "genesis 24:29-999"} ]
        , ep2: [ {style: "req", read: "mark 15:1-21"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "exodus 24:1-999"} ]
        , mp2: [ {style: "req", read: "john 7:1-24"} ]
        , ep1: [ {style: "req", read: "exodus 25:1-22"}
               , {style: "opt", read: "exodus 25:23-999"}
               , {style: "opt", read: "exodus 26:1-37"} 
               ]
        , ep2: [ {style: "req", read: "timothy1 1:1-17"} ]
        }
      , Tuesday:
        { title: "Fourth Sunday in Lent"
        , colors: ["rose", "violet"]
        , mp1: [ {style: "req", read: "exodus 1:8-14"}
               , {style: "req", read: "exodus 1:22-999"}
               , {style: "req", read: "exodus 2:1-999"}
               , {style: "req", read: "exodus 2:1-10"} 
               ]
        , mp2: [ {style: "req", read: "luke 18:35-999"}
               , {style: "req", read: "luke 19:1-10"} 
               ]
        , ep1: [ {style: "req", read: "genesis 24:29-999"} ]
        , ep2: [ {style: "req", read: "mark 15:1-21"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["violet"]
        , mp1: [ {style: "opt", read: "exodus 31:1-999"}
               , {style: "req", read: "exodus 32:1-999"} 
               ]
        , mp2: [ {style: "req", read: "john 8:1-30"} ]
        , ep1: [ {style: "req", read: "exodus 33:1-999"}
               , {style: "req", read: "exodus 34:1-999"} ]
        , ep2: [ {style: "req", read: "timothy1 3:1-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "exodus 35:1-999"}
               , {style: "opt", read: "exodus 36:1-999"} 
               ]
        , mp2: [ {style: "req", read: "john 8:31-999"} ]
        , ep1: [ {style: "opt", read: "exodus 37:1-999"}
               , {style: "req", read: "exodus 38:1-999"} 
               ]
        , ep2: [ {style: "req", read: "timothy1 4:1-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["violet"]
        , mp1: [ {style: "opt", read: "exodus 39:1-999"}
               , {style: "opt", read: "exodus 40:1-16"
                  }
               , {style: "req", read: "exodus 40:17-999"} 
               ]
        , mp2: [ {style: "req", read: "john 9:1-999"} ]
        , ep1: [ {style: "req", read: "leviticus 6:8-999"} ]
        , ep2: [ {style: "req", read: "timothy1 5:1-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "leviticus 19:1-18"}
               , {style: "req", read: "leviticus 19:30-999"} ]
        , mp2: [ {style: "req", read: "john 10:1-21"} ]
        , ep1: [ {style: "req", read: "leviticus 25:1-24"} ]
        , ep2: [ {style: "req", read: "timothy1 6:1-999"} ]
        }
      }
    , 5:
      { Sunday:
        { title: "Fifth Sunday in Lent [Passion]"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "exodus 2:23-999"}
               , {style: "req", read: "exodus 3:1-10"} 
               ]
        , mp2: [ {style: "req", read: "mark 10:32-45"} ]
        , ep1: [ {style: "req", read: "exodus 6:2-13"} ]
        , ep2: [ {style: "req", read: "mark 15:22-39"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "numbers 6:1-999"} ]
        , mp2: [ {style: "req", read: "john 10:22-999"} ]
        , ep1: [ {style: "req", read: "numbers 9:15-999"}
               , {style: "req", read: "numbers 10:19-999"} 
               ]
        , ep2: [ {style: "req", read: "titus 1:1-999"}
               , {style: "req", read: "titus 2:1-8"} 
               ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "numbers 11:10-33"} ]
        , mp2: [ {style: "req", read: "john 11:1-44"} ]
        , ep1: [ {style: "req", read: "numbers 12:1-999"} ]
        , ep2: [ {style: "req", read: "titus 2:9-999"}
               , {style: "req", read: "titus 3:1-999"} 
               ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "numbers 13:1-3,17-999"} ]
        , mp2: [ {style: "req", read: "john 11:45-999"} ]
        , ep1: [ {style: "req", read: "numbers 14:1-25"} ]
        , ep2: [ {style: "req", read: "timothy2 1:1-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "numbers 16:1-35"} ]
        , mp2: [ {style: "req", read: "john 12:1-19"} ]
        , ep1: [ {style: "req", read: "numbers 16:36-999"}
               , {style: "req", read: "numbers 17:1-999"} ]
        , ep2: [ {style: "req", read: "timothy2 2:1-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "numbers 20:1-999"} ]
        , mp2: [ {style: "req", read: "john 12:20-999"} ]
        , ep1: [ {style: "req", read: "numbers 22:1-35"} ]
        , ep2: [ {style: "req", read: "timothy2 3:1-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "numbers 22:36-999"}
               , {style: "req", read: "numbers 23:1-16"} 
               ]
        , mp2: [ {style: "req", read: "john 13:1-999"} ]
        , ep1: [ {style: "req", read: "numbers 23:27-999"}
               , {style: "req", read: "numbers 24:1-999"} 
               ]
        , ep2: [ {style: "req", read: "timothy2 4:1-999"} ]
        }
      }
    }
  , palmSunday:
    { 1:
      { Sunday:
        { title: "Palm Sunday"
        , colors: ["red"]
        , mp1: [ {style: "req", read: "exodus 11:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 26:1-999"} ]
        , ep1: [ {style: "req", read: "isaiah 52:13"}
               , {style: "req", read: "isaiah 53:1-999"} 
               ]
        , ep2: [ {style: "req", read: "luke 19:29-999"} ]
        }
      , Monday:
        { title: "Monday in Holy Week"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "hosea 13:1-14"} ]
        , mp2: [ {style: "req", read: "john 14:1-14"} ]
        , ep1: [ {style: "req", read: "hosea 14:1-999"} ]
        , ep2: [ {style: "req", read: "john 14:15-999"} ]
        }
      , Tuesday:
        { title: "Tuesday in Holy Week"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "isaiah 42:1-9"} ]
        , mp2: [ {style: "req", read: "john 15:1-16"} ]
        , ep1: [ {style: "req", read: "wisdom 2:1,12-999"} ]
        , ep2: [ {style: "req", read: "john 15:17-999"} ]
        }
      , Wednesday:
        { title: "Wednesday in Holy Week"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "numbers 21:4-9"} ]
        , mp2: [ {style: "req", read: "john 16:1-15"} ]
        , ep1: [ {style: "req", read: "leviticus 16:2-24"} ]
        , ep2: [ {style: "req", read: "john 16:16-999"} ]
        }
      , Thursday:
        { title: "Maundy Thursday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "lamentations 1:1-14 "} ]
        , mp2: [ {style: "req", read: "john 17:1-999"} ]
        , ep1: [ {style: "req", read: "lamentations 3:1-33 "} ]
        , ep2: [ {style: "req", read: "john 13:1-35"} ]
        }
      , Friday:
        { title: "Good Friday"
        , colors: ["red"]
        , mp1: [ {style: "req", read: "genesis 22:1-18"} ]
        , mp2: [ {style: "req", read: "john 18:1-32"} ]
        , ep1: [ {style: "req", read: "isaiah 50:4-10"} ]
        , ep2: [ {style: "req", read: "john 19:38-999"} ]
        }
      , Saturday:
        { title: "Holy Saturday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "zechariah 9:9-12"} ]
        , mp2: [ {style: "req", read: "peter1 2:11-999"} ]
        , ep1: [ {style: "req", read: "job 19:21-27"} ]
        , ep2: [ {style: "req", read: "john 2:13-22"} ] 
        }
      }
    }
  , easterDay:
    { 1:
      { Sunday:
        { title: "Easter Day"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "exodus 12:1-14"} ]
        , mp2: [ {style: "req", read: "revelation 1:4-18"} ]
        , ep1: [ {style: "req", read: "exodus 14:5-999"} ]
        , ep2: [ {style: "req", read: "john 20:11-23"} ]
        }
      , Monday:
        { title: "Monday of Easter Week"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "exodus 15:1-18"} ]
        , mp2: [ {style: "req", read: "luke 24:1-12"} ]
        , ep1: [ {style: "req", read: "song_of_solomon 1:1-999"}
               , {style: "req", read: "song_of_solomon 2:1-7"} 
               ]
        , ep2: [ {style: "req", read: "revelation 7:9-999"} ]
        }
      , Tuesday:
        { title: "Tuesday of Easter Week"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "isaiah 25:1-9"} ]
        , mp2: [ {style: "req", read: "peter1 1:1-12"} ]
        , ep1: [ {style: "req", read: "song_of_solomon 2:8-999"} ]
        , ep2: [ {style: "req", read: "matthew 28:1-10"} ]
        }
      , Wednesday:
        { title: "Wednesday of Easter Week"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "isaiah 61:1-999"} ]
        , mp2: [ {style: "req", read: "peter1 1:13-999"} ]
        , ep1: [ {style: "req", read: "song_of_solomon 3:1-999"}
               , {style: "req", read: "song_of_solomon 4:1-16"}
                ]
        , ep2: [ {style: "req", read: "john 21:1-14"} ]
        }
      , Thursday:
        { title: "Thursday of Easter Week"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "job 14:1-15"} ]
        , mp2: [ {style: "req", read: "thessalonians1 4:13-999"} ]
        , ep1: [ {style: "req", read: "song_of_solomon 4:16-999"}
               , {style: "req", read: "song_of_solomon 5:1-999"} 
               ]
        , ep2: [ {style: "req", read: "mark 5:21-999"} ]
        }
      , Friday:
        { title: "Friday of Easter Week"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "zephaniah 3:14-999"} ]
        , mp2: [ {style: "req", read: "acts 17:16-31"} ]
        , ep1: [ {style: "req", read: "song_of_solomon 6:1-999"}
               , {style: "req", read: "song_of_solomon 7:1-10"}
                ]
        , ep2: [ {style: "req", read: "luke 7:11-17"} ]
        }
      , Saturday:
        { title: "Saturday of Easter Week"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "jeremiah 31:1-14"} ]
        , mp2: [ {style: "req", read: "acts 26:1-23"} ]
        , ep1: [ {style: "req", read: "song_of_solomon 7:11-999"}
               , {style: "req", read: "song_of_solomon 8:1-999"} ]
        , ep2: [ {style: "req", read: "john 11:17-44"} ]
        }
      }
    }
  , easter:
    { 2:
      { Sunday:
        { title: "Second Sunday of Easter"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "ezekiel 37:1-14"} ]
        , mp2: [ {style: "req", read: "luke 24:13-35"} ]
        , ep1: [ {style: "req", read: "exodus 15:1-18"} ]
        , ep2: [ {style: "req", read: "john 20:24-999"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["white"]
        , mp1: [ {style: "opt", read: "deuteronomy 1:1-2"}
               , {style: "req", read: "deuteronomy 1:3-18"} 
               ]
        , mp2: [ {style: "req", read: "acts 1:1-14"} ]
        , ep1: [ {style: "req", read: "deuteronomy 1:19-999"} ]
        , ep2: [ {style: "req", read: "acts 1:15-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "deuteronomy 2:1-25"} ]
        , mp2: [ {style: "req", read: "acts 2:1-21"} ]
        , ep1: [ {style: "req", read: "deuteronomy 2:26-999"}
               , {style: "req", read: "deuteronomy 3:1-5"} 
               ]
        , ep2: [ {style: "req", read: "acts 2:22-999"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["white"]
        , mp1: [ {style: "opt", read: "deuteronomy 3:6-17"}
               , {style: "req", read: "deuteronomy 3:18-999"} 
               ]
        , mp2: [ {style: "req", read: "acts 3:1-999"}
               , {style: "req", read: "acts 4:1-4"} 
               ]
        , ep1: [ {style: "req", read: "deuteronomy 4:1-24"} ]
        , ep2: [ {style: "req", read: "acts 4:5-31"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "deuteronomy 4:41-999"} ]
        , mp2: [ {style: "req", read: "acts 4:32-999"}
               , {style: "req", read: "acts 5:1-11"} 
               ]
        , ep1: [ {style: "req", read: "deuteronomy 5:1-21"} ]
        , ep2: [ {style: "req", read: "acts 5:12-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "deuteronomy 5:22-999"} ]
        , mp2: [ {style: "req", read: "acts 6:1-7"}
               , {style: "req", read: "acts 6:16-16"} 
               ]
        , ep1: [ {style: "req", read: "deuteronomy 6:1-999"} ]
        , ep2: [ {style: "req", read: "acts 7:17-34"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "deuteronomy 7:1-11"} ]
        , mp2: [ {style: "req", read: "acts 7:35-999"}
               , {style: "req", read: "acts 8:1-4"} 
               ]
        , ep1: [ {style: "req", read: "deuteronomy 7:12-999"} ]
        , ep2: [ {style: "req", read: "acts 8:4-25"} ]
        }
      }
    , 3:
      { Sunday:
        { title: "Third Sunday of Easter"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "numbers 13:1-2"}
               , {style: "req", read: "numbers 13:17-999"} 
               ]
        , mp2: [ {style: "req", read: "mark 5:21-999"} ]
        , ep1: [ {style: "req", read: "deuteronomy 4:25-40"} ]
        , ep2: [ {style: "req", read: "john 21:1-14"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "deuteronomy 8:1-999"} ]
        , mp2: [ {style: "req", read: "acts 8:26-999"} ]
        , ep1: [ {style: "req", read: "deuteronomy 9:1-10"} ]
        , ep2: [ {style: "req", read: "acts 9:1-31"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "deuteronomy 9:11-999"} ]
        , mp2: [ {style: "req", read: "acts 9:32-999"} ]
        , ep1: [ {style: "req", read: "deuteronomy 10:1-999"} ]
        , ep2: [ {style: "req", read: "acts 10:1-23"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "deuteronomy 11:1-12"} ]
        , mp2: [ {style: "req", read: "acts 10:24-999"} ]
        , ep1: [ {style: "req", read: "deuteronomy 11:13-999"} ]
        , ep2: [ {style: "req", read: "acts 11:1-18"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "deuteronomy 12:1-14"}
               , {style: "opt", read: "deuteronomy 12:15-999"}
               , {style: "opt", read: "deuteronomy 13:1-18"} 
               ]
        , mp2: [ {style: "req", read: "acts 11:19-999"} ]
        , ep1: [ {style: "opt", read: "deuteronomy 14:1-999"}
               , {style: "req", read: "deuteronomy 15:1-18"} 
               ]
        , ep2: [ {style: "req", read: "acts 12:1-24"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "deuteronomy 16:1-20"} ]
        , mp2: [ {style: "req", read: "acts 12:25-999"}
               , {style: "req", read: "acts 13:1-12"} 
               ]
        , ep1: [ {style: "opt", read: "deuteronomy 17:1-7"}
               , {style: "req", read: "deuteronomy 17:8-999"} 
               ]
        , ep2: [ {style: "req", read: "acts 13:13-43"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["white"]
        , mp1: [ {style: "opt", read: "deuteronomy 18:1-8"}
               , {style: "req", read: "deuteronomy 18:9-999"} 
               ]
        , mp2: [ {style: "req", read: "acts 13:44-999"}
               , {style: "req", read: "acts 14:1-7"} 
               ]
        , ep1: [ {style: "req", read: "deuteronomy 19:1-999"}
               , {style: "opt", read: "deuteronomy 20:1-999"} 
               ]
        , ep2: [ {style: "req", read: "acts 14:8-999"} ]
        }
      }
    , 4:
      { Sunday:
        { title: "Fourth Sunday of Easter"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "numbers 22:1-21"} ]
        , mp2: [ {style: "req", read: "luke 7:11-17"} ]
        , ep1: [ {style: "req", read: "deuteronomy 5:1-21"} ]
        , ep2: [ {style: "req", read: "john 21:15-999"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["white"]
        , mp1: [ {style: "opt", read: "deuteronomy 21:1-21"}
               , {style: "req", read: "deuteronomy 21:22-999"}
               , {style: "req", read: "deuteronomy 22:1-8"}
               , {style: "opt", read: "deuteronomy 22:9-30"} 
               ]
        , mp2: [ {style: "req", read: "acts 15:1-21"} ]
        , ep1: [ {style: "opt", read: "deuteronomy 23:1-999"}
               , {style: "opt", read: "deuteronomy 24:1-4"}
               , {style: "req", read: "deuteronomy 24:5-999"} 
               ]
        , ep2: [ {style: "req", read: "acts 15:22-35"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["white"]
        , mp1: [ {style: "opt", read: "deuteronomy 25:1-999"}
               , {style: "req", read: "deuteronomy 26:1-999"} 
               ]
        , mp2: [ {style: "req", read: "acts 15:36-999"}
               , {style: "req", read: "acts 16:1-5"} 
               ]
        , ep1: [ {style: "opt", read: "deuteronomy 27:1-999"}
               , {style: "opt", read: "deuteronomy 28:1-57"}
               , {style: "req", read: "deuteronomy 28:58-999"} 
               ]
        , ep2: [ {style: "req", read: "acts 16:6-999"}]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["white"]
        , mp1: [ {style: "opt", read: "deuteronomy 29:1-9"}
               , {style: "req", read: "deuteronomy 29:10-999"} 
               ]
        , mp2: [ {style: "req", read: "acts 17:1-15"} ]
        , ep1: [ {style: "req", read: "deuteronomy 30:1-999"} ]
        , ep2: [ {style: "req", read: "acts 17:16-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "deuteronomy 31:1-13"} ]
        , mp2: [ {style: "req", read: "acts 18:1-23"} ]
        , ep1: [ {style: "req", read: "deuteronomy 31:14-29"} ]
        , ep2: [ {style: "req", read: "acts 18:24-999"}
               , {style: "req", read: "acts 19:1-7"} 
               ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "deuteronomy 31:30-999"}
               , {style: "req", read: "deuteronomy 32:1-14"} 
               ]
        , mp2: [ {style: "req", read: "acts 19:8-20"} ]
        , ep1: [ {style: "req", read: "deuteronomy 32:15-47"} ]
        , ep2: [ {style: "req", read: "acts 19:21-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "deuteronomy 33:1-999"} ]
        , mp2: [ {style: "req", read: "acts 20:1-16"} ]
        , ep1: [ {style: "req", read: "deuteronomy 32:48-999"}
               , {style: "req", read: "deuteronomy 34:1-999"} 
               ]
        , ep2: [ {style: "req", read: "acts 20:17-999"} ]
        }
      }
    , 5:
      { Sunday:
        { title: "Fifth Sunday of Easter"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "numbers 22:36-999"}
               , {style: "req", read: "numbers 23:1-12"} 
               ]
        , mp2: [ {style: "req", read: "john 11:1-44"} ]
        , ep1: [ {style: "req", read: "exodus 35:30-999"}
               , {style: "req", read: "exodus 36:1-7"} 
               ]
        , ep2: [ {style: "req", read: "luke 16:19-999"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "joshua 1:1-999"} ]
        , mp2: [ {style: "req", read: "acts 21:1-16"} ]
        , ep1: [ {style: "req", read: "joshua 2:1-999"} ]
        , ep2: [ {style: "req", read: "acts 21:17-36"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "joshua 3:1-999"} ]
        , mp2: [ {style: "req", read: "acts 21:37-999"}
               , {style: "req", read: "acts 22:1-12"} 
               ]
        , ep1: [ {style: "req", read: "joshua 4:1-999"}
               , {style: "req", read: "joshua 5:1-1"} 
               ]
        , ep2: [ {style: "req", read: "acts 22:23-999"}
               , {style: "req", read: "acts 23:1-11"} 
               ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "joshua 5:13-999"}
               , {style: "req", read: "joshua 6:1-10"} 
               ]
        , mp2: [ {style: "req", read: "acts 23:12-999"} ]
        , ep1: [ {style: "req", read: "joshua 7:1-999"} ]
        , ep2: [ {style: "req", read: "acts 24:1-23"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "joshua 9:3-999"} ]
        , mp2: [ {style: "req", read: "acts 24:24-999"}
               , {style: "req", read: "acts 25:1-12"} 
               ]
        , ep1: [ {style: "req", read: "joshua 10:1-15"} ]
        , ep2: [ {style: "req", read: "acts 25:13-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "joshua 21:43-999"}
               , {style: "req", read: "joshua 22:1-8"} 
               ]
        , mp2: [ {style: "req", read: "acts 26:1-999"} ]
        , ep1: [ {style: "req", read: "joshua 22:9-999"} ]
        , ep2: [ {style: "req", read: "acts 27:1-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "joshua 23:1-999"} ]
        , mp2: [ {style: "req", read: "acts 28:1-15"} ]
        , ep1: [ {style: "req", read: "joshua 24:1-28"} ]
        , ep2: [ {style: "req", read: "acts 28:16-999"} ]
        }
      }
    , 6:
      { Sunday:
        { title: "Sixth Sunday of Easter [Rogation]"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "numbers 24:1-19"} ]
        , mp2: [ {style: "req", read: "romans 6:1-14"} ]
        , ep1: [ {style: "req", read: "deuteronomy 6:1-999"} ]
        , ep2: [ {style: "req", read: "luke 10:38-999"}
               , {style: "req", read: "luke 11:1-13"} 
               ]
        }
      , Monday:
        { title: "Monday Rogation Days"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "deuteronomy 7:6-13"} ]
        , mp2: [ {style: "req", read: "matthew 6:5-18"} ]
        , ep1: [ {style: "req", read: "deuteronomy 8:1-999"} ]
        , ep2: [ {style: "req", read: "matthew 6:19-999"} ]
        }
      , Tuesday:
        { title: "Tuesday Rogation Days"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "deuteronomy 11:8-21"} ]
        , mp2: [ {style: "req", read: "luke 5:1-11"} ]
        , ep1: [ {style: "req", read: "kings1 8:22-43"} ]
        , ep2: [ {style: "req", read: "james 5:1-18"} ]
        }
      , Wednesday:
        { title: "Wednesday Rogation Days"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "joel 2:21-27"} ]
        , mp2: [ {style: "req", read: "john 6:22-40"} ]
        , ep1: [ {style: "req", read: "daniel_greek  3:29-37"} ] // Song of the Three Children
        , ep2: [ {style: "req", read: "matthew 28:16-999"} ]
        }
      , Thursday:
        { title: "Thursday Ascension Day"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "kings2 2:1-15"} ]
        , mp2: [ {style: "req", read: "john 17:1-999"} ]
        , ep1: [ {style: "req", read: "daniel 7:9-10"}
               , {style: "req", read: "daniel 7:13-14"} ]
        , ep2: [ {style: "req", read: "hebrews 1:1-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "judges 2:6-999"} ]
        , mp2: [ {style: "req", read: "hebrews 2:1-999"} ]
        , ep1: [ {style: "req", read: "judges 3:12-999"} ]
        , ep2: [ {style: "req", read: "hebrews 3:1-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "judges 4:1-999"} ]
        , mp2: [ {style: "req", read: "hebrews 4:1-13"} ]
        , ep1: [ {style: "req", read: "judges 5:1-999"} ]
        , ep2: [ {style: "req", read: "hebrews 4:14-999"}
               , {style: "req", read: "hebrews 5:1-10"} 
               ]
        }
      }
    , 7:
      { Sunday:
        { title: "Sunday after Ascension Day"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "isaiah 65:17-999"} ]
        , mp2: [ {style: "req", read: "luke 24:36-999"} ]
        , ep1: [ {style: "req", read: "jeremiah 31:1-13"} ]
        , ep2: [ {style: "req", read: "ephesians 5:1-14"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "judges 6:1-35"} ]
        , mp2: [ {style: "req", read: "hebrews 5:11-999"}
               , {style: "req", read: "hebrew 6:1-999"} 
               ]
        , ep1: [ {style: "req", read: "judges 6:36-999"}
               , {style: "req", read: "judges 7:1-13"} 
               ]
        , ep2: [ {style: "req", read: "hebrews 7:1-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "judges 7:24-999"}
               , {style: "req", read: "judges 8:1-18"} 
               ]
        , mp2: [ {style: "req", read: "hebrews 8:1-999"} ]
        , ep1: [ {style: "req", read: "judges 8:32-999"}
               , {style: "req", read: "judges 9:1-14"} 
               ]
        , ep2: [ {style: "req", read: "hebrews 9:1-14"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "judges 9:26-999"} ]
        , mp2: [ {style: "req", read: "hebrews 9:15-999"} ]
        , ep1: [ {style: "req", read: "judges 10:17-999"}
               , {style: "req", read: "judges 11:1-18"} 
               ]
        , ep2: [ {style: "req", read: "hebrews 10:1-18"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "judges 11:29-999"}
               , {style: "req", read: "judges 12:1-7"} 
               ]
        , mp2: [ {style: "req", read: "hebrews 10:19-999"} ]
        , ep1: [ {style: "req", read: "judges 13:1-999"} ]
        , ep2: [ {style: "req", read: "hebrews 11:1-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "judges 14:1-999"} ]
        , mp2: [ {style: "req", read: "hebrews 12:1-13"} ]
        , ep1: [ {style: "req", read: "judges 15:1-999"}
               , {style: "req", read: "judges 16:1-3"} 
               ]
        , ep2: [ {style: "req", read: "hebrews 12:14-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "judges 16:4-999"} ]
        , mp2: [ {style: "req", read: "hebrews 13:1-999"} ]
        , ep1: [ {style: "req", read: "deuteronomy 16:9-12"} ]
        , ep2: [ {style: "req", read: "acts 18:24-999"}
               , {style: "req", read: "acts 19:1-7"} 
               ]
        }
      }
    } // end of easter
  , ascension:
    { 1:
      { Thursday:
        { title: "Thursday Ascension Day"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "kings2 2:1-15"} ]
        , mp2: [ {style: "req", read: "john 17:1-999"} ]
        , ep1: [ {style: "req", read: "daniel 7:9-10"}
               , {style: "req", read: "daniel 7:13-14"} 
               ]
        , ep2: [ {style: "req", read: "hebrews 1:1-999"} ]
        }
      , Friday:
        { title: "Friday after Ascension"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "judges 2:6-999"} ]
        , mp2: [ {style: "req", read: "hebrews 2:1-999"} ]
        , ep1: [ {style: "req", read: "judges 3:12-999"} ]
        , ep2: [ {style: "req", read: "hebrews 3:1-999"} ]
        }
      , Saturday:
        { title: "Saturday after Ascension"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "judges 4:1-999"} ]
        , mp2: [ {style: "req", read: "hebrews 4:1-13"} ]
        , ep1: [ {style: "req", read: "judges 5:1-999"} ]
        , ep2: [ {style: "req", read: "hebrews 4:14-999"}
               , {style: "req", read: "hebrews 5:1-10"} 
               ]
        }
      } // end of 1:
    } // end of ascension
  , pentecost:
    { 1:
      { Sunday:
        { title: "Pentecost"
        , colors: ["red"]
        , mp1: [ {style: "req", read: "joel 2:28-999"} ]
        , mp2: [ {style: "req", read: "romans 8:1-17"} ]
        , ep1: [ {style: "req", read: "isaiah 11:1-9"} ]
        , ep2: [ {style: "req", read: "romans 8:18-999"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezekiel 11:14-20"} ]
        , mp2: [ {style: "req", read: "acts 2:12-36"} ]
        , ep1: [ {style: "req", read: "wisdom 1:1-7"} ]
        , ep2: [ {style: "req", read: "acts 2:37-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezekiel 37:1-14"} ]
        , mp2: [ {style: "req", read: "corinthians1 12:1-13"} ]
        , ep1: [ {style: "req", read: "wisdom 7:15-999"}
               , {style: "req", read: "wisdom 8:1-1"} 
               ]
        , ep2: [ {style: "req", read: "corinthians1 12:27-999"}
               , {style: "req", read: "corinthians1 13:1-999"} 
               ]
        }
      , Wednesday:
        { title: "Wednesday Ember Day"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "kings1 19:1-18"} ]
        , mp2: [ {style: "req", read: "corinthians1 2:1-999"} ]
        , ep1: [ {style: "req", read: "wisdom 9:1-999"} ]
        , ep2: [ {style: "req", read: "corinthians1 3:1-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel2 23:1-5"} ]
        , mp2: [ {style: "req", read: "ephesians 6:10-20"} ]
        , ep1: [ {style: "req", read: "exodus 35:30-999"}
               , {style: "req", read: "exodus 36:1-1"} 
               ]
        , ep2: [ {style: "req", read: "galatians 5:13-999"} ]
        }
      , Friday:
        { title: "Friday Ember Day"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "numbers 11:16-17,24-29"} ]
        , mp2: [ {style: "req", read: "corinthians2 5:14-999"}
               , {style: "req", read: "corinthians2 6:1-10"} 
               ]
        , ep1: [ {style: "req", read: "jeremiah 31:31-34"} ]
        , ep2: [ {style: "req", read: "corinthians2 3:1-999"} ]
        }
      , Saturday:
        { title: "Saturday Ember Day"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "numbers 27:15-999"} ]
        , mp2: [ {style: "req", read: "matthew 9:35-999"}
               , {style: "req", read: "matthew 10:1-10"}
                ]
        , ep1: [ {style: "req", read: "isaiah 61:1-999"} ]
        , ep2: [ {style: "req", read: "timothy2 1:3-14"} ]
      }
    }
  , trinity:
    { 1:
      { Sunday:
        { title: "Trinity Sunday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "isaiah 6:1-8"} ]
        , mp2: [ {style: "req", read: "mark 1:1-13"} ]
        , ep1: [ {style: "req", read: "isaiah 40:12-999"} ]
        , ep2: [ {style: "req", read: "peter1 1:1-12"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "job 1:1-999"} ]
        , mp2: [ {style: "req", read: "james 1:1-999"} ]
        , ep1: [ {style: "req", read: "job 2:1-999"} ]
        , ep2: [ {style: "req", read: "mark 1:14-31"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "job 3:1-999"} ]
        , mp2: [ {style: "req", read: "james 2:1-13"} ]
        , ep1: [ {style: "req", read: "job 4:1-999"} ]
        , ep2: [ {style: "req", read: "mark 1:32-999"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "job 5:1-999"} ]
        , mp2: [ {style: "req", read: "james 2:14-999"} ]
        , ep1: [ {style: "req", read: "job 6:1-999"} ]
        , ep2: [ {style: "req", read: "mark 2:1-22"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "job 7:1-999"} ]
        , mp2: [ {style: "req", read: "james 3:1-999"} ]
        , ep1: [ {style: "req", read: "job 8:1-999"} ]
        , ep2: [ {style: "req", read: "mark 2:23-999"}
               , {style: "req", read: "mark 3:1-12"} 
               ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "job 9:1-999"} ]
        , mp2: [ {style: "req", read: "james 4:1-999"} ]
        , ep1: [ {style: "req", read: "job 10:1-999"} ]
        , ep2: [ {style: "req", read: "mark 3:13-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "job 11:1-999"} ]
        , mp2: [ {style: "req", read: "james 5:1-999"} ]
        , ep1: [ {style: "req", read: "job 12:1-999"} ]
        , ep2: [ {style: "req", read: "mark 4:1-34"} ]
      }
    }
  , proper:
    { 1:
      { Sunday:
        { title: "Sunday closest to May 11"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 3:1-999"} ]
        , mp2: [ {style: "req", read: "corinthians1 10:1-13"}
               , {style: "opt", read: "corinthians1 10:14-24"} 
               ]
        , ep1: [ {style: "req", read: "genesis 4:1-15"} ]
        , ep2: [ {style: "req", read: "luke 10:25-37"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 18:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 19:16-999"}
               , {style: "req", read: "matthew 20:1-16"} 
               ]
        , ep1: [ {style: "req", read: "genesis 19:1-3"}
               , {style: "req", read: "genesis 19:12-29"} 
               ]
        , ep2: [ {style: "req", read: "romans 7:1-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "genesis 20:1-999"}
               , {style: "req", read: "genesis 21:1-999"} 
               ]
        , mp2: [ {style: "req", read: "matthew 20:17-999"} ]
        , ep1: [ {style: "req", read: "genesis 22:1-19"} ]
        , ep2: [ {style: "req", read: "romans 8:1-17"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 23:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 21:1-22"} ]
        , ep1: [ {style: "req", read: "genesis 24:1-28"} ]
        , ep2: [ {style: "req", read: "romans 8:18-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 24:29-999"} ]
        , mp2: [ {style: "req", read: "matthew 21:23-999"} ]
        , ep1: [ {style: "opt", read: "genesis 25:1-6"}
               , {style: "req", read: "genesis 25:7-11"}
               , {style: "req", read: "genesis 25:19-999"} 
               ]
        , ep2: [ {style: "req", read: "romans 9:1-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 26:1-5"}
               , {style: "opt", read: "genesis 26:6-11"
               }
               , {style: "req", read: "genesis 26:12-999"} 
               ]
        , mp2: [ {style: "req", read: "matthew 22:1-33"} ]
        , ep1: [ {style: "req", read: "genesis 27:1-40"} ]
        , ep2: [ {style: "req", read: "romans 10:1-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 27:41-999"}
               , {style: "req", read: "genesis 28:1-999"} 
               ]
        , mp2: [ {style: "req", read: "matthew 22:14-999"}
               , {style: "req", read: "matthew 23:1-12"} 
               ]
        , ep1: [ {style: "req", read: "genesis 29:1-20"}
               , {style: "opt", read: "genesis 29:21-999"}
               , {style: "opt", read: "genesis 30:1-43"} 
               ]
        , ep2: [ {style: "req", read: "romans 11:1-999"} ]
        }
      }
    , 2:
      { Sunday:
        { title: "Sunday closest to May 18"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 12:1-9"} ]
        , mp2: [ {style: "req", read: "corinthians1 12:4-999" } ]
        , ep1: [ {style: "req", read: "genesis 6:5-999" } ]
        , ep2: [ {style: "req", read: "luke 17:20-999"} ] 
        }
      , Monday:
        { Title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 31:1-21"} ]
        , mp2: [ {style: "req", read: "matthew 23:13-999"} ]
        , ep1: [ {style: "req", read: "genesis 31:22-999"}
               , {style: "req", read: "genesis 32:1-2"} 
               ]
        , ep2: [ {style: "req", read: "romans 12:1-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 32:3-30"}
               , {style: "opt", read: "genesis 32:31-32"} 
               ]
        , mp2: [ {style: "req", read: "matthew 24:1-28"} ]
        , ep1: [ {style: "req", read: "genesis 33:1-999"}
               , {style: "opt", read: "genesis 34:1-999"} ]
        , ep2: [ {style: "req", read: "romans 13:1-999"} ]
        }
      , Wednesday:
        { title: "Ash Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "isaiah 57:15-999"} ]
        , mp2: [ {style: "req", read: "mark 2:13-22"} ]
        , ep1: [ {style: "req", read: "isaiah 58:1-999"} ]
        , ep2: [ {style: "req", read: "hebrews 3:12-999"}
               , {style: "req", read: "hebrews 4:1-13"} 
               ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 35:1-20"}
               , {style: "opt", read: "genesis 35:21-29"} 
               ]
        , mp2: [ {style: "req", read: "matthew 24:29-999"} ]
        , ep1: [ {style: "req", read: "genesis 37:1-999"}
               , {style: "opt", read: "genesis 38:1-999"} 
               ]
        , ep2: [ {style: "req", read: "romans 14:1-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 39:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 25:1-30"} ]
        , ep1: [ {style: "req", read: "genesis 40:1-999"} ]
        , ep2: [ {style: "req", read: "romans 15:1-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "genesis 41:1-40"} ]
        , mp2: [ {style: "req", read: "matthew 25:31-999"} ]
        , ep1: [ {style: "req", read: "genesis 41:41-999"} ]
        , ep2: [ {style: "req", read: "romans 16:1-999"} ]
        }
      }
    , 3:
      { Sunday:
        { title: "Sunday closest to May 25"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "joshua 1:1-9"} ]
        , mp2: [ {style: "req", read: "mark 1:21-34"} ]
        , ep1: [ {style: "req", read: "samuel1 9:1-999"}
               , {style: "req", read: "samuel1 10:1-1"}
                ]
        , ep2: [ {style: "req", read: "acts 1:1-14"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "job 13:1-999"} ]
        , mp2: [ {style: "req", read: "peter1 1:1-21"} ]
        , ep1: [ {style: "req", read: "job 14:1-999"} ]
        , ep2: [ {style: "req", read: "mark 4:35-999"}
               , {style: "req", read: "mark 5:1-10"} 
               ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "job 15:1-16"}
               , {style: "opt", read: "job 15:17-35"} 
               ]
        , mp2: [ {style: "req", read: "peter1 1:22-999"}
               , {style: "req", read: "peter1 2:1-10"} 
               ]
        , ep1: [ {style: "req", read: "job 16:1-999"}
               , {style: "req", read: "job 17:1-2"} 
               ]
        , ep2: [ {style: "req", read: "mark 5:21-999"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "job 17:3-999"} ]
        , mp2: [ {style: "req", read: "peter1 2:11-999"}
               , {style: "req", read: "peter1 3:1-7"} 
               ]
        , ep1: [ {style: "req", read: "job 18:1-999"} ]
        , ep2: [ {style: "req", read: "mark 6:1-29"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "job 19:1-999"}
               , {style: "opt", read: "job 20:1-999"} 
               ]
        , mp2: [ {style: "req", read: "peter1 3:8-999"}
               , {style: "req", read: "peter1 4:1-6"} 
               ]
        , ep1: [ {style: "req", read: "job 21:1-999"} ]
        , ep2: [ {style: "req", read: "mark 6:30-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "job 22:1-999"} ]
        , mp2: [ {style: "req", read: "peter1 4:7-999"} ]
        , ep1: [ {style: "req", read: "job 23:1-999"} ]
        , ep2: [ {style: "req", read: "mark 1:1-23"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "job 24:1-999"} ]
        , mp2: [ {style: "req", read: "peter1 5:1-999"} ]
        , ep1: [ {style: "req", read: "job 25:1-999"}
               , {style: "req", read: "job 26:1-999"} 
               ]
        , ep2: [ {style: "req", read: "mark 7:24-999"}
               , {style: "req", read: "mark 8:1-10"} 
               ]
        }
      }
    , 4:
      { Sunday:
        { title: "Sunday closest to June 1"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "joshua 2:1-999"} ]
        , mp2: [ {style: "req", read: "mark 2:23-999"}
               , {style: "req", read: "mark 3:1-19"} 
               ]
        , ep1: [ {style: "req", read: "samuel1 16:1-13"} ]
        , ep2: [ {style: "req", read: "acts 2:1-21"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "job 27:1-999"} ]
        , mp2: [ {style: "req", read: "peter2 1:1-999"} ]
        , ep1: [ {style: "req", read: "job 28:1-999"} ]
        , ep2: [ {style: "req", read: "mark 8:11-999"}
               , {style: "req", read: "mark 9:1-1"} 
               ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "job 29:1-999"}
               , {style: "req", read: "job 30:1-1"} 
               , {style: "opt", read: "job 30:2-31"} 
               ]
        , mp2: [ {style: "req", read: "peter2 2:1-999"} ]
        , ep1: [ {style: "opt", read: "job 31:1-12"}
               , {style: "req", read: "job 31:13-999"} 
               ]
        , ep2: [ {style: "req", read: "mark 9:2-29"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "job 32:1-999"}
               , {style: "req", read: "job 33:1-999"} 
               ]
        , mp2: [ {style: "req", read: "peter2 3:1-999"} ]
        , ep1: [ {style: "req", read: "job 34:1-999"}
               , {style: "opt", read: "job 35:1-999"} 
               ]
        , ep2: [ {style: "req", read: "mark 9:30-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "job 36:1-999"}
               , {style: "opt", read: "job 37:1-999"} 
               ]
        , mp2: [ {style: "req", read: "jude:1-999"} ]
        , ep1: [ {style: "req", read: "job 38:1-999"} ]
        , ep2: [ {style: "req", read: "mark 10:1-31"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "job 39:1-999"} ]
        , mp2: [ {style: "req", read: "john1 1:1-999"}
               , {style: "req", read: "john1 2:1-6"} 
               ]
        , ep1: [ {style: "req", read: "job 40:1-999"} ]
        , ep2: [ {style: "req", read: "mark 10:32-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "job 41:1-999"} ]
        , mp2: [ {style: "req", read: "john1 2:7-999"} ]
        , ep1: [ {style: "req", read: "job 42:1-999"} ]
        , ep2: [ {style: "req", read: "mark 11:1-26"} ]
        }
      }
    , 5:
      { Sunday:
        { title: "Sunday closest to June 8"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "joshua 3:1-999"} ]
        , mp2: [ {style: "req", read: "mark 3:20-999"} ]
        , ep1: [ {style: "req", read: "samuel1 17:1-11"}
               , {style: "req", read: "samuel1 17:32-51"} ]
        , ep2: [ {style: "req", read: "acts 2:22-42"}
               , {style: "opt", read: "acts 2:43-999"} 
               ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "proverbs 1:1-19"} ]
        , mp2: [ {style: "req", read: "john1 3:1-12"} ]
        , ep1: [ {style: "req", read: "proverbs 1:20-999"} ]
        , ep2: [ {style: "req", read: "mark 11:27-999"}
               , {style: "req", read: "mark 12:1-12"} 
               ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "proverbs 2:1-999"} ]
        , mp2: [ {style: "req", read: "john1 3:13-999"}
               , {style: "req", read: "john1 4:1-6"} 
               ]
        , ep1: [ {style: "req", read: "proverbs 3:1-26"} ]
        , ep2: [ {style: "req", read: "mark 12:13-34"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "proverbs 3:27-999"}
               , {style: "req", read: "proverbs 4:1-19"} 
               ]
        , mp2: [ {style: "req", read: "john1 4:7-999"} ]
        , ep1: [ {style: "req", read: "proverbs 4:20-999"}
               , {style: "req", read: "proverbs 5:1-14"
             }
               , {style: "opt", read: "proverbs 5:15-23"} 
               ]
        , ep2: [ {style: "req", read: "mark 12:35-999"}
               , {style: "req", read: "mark 13:1-13"} 
               ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "proverbs 6:1-19"}
               , {style: "opt", read: "proverbs 6:20-35"} 
               ]
        , mp2: [ {style: "req", read: "john1 5:1-999"} ]
        , ep1: [ {style: "opt", read: "proverbs 7:1-999"}
               , {style: "req", read: "proverbs 8:1-999"} 
               ]
        , ep2: [ {style: "req", read: "mark 13:14-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "proverbs 9:1-999"} ]
        , mp2: [ {style: "req", read: "john2:1-999"} ]
        , ep1: [ {style: "req", read: "proverbs 10:1-22"} ]
        , ep2: [ {style: "req", read: "mark 14:1-26"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "proverbs 11:1-25"} ]
        , mp2: [ {style: "req", read: "john3:1-999"} ]
        , ep1: [ {style: "req", read: "proverbs 12:10-999"} ]
        , ep2: [ {style: "req", read: "mark 14:27-52"} ]
        }
      }
    , 6:
      { Sunday:
        { title: "Sunday closest to June 15"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "joshua 5:13-999"}
               , {style: "req", read: "joshua 6:1-10"} 
               ]
        , mp2: [ {style: "req", read: "mark 4:21-999"} ]
        , ep1: [ {style: "req", read: "samuel1 18:1-16"} ]
        , ep2: [ {style: "req", read: "acts 3:1-16"}
               , {style: "opt", read: "acts 3:17-999"} 
               ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "proverbs 14:9-27"} ]
        , mp2: [ {style: "req", read: "romans 1:1-999"} ]
        , ep1: [ {style: "req", read: "proverbs 15:18-999"} ]
        , ep2: [ {style: "req", read: "mark 14:53-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "proverbs 16:31-999"}
               , {style: "req", read: "proverbs 17:1-17"} 
               ]
        , mp2: [ {style: "req", read: "romans 2:1-16"} ]
        , ep1: [ {style: "req", read: "proverbs 18:10-999"} ]
        , ep2: [ {style: "req", read: "mark 15:1-41"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "proverbs 20:1-22"} ]
        , mp2: [ {style: "req", read: "romans 2:17-999"} ]
        , ep1: [ {style: "req", read: "proverbs 22:1-16"} ]
        , ep2: [ {style: "req", read: "mark 15:42-999"}
               , {style: "req", read: "mark 16:1-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "proverbs 24:23-999"} ]
        , mp2: [ {style: "req", read: "romans 3:1-999"} ]
        , ep1: [ {style: "req", read: "proverbs 25:1-999"} ]
        , ep2: [ {style: "req", read: "luke 1:1-23"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "proverbs 26:12-999"} ]
        , mp2: [ {style: "req", read: "romans 4:1-999"} ]
        , ep1: [ {style: "req", read: "proverbs 27:1-22"} ]
        , ep2: [ {style: "req", read: "luke 1:24-56"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "proverbs 30:1-999"}
                 , {style: "req", read: "proverbs 31:1-9"} 
                 ]
          , mp2: [ {style: "req", read: "romans 5:1-999"} ]
          , ep1: [ {style: "req", read: "proverbs 31:10-999"} ]
          , ep2: [ {style: "req", read: "luke 1:57-999"} ]
        }
      }
    , 7:
      { Sunday:
        { title: "Sunday closest to June 22"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "joshua 24:1-5"}
               , {style: "req", read: "joshua 24:13-25"} 
               ]
        , mp2: [ {style: "req", read: "mark 6:7-32"} ]
        , ep1: [ {style: "req", read: "samuel1 28:3-999"} ]
        , ep2: [ {style: "req", read: "acts 4:1-22"}
               , {style: "opt", read: "acts 4:23-31"} 
               ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel1 1:1-999"} ]
        , mp2: [ {style: "req", read: "romans 6:1-999"} ]
        , ep1: [ {style: "req", read: "samuel1 2:1-21"} ]
        , ep2: [ {style: "req", read: "luke 2:1-21"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel1 2:22-999"} ]
        , mp2: [ {style: "req", read: "romans 7:1-999"} ]
        , ep1: [ {style: "req", read: "samuel1 3:1-999"} ]
        , ep2: [ {style: "req", read: "luke 2:22-999"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel1 4:1-999"}
               , {style: "opt", read: "samuel1 5:1-999"} 
               ]
        , mp2: [ {style: "req", read: "romans 8:1-17"} ]
        , ep1: [ {style: "opt", read: "samuel1 6:1-999"}
               , {style: "req", read: "samuel1 7:1-999"} 
               ]
        , ep2: [ {style: "req", read: "luke 3:1-22"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel1 8:1-999"} ]
        , mp2: [ {style: "req", read: "romans 8:18-999"} ]
        , ep1: [ {style: "req", read: "samuel1 9:1-25"} ]
        , ep2: [ {style: "req", read: "luke 4:1-30"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel1 9:26-999"}
               , {style: "req", read: "samuel1 10:1-16"}
                ]
        , mp2: [ {style: "req", read: "romans 9:1-999"} ]
        , ep1: [ {style: "req", read: "samuel1 10:17-999"} ]
        , ep2: [ {style: "req", read: "luke 4:31-999"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "samuel1 11:1-999"} ]
          , mp2: [ {style: "req", read: "romans 10:1-999"} ]
          , ep1: [ {style: "req", read: "samuel1 12:1-999"} ]
          , ep2: [ {style: "req", read: "luke 5:1-16"} ]
        }
      }
    , 8:
      { Sunday:
        { title: "Sunday closest to June 29"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "judges 5:1-999"} ]
        , mp2: [ {style: "req", read: "mark 6:53-999"}
               , {style: "req", read: "mark 7:1-13"} 
               ]
        , ep1: [ {style: "req", read: "samuel2 1:1-999"} ]
        , ep2: [ {style: "req", read: "acts 6:1-999"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel1 13:1-999"} ]
        , mp2: [ {style: "req", read: "romans 11:1-24"} ]
        , ep1: [ {style: "req", read: "samuel1 14:1-23"} ]
        , ep2: [ {style: "req", read: "luke 5:17-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel1 14:24-48"}
               , {style: "opt", read: "samuel1 14:49-52"} 
               ]
        , mp2: [ {style: "req", read: "romans 11:25-999"} ]
        , ep1: [ {style: "req", read: "samuel1 15:1-999"} ]
        , ep2: [ {style: "req", read: "luke 6:1-19"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel1 16:1-999"} ]
        , mp2: [ {style: "req", read: "romans 12:1-999"} ]
        , ep1: [ {style: "req", read: "samuel1 17:1-30"} ]
        , ep2: [ {style: "req", read: "luke 6:20-38"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel1 17:31-54"} ]
        , mp2: [ {style: "req", read: "romans 13:1-999"} ]
        , ep1: [ {style: "req", read: "samuel1 17:55-999"}
               , {style: "req", read: "samuel1 18:1-16"}
               , {style: "opt", read: "samuel1 18:17-30"} 
               ]
        , ep2: [ {style: "req", read: "luke 6:39-999"}
               , {style: "req", read: "luke 7:1-10"} 
               ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel1 19:1-999"} ]
        , mp2: [ {style: "req", read: "romans 14:1-999"} ]
        , ep1: [ {style: "req", read: "samuel1 20:1-17"} ]
        , ep2: [ {style: "req", read: "luke 7:11-35"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "samuel1 20:18-999"} ]
          , mp2: [ {style: "req", read: "romans 15:1-13"} ]
          , ep1: [ {style: "req", read: "samuel1 21:1-999"}
                 , {style: "req", read: "samuel1 22:1-5"} 
                 ]
          , ep2: [ {style: "req", read: "luke 7:36-999"} ]
        }
      }
    , 9:
      { Sunday:
        { title: "Sunday closest to July 6"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "judges 7:1-23"} ]
        , mp2: [ {style: "req", read: "mark 9:14-29"} ]
        , ep1: [ {style: "req", read: "jeremiah 52:1-11"}
               , {style: "opt", read: "jeremiah 52:12-34"} 
               ]
        , ep2: [ {style: "req", read: "acts 8:4-17"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel1 22:6-999"} ]
        , mp2: [ {style: "req", read: "romans 15:14-999"} ]
        , ep1: [ {style: "req", read: "samuel1 23:1-999"} ]
        , ep2: [ {style: "req", read: "luke 8:1-21"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel1 24:1-999"} ]
        , mp2: [ {style: "req", read: "romans 16:1-999"} ]
        , ep1: [ {style: "req", read: "samuel1 25:1-43"} ]
        , ep2: [ {style: "req", read: "luke 8:22-999"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel1 26:1-999"}
               , {style: "opt", read: "samuel1 27:1-999"} 
               ]
        , mp2: [ {style: "req", read: "corinthians1 1:1-25"} ]
        , ep1: [ {style: "opt", read: "samuel1 28:1-2"}
               , {style: "req", read: "samuel1 28:3-999"}
               , {style: "opt", read: "samuel1 29:1-999"} 
               ]
        , ep2: [ {style: "req", read: "luke 9:1-17"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "samuel1 30:1-999"}
               , {style: "req", read: "samuel1 31:1-999"} 
               ]
        , mp2: [ {style: "req", read: "corinthians1 1:26-999"}
               , {style: "req", read: "corinthians1 2:1-999"} 
               ]
        , ep1: [ {style: "req", read: "samuel2 1:1-999"} ]
        , ep2: [ {style: "req", read: "luke 9:18-50"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel2 2:1-999"}
               , {style: "req", read: "samuel2 3:1-1"} 
               ]
        , mp2: [ {style: "req", read: "corinthians1 3:1-999"} ]
        , ep1: [ {style: "opt", read: "samuel2 3:2-16"}
               , {style: "req", read: "samuel2 3:17-999"} 
               ]
        , ep2: [ {style: "req", read: "luke 9:51-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "samuel2 4:1-999"}
               , {style: "req", read: "samuel2 5:1-12"} 
               ]
        , mp2: [ {style: "req", read: "corinthians1 4:1-17"} ]
        , ep1: [ {style: "req", read: "samuel2 6:1-999"} ]
        , ep2: [ {style: "req", read: "luke 10:1-24"} ]
        }
      }
    , 10:
      { Sunday:
        { title: "Sunday closest to July 13"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "judges 16:4-999"} ]
        , mp2: [ {style: "req", read: "mark 9:30-999"} ]
        , ep1: [ {style: "req", read: "samuel2 11:1-999"} ]
        , ep2: [ {style: "req", read: "acts 8:26-39"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel2 7:1-999"} ]
        , mp2: [ {style: "req", read: "corinthians1 4:18-999"}
               , {style: "req", read: "corinthians1 5:1-999"} 
               ]
        , ep1: [ {style: "req", read: "samuel2 8:1-999"} ]
        , ep2: [ {style: "req", read: "luke 10:25-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel2 9:1-999"} ]
        , mp2: [ {style: "req", read: "corinthians1 6:1-999"} ]
        , ep1: [ {style: "req", read: "samuel2 10:1-999"} ]
        , ep2: [ {style: "req", read: "luke 11:1-28"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "samuel2 12:1-999"}
               , {style: "opt", read: "samuel2 13:1-37"}
               , {style: "req", read: "samuel2 13:38-999"}
               , {style: "req", read: "samuel2 14:1-24"} 
               ]
        , mp2: [ {style: "req", read: "corinthians1 7:1-999"} ]
        , ep1: [ {style: "req", read: "samuel2 14:25-999"}
               , {style: "req", read: "samuel2 15:1-12"} 
               ]
        , ep2: [ {style: "req", read: "luke 11:29-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel2 15:13-999"} ]
        , mp2: [ {style: "req", read: "corinthians1 8:1-999"} ]
        , ep1: [ {style: "req", read: "samuel2 16:1-999"} ]
        , ep2: [ {style: "req", read: "luke 12:1-34"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel2 17:1-23"} ]
        , mp2: [ {style: "req", read: "corinthians1 9:1-999"} ]
        , ep1: [ {style: "req", read: "samuel2 17:24-999"}
               , {style: "req", read: "samuel2 18:1-18"} 
               ]
        , ep2: [ {style: "req", read: "luke 12:35-53"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "samuel2 18:19-999"} ]
          , mp2: [ {style: "req", read: "corinthians1 10:1-999"}
                 , {style: "req", read: "corinthians1 11:1-1"} 
                 ]
          , ep1: [ {style: "req", read: "samuel2 19:1-999"} ]
          , ep2: [ {style: "req", read: "luke 12:54-999"}
                 , {style: "req", read: "luke 13:1-9"} 
                 ]
        }
      }
    , 11:
      { Sunday:
        { title: "Sunday closest to July 20"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel1 1:1-20"}
               , {style: "opt", read: "samuel1 1:21-999"} 
               ]
        , mp2: [ {style: "req", read: "mark 10:17-31"} ]
        , ep1: [ {style: "req", read: "samuel2 12:1-23"} ]
        , ep2: [ {style: "req", read: "acts 11:1-18"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel2 20:1-999"}
               , {style: "opt", read: "samuel2 21:1-999"} 
               ]
        , mp2: [ {style: "req", read: "corinthians1 11:2-999"} ]
        , ep1: [ {style: "opt", read: "samuel2 22:1-999"}
               , {style: "req", read: "samuel2 23:1-17"
                  }
               , {style: "opt", read: "samuel2 23:18-39"} 
               ]
        , ep2: [ {style: "req", read: "luke 13:10-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel2 24:1-999"} ]
        , mp2: [ {style: "req", read: "corinthians1 12:1-27"} ]
        , ep1: [ {style: "opt", read: "kings1 1:1-4"}
               , {style: "req", read: "kings1 1:5-31"} 
               ]
        , ep2: [ {style: "req", read: "luke 14:1-24"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings1 1:32-999"}
               , {style: "opt", read: "kings1 2:1-999"} 
               ]
        , mp2: [ {style: "req", read: "corinthians1 12:27-999"}
               , {style: "req", read: "corinthians1 13:1-999"} 
               ]
        , ep1: [ {style: "req", read: "chronicles1 22:2-999"} ]
        , ep2: [ {style: "req", read: "luke 14:25-999"}
               , {style: "req", read: "luke 15:1-10"} 
               ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "chronicles1 28:1-999"}
               , {style: "req", read: "chronicles1 29:1-9"} 
               ]
        , mp2: [ {style: "req", read: "corinthians1 14:1-19"} ]
        , ep1: [ {style: "req", read: "chronicles1 29:10-999"} ]
        , ep2: [ {style: "req", read: "luke 15:11-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings1 3:1-999"} ]
        , mp2: [ {style: "req", read: "corinthians1 14:20-999"} ]
        , ep1: [ {style: "opt", read: "kings1 4:1-20"}
               , {style: "req", read: "kings1 4:21-999"} 
               ]
        , ep2: [ {style: "req", read: "luke 16:1-999"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "kings1 5:1-999"} ]
          , mp2: [ {style: "req", read: "corinthians1 15:1-34"} ]
          , ep1: [ {style: "req", read: "kings1 6:1-14"}
                 , {style: "opt", read: "kings1 6:15-38"} 
                 ]
          , ep2: [ {style: "req", read: "luke 17:1-19"} ]
        }
      }
    , 12:
      { Sunday:
        { title: "Sunday closest to July 27"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "samuel1 3:1-999"}
               , {style: "req", read: "samuel1 4:1-1" //a
             } ]
        , mp2: [ {style: "req", read: "mark 12:18-999"} ]
        , ep1: [ {style: "req", read: "ezekiel 37:15-999"} ]
        , ep2: [ {style: "req", read: "acts 15:1-31"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "kings1 7:1-999"}
               , {style: "req", read: "kings1 8:1-21"} 
               ]
        , mp2: [ {style: "req", read: "corinthians1 15:35-999"} ]
        , ep1: [ {style: "req", read: "kings1 8:22-53"} ]
        , ep2: [ {style: "req", read: "luke 17:20-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings1 8:54-999"}
               , {style: "req", read: "kings1 9:1-9"}
               , {style: "opt", read: "kings1 9:10-28"} 
               ]
        , mp2: [ {style: "req", read: "corinthians1 16:1-999"} ]
        , ep1: [ {style: "req", read: "kings1 10:1-999"} ]
        , ep2: [ {style: "req", read: "luke 18:1-30"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings1 11:1-13"}
               , {style: "opt", read: "kings1 11:14-25"
            }
               , {style: "req", read: "kings1 11:26-999"} 
               ]
        , mp2: [ {style: "req", read: "corinthians2 1:1-22"} ]
        , ep1: [ {style: "req", read: "kings1 12:1-24"} ]
        , ep2: [ {style: "req", read: "luke 18:31-999"}
               , {style: "req", read: "luke 19:1-10"} 
               ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings1 12:25-999"}
               , {style: "req", read: "kings1 13:1-10"} 
               ]
        , mp2: [ {style: "req", read: "corinthians2 1:23-999"}
               , {style: "req", read: "corinthians2 2:1-999"} 
               ]
        , ep1: [ {style: "req", read: "kings1 13:11-999"} ]
        , ep2: [ {style: "req", read: "luke 19:11-28"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings1 14:1-20"}
               , {style: "opt", read: "kings1 14:21-31"} 
               ]
        , mp2: [ {style: "req", read: "corinthians2 3:1-999"} ]
        , ep1: [ {style: "req", read: "chronicles2 12:1-999"} ]
        , ep2: [ {style: "req", read: "luke 19:29-999"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "chronicles2 13:1-999"} ]
          , mp2: [ {style: "req", read: "corinthians2 4:1-999"} ]
          , ep1: [ {style: "req", read: "chronicles2 14:1-999"} ]
          , ep2: [ {style: "req", read: "luke 20:1-26"} ]
        }
      }
    , 13:
      { Sunday:
        { title: "Sunday closest to August 3"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "hosea 6:1-6"} ]
        , mp2: [ {style: "req", read: "luke 4:1-15"} ]
        , ep1: [ {style: "req", read: "zechariah 2:1-999"} ]
        , ep2: [ {style: "req", read: "matthew 4:23-999"}
               , {style: "req", read: "matthew 5:1-10"} 
               ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "chronicles2 15:1-999"} ]
        , mp2: [ {style: "req", read: "corinthians2 5:1-999"} ]
        , ep1: [ {style: "req", read: "chronicles2 16:1-999"} ]
        , ep2: [ {style: "req", read: "luke 20:27-999"}
               , {style: "req", read: "luke 21:1-4"} 
               ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "kings1 15:1-999"}
               , {style: "opt", read: "kings1 16:1-14"}
               , {style: "req", read: "kings1 16:15-999"} 
               ]
        , mp2: [ {style: "req", read: "corinthians2 5:20-999"}
               , {style: "req", read: "corinthians2 7:1-1"} 
               ]
        , ep1: [ {style: "req", read: "kings1 17:1-999"} ]
        , ep2: [ {style: "req", read: "luke 21:5-999"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings1 18:1-16"} ]
        , mp2: [ {style: "req", read: "corinthians2 7:2-999"} ]
        , ep1: [ {style: "req", read: "kings1 18:17-999"} ]
        , ep2: [ {style: "req", read: "luke 22:1-38"} ]
        }
      , Thursday:
        { title: "Thursd"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings1 19:1-999"}
               , {style: "opt", read: "kings1 20:1-999"} 
               ]
        , mp2: [ {style: "req", read: "corinthians2 8:1-999"} ]
        , ep1: [ {style: "req", read: "kings1 21:1-999"} ]
        , ep2: [ {style: "req", read: "luke 22:39-53"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings1 22:1-40"}
               , {style: "opt", read: "kings1 22:41-53"} 
               ]
        , mp2: [ {style: "req", read: "corinthians2 9:1-999"} ]
        , ep1: [ {style: "req", read: "chronicles2 20:1-30"} ]
        , ep2: [ {style: "req", read: "luke 22:54-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings2 1:1-999"} ]
        , mp2: [ {style: "req", read: "corinthians2 10:1-999"} ]
        , ep1: [ {style: "req", read: "kings2 2:1-22"}
               , {style: "opt", read: "kings2 2:23-25"}
               , {style: "opt", read: "kings2 3:1-999"} 
               ]
        , ep2: [ {style: "req", read: "luke 23:1-25"} ]
        }
      }
    , 14:
      { Sunday:
        { title: "Sunday closest to August 10"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "jeremiah 26:1-16"} ]
        , mp2: [ {style: "req", read: "luke 4:16-30"} ]
        , ep1: [ {style: "req", read: "jeremiah 7:1-16"} ]
        , ep2: [ {style: "req", read: "matthew 5:21-999"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings2 4:1-37"}
               , {style: "opt", read: "kings2 4:38-44"} 
               ]
        , mp2: [ {style: "req", read: "corinthians2 11:1-999"} ]
        , ep1: [ {style: "req", read: "kings2 5:1-999"} ]
        , ep2: [ {style: "req", read: "luke 23:26-49"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings2 6:1-23"} ]
        , mp2: [ {style: "req", read: "corinthians2 12:1-13"} ]
        , ep1: [ {style: "req", read: "kings2 6:24-999"}
               , {style: "req", read: "kings2 7:1-2"} 
               ]
        , ep2: [ {style: "req", read: "luke 23:50-999"}
               , {style: "req", read: "luke 24:1-12"} 
               ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings2 7:3-999"} ]
        , mp2: [ {style: "req", read: "corinthians2 12:14-999"}
               , {style: "req", read: "corinthians2 13:1-999"} 
               ]
        , ep1: [ {style: "req", read: "kings2 8:1-15"}
               , {style: "opt", read: "kings2 8:16-29"} 
               ]
        , ep2: [ {style: "req", read: "luke 24:13-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings2 9:1-999"}
               , {style: "opt", read: "kings2 10:1-999"} 
               ]
        , mp2: [ {style: "req", read: "galatians 1:1-999"} ]
        , ep1: [ {style: "req", read: "kings2 11:1-20"} ]
        , ep2: [ {style: "req", read: "john 1:1-28"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings2 11:21-999"}
               , {style: "req", read: "kings2 12:1-999"} 
               ]
        , mp2: [ {style: "req", read: "galatians 2:1-999"} ]
        , ep1: [ {style: "req", read: "kings2 13:1-999"} ]
        , ep2: [ {style: "req", read: "john 1:29-999"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "kings2 14:1-999"} ]
          , mp2: [ {style: "req", read: "galatians 3:1-999"} ]
          , ep1: [ {style: "req", read: "chronicles2 26:1-999"} ]
          , ep2: [ {style: "req", read: "john 2:1-999"} ]
        }
      }
    , 15:
      { Sunday:
        { title: "Sunday closest to August 17"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "hosea 14:1-999"} ]
        , mp2: [ {style: "req", read: "luke 6:20-38"} ]
        , ep1: [ {style: "req", read: "ezra 1:1-8"} ]
        , ep2: [ {style: "req", read: "matthew 6:1-18"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "kings2 15:1-16"}
               , {style: "req", read: "kings2 15:17-999"} 
               ]
        , mp2: [ {style: "req", read: "galatians 4:1-999"}
               , {style: "req", read: "galatians 5:1-1"} 
               ]
        , ep1: [ {style: "req", read: "kings2 16:1-999"} ]
        , ep2: [ {style: "req", read: "john 3:1-21"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "isaiah 7:1-17"} ]
        , mp2: [ {style: "req", read: "galatians 5:2-999"} ]
        , ep1: [ {style: "req", read: "isaiah 8:1-18"} ]
        , ep2: [ {style: "req", read: "john 3:22-999"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings2 17:1-23"} ]
        , mp2: [ {style: "req", read: "galatians 6:1-999"} ]
        , ep1: [ {style: "req", read: "kings2 17:24-999"} ]
        , ep2: [ {style: "req", read: "john 4:1-26"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings2 18:1-8"}
               , {style: "opt", read: "kings2 18:9-12"} 
               ]
        , mp2: [ {style: "req", read: "ephesians 1:1-14"} ]
        , ep1: [ {style: "req", read: "chronicles2 30:1-999"} ]
        , ep2: [ {style: "req", read: "john 4:27-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings2 18:13-999"} ]
        , mp2: [ {style: "req", read: "ephesians 1:15-999"} ]
        , ep1: [ {style: "req", read: "kings2 19:1-999"} ]
        , ep2: [ {style: "req", read: "john 5:1-23"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings2 20:1-999"}
               , {style: "opt", read: "kings2 21:1-999"} 
               ]
        , mp2: [ {style: "req", read: "ephesians 2:1-10"} ]
        , ep1: [ {style: "req", read: "chronicles2 33:1-999"} ]
        , ep2: [ {style: "req", read: "john 5:24-999"} ]
        }
      }
    , 16:
      { Sunday:
        { title: "Sunday closest to August 24"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "joel 2:1-14"} ]
        , mp2: [ {style: "req", read: "luke 6:39-999"} ]
        , ep1: [ {style: "req", read: "daniel 3:1-999"} ]
        , ep2: [ {style: "req", read: "matthew 6:19-999"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings2 22:1-999"} ]
        , mp2: [ {style: "req", read: "ephesians 2:11-999"} ]
        , ep1: [ {style: "req", read: "kings2 23:1-20"} ]
        , ep2: [ {style: "req", read: "john 6:1-21"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings2 23:21-35"} ]
        , mp2: [ {style: "req", read: "ephesians 3:1-999"} ]
        , ep1: [ {style: "req", read: "kings2 23:36-999"}
               , {style: "req", read: "kings2 24:1-17"} 
               ]
        , ep2: [ {style: "req", read: "john 6:22-40"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "kings2 24:18-999"}
               , {style: "req", read: "kings2 25:1-7"} 
               ]
        , mp2: [ {style: "req", read: "ephesians 4:1-16"} ]
        , ep1: [ {style: "req", read: "kings2 25:8-999"} ]
        , ep2: [ {style: "req", read: "john 6:41-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "jeremiah 19:1-999"} ]
        , mp2: [ {style: "req", read: "ephesians 4:17-30"} ]
        , ep1: [ {style: "req", read: "jeremiah 21:1-10"}
               , {style: "opt", read: "jeremiah 21:11-14"} 
               ]
        , ep2: [ {style: "req", read: "john 7:1-24"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "jeremiah 22:1-19"}
               , {style: "req", read: "jeremiah 22:20-999"}
               , {style: "req", read: "jeremiah 23:1-8 "} 
               ]
        , mp2: [ {style: "req", read: "ephesians 4:31-999"}
               , {style: "req", read: "ephesians 5:1-11"} 
               ]
        , ep1: [ {style: "req", read: "jeremiah 24:1-999"} ]
        , ep2: [ {style: "req", read: "john 7:25-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "jeremiah 25:1-14"}
               , {style: "opt", read: "jeremiah 25:15-38"} 
               ]
        , mp2: [ {style: "req", read: "ephesians 5:22-999"} ]
        , ep1: [ {style: "req", read: "jeremiah 27:2-999"} ]
        , ep2: [ {style: "req", read: "john 8:1-30"} ]
        }
      }
    , 17:
      { Sunday:
        { title: "Sunday closest to August 31"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezekiel 11:14-20"} ]
        , mp2: [ {style: "req", read: "luke 7:36-999"}
               , {style: "req", read: "luke 8:1-3"} 
               ]
        , ep1: [ {style: "req", read: "daniel 5:1-999"} ]
        , ep2: [ {style: "req", read: "matthew 7:1-14"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "jeremiah 28:1-999"} ]
        , mp2: [ {style: "req", read: "ephesians 6:1-9"} ]
        , ep1: [ {style: "req", read: "jeremiah 29:1-20"} ]
        , ep2: [ {style: "req", read: "john 8:31-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "jeremiah 32:1-15"} ]
        , mp2: [ {style: "req", read: "ephesians 6:10-999"} ]
        , ep1: [ {style: "req", read: "jeremiah 32:16-35"} ]
        , ep2: [ {style: "req", read: "john 9:1-999"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "jeremiah 32:36-999"} ]
        , mp2: [ {style: "req", read: "philippians 1:1-11"} ]
        , ep1: [ {style: "req", read: "jeremiah 33:1-13"} ]
        , ep2: [ {style: "req", read: "john 10:1-21"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "jeremiah 33:14-999"} ]
        , mp2: [ {style: "req", read: "philippians 1:12-999"} ]
        , ep1: [ {style: "opt", read: "jeremiah 34:1-7"}
               , {style: "req", read: "jeremiah 34:8-999"} 
               ]
        , ep2: [ {style: "req", read: "john 10:22-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "jeremiah 36:1-999"}
               , {style: "req", read: "jeremiah 37:1-999"} 
               ]
        , mp2: [ {style: "req", read: "philippians 2:1-11"} ]
        , ep1: [ {style: "req", read: "jeremiah 38:1-13"} ]
        , ep2: [ {style: "req", read: "john 11:1-44"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "jeremiah 38:14-999"}
               , {style: "opt", read: "jeremiah 39:1-999"} 
               ]
        , mp2: [ {style: "req", read: "philippians 2:12-999"} ]
        , ep1: [ {style: "req", read: "jeremiah 40:1-999"}
               , {style: "opt", read: "jeremiah 41:1-999"} 
               ]
        , ep2: [ {style: "req", read: "john 11:45-999"} ]
        }
      }
    , 18:
      { Sunday:
        { title: "Sunday closest to September 7"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezekiel 18:1-4"}
               , {style: "req", read: "ezekiel 18:19-999"} 
               ]
        , mp2: [ {style: "req", read: "luke 9:46-999"} ]
        , ep1: [ {style: "req", read: "daniel 6:1-23"}
               , {style: "opt", read: "daniel 6:24-28"} 
               ]
        , ep2: [ {style: "req", read: "matthew 7:15-999"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "jeremiah 42:1-999"}
               , {style: "opt", read: "jeremiah 43:1-999"} 
               ]
        , mp2: [ {style: "req", read: "philippians 3:1-999"} ]
        , ep1: [ {style: "req", read: "jeremiah 44:1-999"}
               , {style: "opt", read: "jeremiah 45:1-999"} 
               ]
        , ep2: [ {style: "req", read: "john 12:1-19"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "jeremiah 46:1-999"}
               , {style: "opt", read: "jeremiah 47:1-999"} 
               ]
        , mp2: [ {style: "req", read: "philippians 4:1-999"} ]
        , ep1: [ {style: "req", read: "jeremiah 48:1-999"}
               , {style: "opt", read: "jeremiah 49:1-999"} 
               ]
        , ep2: [ {style: "req", read: "john 12:20-999"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "jeremiah 50:1-999"} ]
        , mp2: [ {style: "req", read: "colossians 1:1-20"} ]
        , ep1: [ {style: "req", read: "jeremiah 51:1-999"} ]
        , ep2: [ {style: "req", read: "john 13:1-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezekiel 1:1-14"} ]
        , mp2: [ {style: "req", read: "colossians 1:21-999"}
               , {style: "req", read: "colossians 2:1-7"} 
               ]
        , ep1: [ {style: "req", read: "ezekiel 1:15-999"} ]
        , ep2: [ {style: "req", read: "john 14:1-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezekiel 2:1-999"} ]
        , mp2: [ {style: "req", read: "colossians 2:8-19"} ]
        , ep1: [ {style: "req", read: "ezekiel 3:1-14"} ]
        , ep2: [ {style: "req", read: "john 15:1-999"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "ezekiel 3:15-999"} ]
          , mp2: [ {style: "req", read: "colossians 2:20-999"}
                 , {style: "req", read: "colossians 3:1-11"} 
                 ]
          , ep1: [ {style: "req", read: "ezekiel 8:1-999"} ]
          , ep2: [ {style: "req", read: "john 16:1-999"} ]
        }
      }
    , 19:
      { Sunday:
        { title: "Sunday closest to September 14"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezekiel 33:1-11"} ]
        , mp2: [ {style: "req", read: "luke 10:1-24"} ]
        , ep1: [ {style: "req", read: "proverbs 1:20-999"} ]
        , ep2: [ {style: "req", read: "matthew 11:2-19"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezekiel 9:1-999"} ]
        , mp2: [ {style: "req", read: "colossians 3:12-999"}
               , {style: "req", read: "colossians 4:1-1"} 
               ]
        , ep1: [ {style: "req", read: "ezekiel 11:1-13"} ]
        , ep2: [ {style: "req", read: "john 17:1-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezekiel 12:1-16"} ]
        , mp2: [ {style: "req", read: "colossians 4:2-999"} ]
        , ep1: [ {style: "req", read: "ezekiel 12:17-999"} ]
        , ep2: [ {style: "req", read: "john 18:1-27"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezekiel 13:1-16"} ]
        , mp2: [ {style: "req", read: "philemon 1:1-999"} ]
        , ep1: [ {style: "req", read: "ezekiel 14:1-999"} ]
        , ep2: [ {style: "req", read: "john 18:28-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezekiel 17:1-999"} ]
        , mp2: [ {style: "req", read: "thessalonians1 1:1-999"} ]
        , ep1: [ {style: "req", read: "ezekiel 20:1-26"} ]
        , ep2: [ {style: "req", read: "john 19:1-30"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezekiel 20:27-44"} ]
        , mp2: [ {style: "req", read: "thessalonians1 2:1-16"} ]
        , ep1: [ {style: "req", read: "ezekiel 22:23-999"} ]
        , ep2: [ {style: "req", read: "john 19:31-999"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "ezekiel 24:15-999"} ]
          , mp2: [ {style: "req", read: "thessalonians1 2:17-999"}
                 , {style: "req", read: "thessalonians1 3:1-999"} 
                 ]
          , ep1: [ {style: "req", read: "ezekiel 28:1-19"} ]
          , ep2: [ {style: "req", read: "john 20:1-999"} ]
        }
      }
    , 20:
      { Sunday:
        { title: "Sunday closest to September 21"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezekiel 34:1-16"} ]
        , mp2: [ {style: "req", read: "luke 11:37-999"} ]
        , ep1: [ {style: "req", read: "proverbs 8:1-17"} ]
        , ep2: [ {style: "req", read: "matthew 11:20-999"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezekiel 33:12-20"} ]
        , mp2: [ {style: "req", read: "thessalonians1 4:1-12"} ]
        , ep1: [ {style: "req", read: "ezekiel 33:21-999"} ]
        , ep2: [ {style: "req", read: "john 21:1-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezekiel 34:17-999"} ]
        , mp2: [ {style: "req", read: "thessalonians1 4:13-999"}
               , {style: "req", read: "thessalonians1 5:1-11"} 
               ]
        , ep1: [ {style: "req", read: "ezekiel 36:22-999"} ]
        , ep2: [ {style: "req", read: "hebrews 1:1-999"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezekiel 37:1-14"} ]
        , mp2: [ {style: "req", read: "thessalonians1 5:12-999"} ]
        , ep1: [ {style: "req", read: "ezekiel 37:15-999"} ]
        , ep2: [ {style: "req", read: "hebrews 2:1-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezra 1:1-999"}
               , {style: "opt", read: "ezra 2:1-999"} 
               ]
        , mp2: [ {style: "req", read: "thessalonians2 1:1-999"} ]
        , ep1: [ {style: "req", read: "ezra 3:1-999"} ]
        , ep2: [ {style: "req", read: "hebrews 3:1-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezra 4:1-999"} ]
        , mp2: [ {style: "req", read: "thessalonians2 2:1-999"} ]
        , ep1: [ {style: "req", read: "haggai 1:1-999"}
               , {style: "req", read: "haggai 2:1-9"} 
               ]
        , ep2: [ {style: "req", read: "hebrews 4:1-13"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "zechariah 1:1-17"} ]
          , mp2: [ {style: "req", read: "thessalonians2 3:1-999"} ]
          , ep1: [ {style: "req", read: "zechariah 1:18-999"}
                 , {style: "req", read: "zechariah 2:1-999"} ]
          , ep2: [ {style: "req", read: "hebrews 4:14-999"}
                 , {style: "req", read: "hebrews 5:1-10"} 
                 ]
        }
      }
    , 21:
      { Sunday:
        { title: "Sunday closest to September 28"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "proverbs 14:31-999"}
               , {style: "req", read: "proverbs 15:1-17"} 
               ]
        , mp2: [ {style: "req", read: "luke 12:1-21"} ]
        , ep1: [ {style: "req", read: "proverbs 8:1"}
               , {style: "req", read: "proverbs 8:22-999"} ]
        , ep2: [ {style: "req", read: "matthew 12:22-45"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "zechariah 3:1-999"} ]
        , mp2: [ {style: "req", read: "timothy1 1:1-17"} ]
        , ep1: [ {style: "req", read: "zechariah 4:1-999"}
               , {style: "opt", read: "zechariah 5:1-999"} 
               ]
        , ep2: [ {style: "req", read: "hebrews 5:11-999"}
               , {style: "req", read: "hebrews 6:1-999"} 
               ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "zechariah 6:1-999"} ]
        , mp2: [ {style: "req", read: "timothy1 1:18-999"}
               , {style: "req", read: "timothy1 2:1-999"} 
               ]
        , ep1: [ {style: "req", read: "zechariah 7:1-999"}
               , {style: "opt", read: "zechariah 8:1-999"} 
               ]
        , ep2: [ {style: "req", read: "hebrews 7:1-999"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "zechariah 9:1-999"}
               , {style: "opt", read: "zechariah 10:1-999"} 
               ]
        , mp2: [ {style: "req", read: "timothy1 3:1-999"} ]
        , ep1: [ {style: "req", read: "zechariah 11:1-999"}
               , {style: "opt", read: "zechariah 12:1-999"} 
               ]
        , ep2: [ {style: "req", read: "hebrews 8:1-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "zechariah 13:1-999"}
               , {style: "opt", read: "zechariah 14:1-999"} 
               ]
        , mp2: [ {style: "req", read: "timothy1 4:1-999"} ]
        , ep1: [ {style: "req", read: "haggai 2:10-999"} ]
        , ep2: [ {style: "req", read: "hebrews 9:1-14"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezra 5:1-999"} ]
        , mp2: [ {style: "req", read: "timothy1 5:1-999"} ]
        , ep1: [ {style: "req", read: "ezra 6:1-999"} ]
        , ep2: [ {style: "req", read: "hebrews 9:15-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezra 7:1-999"} ]
        , mp2: [ {style: "req", read: "timothy1 6:1-999"} ]
        , ep1: [ {style: "req", read: "ezra 8:15-999"} ]
        , ep2: [ {style: "req", read: "hebrews 10:1-18"} ]
        }
      }
    , 22:
      { Sunday:
        { title: "Sunday closest to October 5"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "proverbs 31:10-999"} ]
        , mp2: [ {style: "req", read: "luke 12:22-34"} ]
        , ep1: [ {style: "req", read: "jonah 3:1-999"}
               , {style: "req", read: "jonah 4:1-999"} 
               ]
        , ep2: [ {style: "req", read: "matthew 13:44-999"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ezra 9:1-999"} ]
        , mp2: [ {style: "req", read: "titus 1:1-999"}
               , {style: "req", read: "titus 2:1-8"} 
               ]
        , ep1: [ {style: "req", read: "ezra 10:1-19 "} ]
        , ep2: [ {style: "req", read: "hebrews 10:19-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "nehemiah 1:1-999"} ]
        , mp2: [ {style: "req", read: "titus 2:9-999"}
               , {style: "req", read: "titus 3:1-999"} 
               ]
        , ep1: [ {style: "req", read: "nehemiah 2:1-999"} ]
        , ep2: [ {style: "req", read: "hebrews 11:1-16"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "nehemiah 4:1-999"} ]
        , mp2: [ {style: "req", read: "timothy2 1:1-999"} ]
        , ep1: [ {style: "req", read: "nehemiah 5:1-999"} ]
        , ep2: [ {style: "req", read: "hebrews 11:17-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "nehemiah 6:1-999"}
               , {style: "req", read: "nehemiah 7:1-4"} 
               ]
        , mp2: [ {style: "req", read: "timothy2 2:1-999"} ]
        , ep1: [ {style: "req", read: "nehemiah 8:1-999"} ]
        , ep2: [ {style: "req", read: "hebrews 12:1-13"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "nehemiah 9:1-23"} ]
        , mp2: [ {style: "req", read: "timothy2 3:1-999"} ]
        , ep1: [ {style: "req", read: "nehemiah 9:24-999"} ]
        , ep2: [ {style: "req", read: "hebrews 12:14-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "nehemiah 12:17-999"}
               , {style: "req", read: "nehemiah 13:1-999"} 
               ]
        , mp2: [ {style: "req", read: "timothy2 4:1-999"} ]
        , ep1: [ {style: "req", read: "daniel 1:1-999"} ]
        , ep2: [ {style: "req", read: "hebrews 13:1-999"} ]
        }
      }
    , 23:
      { Sunday:
        { title: "Sunday closest to October 12"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom 2:1-999"}
               , {style: "alt", read: "proverbs 2:1-999"} 
               ]
        , mp2: [ {style: "req", read: "luke 12:35-999"} ]
        , ep1: [ {style: "req", read: "wisdom_of_solomon 4:11-28"}
               , {style: "alt", read: "daniel 1:1-999"} 
               ]
        , ep2: [ {style: "req", read: "matthew 14:13-33"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "daniel 2:1-24"} ]
        , mp2: [ {style: "req", read: "james 1:1-11"} ]
        , ep1: [ {style: "req", read: "daniel 2:25-999"} ]
        , ep2: [ {style: "req", read: "james 1:12-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "daniel 4:1-18"} ]
        , mp2: [ {style: "req", read: "james 2:1-13"} ]
        , ep1: [ {style: "req", read: "daniel 4:19-999"} ]
        , ep2: [ {style: "req", read: "james 2:14-999"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "daniel 7:1-8"}
               , {style: "req", read: "daniel 7:9-999"}
               , {style: "opt", read: "daniel 8:1-999"} 
               ]
        , mp2: [ {style: "req", read: "james 3:1-999"} ]
        , ep1: [ {style: "req", read: "daniel 9:1-999"} ]
        , ep2: [ {style: "req", read: "james 4:1-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "daniel 10:1-999"}
               , {style: "opt", read: "daniel 11:1-999"} 
               ]
        , mp2: [ {style: "req", read: "james 5:1-999"} ]
        , ep1: [ {style: "req", read: "daniel 12:1-999"} ]
        , ep2: [ {style: "req", read: "peter1 1:1-12"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "esther 1:1-999"} ]
        , mp2: [ {style: "req", read: "peter1 1:13-999"} ]
        , ep1: [ {style: "req", read: "esther 2:1-999"} ]
        , ep2: [ {style: "req", read: "peter1 2:1-10"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "esther 3:1-999"} ]
          , mp2: [ {style: "req", read: "peter1 2:11-999"}
                 , {style: "req", read: "peter1 3:1-7"} 
                 ]
          , ep1: [ {style: "req", read: "esther 4:1-999"}
                 , {style: "req", read: "esther 5:1-999"} 
                 ]
          , ep2: [ {style: "req", read: "peter1 3:8-999"} ]
        }
      }
    , 24:
      { Sunday:
        { title: "Sunday closest to October 19"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom 4:7-17"}
               , {style: "alt", read: "proverbs 9:1-11"} 
               ]
        , mp2: [ {style: "req", read: "luke 13:18-999"} ]
        , ep1: [ {style: "req", read: "wisdom_of_solomon 4:29-999"}
               , {style: "req", read: "wisdom_of_solomon 6:1-1"}
               , {style: "alt", read: "daniel 2:1-23"} 
               ]
        , ep2: [ {style: "req", read: "matthew 16:13-999"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "esther 6:1-999"}
               , {style: "req", read: "esther 7:1-999"} 
               ]
        , mp2: [ {style: "req", read: "peter1 4:1-11"} ]
        , ep1: [ {style: "req", read: "esther 8:1-999"}
               , {style: "opt", read: "esther 9:1-999"}
               , {style: "req", read: "esther 10:1-999"} 
               ]
        , ep2: [ {style: "req", read: "peter1 4:12-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ecclesiastes 1:1-999"} ]
        , mp2: [ {style: "req", read: "peter1 5:1-999"} ]
        , ep1: [ {style: "req", read: "ecclesiastes 2:1-23"}
               , {style: "opt", read: "ecclesiastes 2:24-26"} 
               ]
        , ep2: [ {style: "req", read: "john1 1:1-999"}
               , {style: "req", read: "john1 2:1-6"} 
               ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ecclesiastes 3:1-999"} ]
        , mp2: [ {style: "req", read: "john1 2:7-17"} ]
        , ep1: [ {style: "req", read: "ecclesiastes 4:1-999"} ]
        , ep2: [ {style: "req", read: "john1 2:18-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ecclesiastes 5:1-999"} ]
        , mp2: [ {style: "req", read: "john1 3:1-18"} ]
        , ep1: [ {style: "req", read: "ecclesiastes 6:1-999"}
               , {style: "req", read: "ecclesiastes 7:1-14"}
                ]
        , ep2: [ {style: "req", read: "john1 3:19-999"}
               , {style: "req", read: "john1 4:1-6"} 
               ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ecclesiastes 7:15-999"} ]
        , mp2: [ {style: "req", read: "john1 4:7-999"} ]
        , ep1: [ {style: "req", read: "ecclesiastes 8:1-999"} ]
        , ep2: [ {style: "req", read: "john1 5:1-999"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ecclesiastes 9:1-999"}
               , {style: "opt", read: "ecclesiastes 10:1-999"} 
               ]
        , mp2: [ {style: "req", read: "john2:1-999"} ]
        , ep1: [ {style: "opt", read: "ecclesiastes 11:1-999"}
               , {style: "req", read: "ecclesiastes 12:1-999"} 
               ]
        , ep2: [ {style: "req", read: "john3:1-999"} ]
        }
      }
    , 25:
      { Sunday:
        { title: "Sunday closest to October 26"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom 6:1-21"}
               , {style: "alt", read: "proverbs 16:9-20"} 
               ]
        , mp2: [ {style: "req", read: "luke 14:15-999"} ]
        , ep1: [ {style: "req", read: "wisdom_of_solomon 11:7-28"}
               , {style: "alt", read: "daniel 2:24-45"} 
               ]
        , ep2: [ {style: "req", read: "matthew 18:1-20"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "maccabees1 1:1-19"} ]
        , mp2: [ {style: "req", read: "acts 1:1-999"} ]
        , ep1: [ {style: "req", read: "maccabees1 1:20-40"} ]
        , ep2: [ {style: "req", read: "acts 2:1-21"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "maccabees1 1:41-999"} ]
        , mp2: [ {style: "req", read: "acts 2:22-999"} ]
        , ep1: [ {style: "req", read: "maccabees1 2:1-28"} ]
        , ep2: [ {style: "req", read: "acts 3:1-999"}
               , {style: "req", read: "acts 4:1-4"} 
               ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "maccabees1 2:29-48"} ]
        , mp2: [ {style: "req", read: "acts 4:5-31"} ]
        , ep1: [ {style: "req", read: "maccabees1 2:49-999"} ]
        , ep2: [ {style: "req", read: "acts 4:32-999"}
               , {style: "req", read: "acts 5:1-11"} 
               ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "maccabees1 3:1-26"} ]
        , mp2: [ {style: "req", read: "acts 5:12-999"} ]
        , ep1: [ {style: "req", read: "maccabees1 3:27-41"} ]
        , ep2: [ {style: "req", read: "acts 6:1-999"}
               , {style: "req", read: "acts 7:1-16"}
                ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "maccabees1 4:1-25"} ]
        , mp2: [ {style: "req", read: "acts 7:17-34"} ]
        , ep1: [ {style: "req", read: "maccabees1 4:26-35"} ]
        , ep2: [ {style: "req", read: "acts 7:35-999"}
               , {style: "req", read: "acts 8:1-4"} 
               ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "maccabees1 4:36-999"} ]
          , mp2: [ {style: "req", read: "acts 8:4-25"} ]
          , ep1: [ {style: "req", read: "maccabees1 6:1-17"} ]
          , ep2: [ {style: "req", read: "acts 8:26-999"} ]
        }
      }
    , 26:
      { Sunday:
        { title: "Sunday closest to November 2"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom 7:15-999"}
               , {style: "req", read: "wisdom 8:1-1"}
               , {style: "alt", read: "proverbs 25:11-999"} 
               ]
        , mp2: [ {style: "req", read: "luke 15:1-10"} ]
        , ep1: [ {style: "req", read: "wisdom_of_solomon 15:11-999"}
               , {style: "alt", read: "daniel 9:1-19"} 
               ]
        , ep2: [ {style: "req", read: "matthew 21:12-32"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "maccabees1 6:18-47"} ]
        , mp2: [ {style: "req", read: "acts 9:1-31"} ]
        , ep1: [ {style: "req", read: "maccabees1 6:48-999"} ]
        , ep2: [ {style: "req", read: "acts 9:32-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "maccabees1 7:1-20"} ]
        , mp2: [ {style: "req", read: "acts 10:1-23"} ]
        , ep1: [ {style: "req", read: "maccabees1 7:21-999"} ]
        , ep2: [ {style: "req", read: "acts 10:24-999"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "maccabees1 9:1-22"} ]
        , mp2: [ {style: "req", read: "acts 11:1-18"} ]
        , ep1: [ {style: "req", read: "maccabees1 13:41-999"}
               , {style: "opt", read: "maccabees1 14:1-15"} 
               ]
        , ep2: [ {style: "req", read: "acts 11:19-999"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom_of_solomon 1:1-10"} ]
        , mp2: [ {style: "req", read: "acts 12:1-24"} ]
        , ep1: [ {style: "req", read: "wisdom_of_solomon 1:1-999"} ]
        , ep2: [ {style: "req", read: "acts 12:25-999"}
               , {style: "req", read: "acts 13:1-12"} 
               ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom_of_solomon 2:1-999"} ]
        , mp2: [ {style: "req", read: "acts 13:13-43"} ]
        , ep1: [ {style: "req", read: "wisdom_of_solomon 6:14-31"} ]
        , ep2: [ {style: "req", read: "acts 13:44-999"}
               , {style: "req", read: "acts 14:1-7"} 
               ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "wisdom_of_solomon 7:27-999"} ]
          , mp2: [ {style: "req", read: "acts 14:8-999"} ]
          , ep1: [ {style: "req", read: "wisdom_of_solomon 10:6-8"}
                 , {style: "req", read: "wisdom_of_solomon 10:12-24"} ]
          , ep2: [ {style: "req", read: "acts 15:1-21"} ]
        }
      }
    , 27:
      { Sunday:
        { title: "Sunday closest to November 9"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "esdras2 16:53-67"}
               , {style: "alt", read: "zechariah 1:7-999"} 
               ]
        , mp2: [ {style: "req", read: "luke 17:1-10"} ]
        , ep1: [ {style: "req", read: "baruch 3:1-14"}
               , {style: "alt", read: "zechariah 9:9-12"}
               , {style: "alt", read: "zechariah 9:16"} 
               ]
        , ep2: [ {style: "req", read: "matthew 21:33-999"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom_of_solomon 14:20-999"}
               , {style: "req", read: "wisdom_of_solomon 15:1-10"} 
               ]
        , mp2: [ {style: "req", read: "acts 15:22-35"} ]
        , ep1: [ {style: "req", read: "wisdom_of_solomon 16:1-14"} ]
        , ep2: [ {style: "req", read: "acts 15:36-999"}
               , {style: "req", read: "acts 16:1-5"} 
               ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom_of_solomon 16:17-999"} ]
        , mp2: [ {style: "req", read: "acts 16:6-999"} ]
        , ep1: [ {style: "req", read: "wisdom_of_solomon 17:1-24"} ]
        , ep2: [ {style: "req", read: "acts 17:1-15"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom_of_solomon 18:15-999"} ]
        , mp2: [ {style: "req", read: "acts 17:16-999"} ]
        , ep1: [ {style: "req", read: "wisdom_of_solomon 19:13-999"} ]
        , ep2: [ {style: "req", read: "acts 18:1-23"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom_of_solomon 20:1-20"} ]
        , mp2: [ {style: "req", read: "acts 18:24-999"}
               , {style: "req", read: "acts 19:1-7"} 
               ]
        , ep1: [ {style: "req", read: "wisdom_of_solomon 20:21-999"} ]
        , ep2: [ {style: "req", read: "acts 19:8-20"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom_of_solomon 21:1-17"} ]
        , mp2: [ {style: "req", read: "acts 19:21-999"} ]
        , ep1: [ {style: "req", read: "wisdom_of_solomon 22:6-22"} ]
        , ep2: [ {style: "req", read: "acts 20:1-16"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "wisdom_of_solomon 22:27-999"}
                 , {style: "req", read: "wisdom_of_solomon 23:1-15"} 
                 ]
          , mp2: [ {style: "req", read: "acts 20:17-999"} ]
          , ep1: [ {style: "req", read: "wisdom_of_solomon 24:1-22"} ]
          , ep2: [ {style: "req", read: "acts 21:1-16"} ]
        }
      }
    , 28:
      { Sunday:
        { title: "Sunday closest to November 16"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "prayer_of_manasses 1:1-999"}
               , {style: "alt", read: "zechariah 11:1-999"} 
               ]
        , mp2: [ {style: "req", read: "luke 20:1-19"} ]
        , ep1: [ {style: "req", read: "baruch 4:36-999"}
               , {style: "req", read: "baruch 5:1-999"}
               , {style: "alt", read: "zechariah 13:1-999"} 
               ]
        , ep2: [ {style: "req", read: "matthew 23:1-22"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom_of_solomon 24:23-999"} ]
        , mp2: [ {style: "req", read: "acts 21:17-36"} ]
        , ep1: [ {style: "req", read: "wisdom_of_solomon 31:1-11"} ]
        , ep2: [ {style: "req", read: "acts 21:37-999"}
               , {style: "req", read: "acts 22:1-12"} 
               ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom_of_solomon 34:9-999"} ]
        , mp2: [ {style: "req", read: "acts 22:23-999"}
               , {style: "req", read: "acts 23:1-11"} 
               ]
        , ep1: [ {style: "req", read: "wisdom_of_solomon 35:1-999"} ]
        , ep2: [ {style: "req", read: "acts 23:12-999"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom_of_solomon 37:1-15"} ]
        , mp2: [ {style: "req", read: "acts 24:1-23"} ]
        , ep1: [ {style: "req", read: "wisdom_of_solomon 38:1-14"} ]
        , ep2: [ {style: "req", read: "acts 24:24-999"}
               , {style: "req", read: "acts 25:1-12"} 
               ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom_of_solomon 39:1-11"} ]
        , mp2: [ {style: "req", read: "acts 25:13-999"} ]
        , ep1: [ {style: "req", read: "wisdom_of_solomon 39:13-999"} ]
        , ep2: [ {style: "req", read: "acts 26:1-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom_of_solomon 43:1-12"} ]
        , mp2: [ {style: "req", read: "acts 27:1-26"} ]
        , ep1: [ {style: "req", read: "wisdom_of_solomon 50:1-24"} ]
        , ep2: [ {style: "req", read: "acts 27:27-999"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "wisdom_of_solomon 51:1-12"} ]
          , mp2: [ {style: "req", read: "acts 28:1-15"} ]
          , ep1: [ {style: "req", read: "wisdom_of_solomon 51:13-999"} ]
          , ep2: [ {style: "req", read: "acts 28:16-999"} ]
        }
      }
    , 29:
      { Sunday:
        { title: "Sunday closest to November 23"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "ecclesiastes 11:1-999"}
               , {style: "req", read: "ecclesiastes 12:1-999"} 
               ]
        , mp2: [ {style: "req", read: "hebrews 11:1-16"} ]
        , ep1: [ {style: "req", read: "malichi 3:13-999"}
               , {style: "req", read: "malichi 4:1-999"} 
               ]
        , ep2: [ {style: "req", read: "hebrews 11:17-999"}
               , {style: "req", read: "hebrews 12:1-2"} 
               ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom 1:1-999"} ]
        , mp2: [ {style: "req", read: "matthew 5:1-16"} ]
        , ep1: [ {style: "req", read: "wisdom 2:1-999"} ]
        , ep2: [ {style: "req", read: "revelation 1:1-999"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom 3:1-9"} ]
        , mp2: [ {style: "req", read: "matthew 5:17-999"} ]
        , ep1: [ {style: "req", read: "wisdom 4:7-999"} ]
        , ep2: [ {style: "req", read: "revelation 2:1-17"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom 5:1-16"} ]
        , mp2: [ {style: "req", read: "matthew 6:1-18"} ]
        , ep1: [ {style: "req", read: "wisdom 6:1-21"} ]
        , ep2: [ {style: "req", read: "revelation 2:18-999"}
               , {style: "req", read: "revelation 3:1-6"} 
               ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom 7:15-999"}
               , {style: "req", read: "wisdom 8:1-4"} 
               ]
        , mp2: [ {style: "req", read: "matthew 6:19-999"} ]
        , ep1: [ {style: "req", read: "wisdom 8:5-18"} ]
        , ep2: [ {style: "req", read: "revelation 3:7-999"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "wisdom 8:21-999"}
               , {style: "req", read: "wisdom 9:1-999"} 
               ]
        , mp2: [ {style: "req", read: "matthew 7:1-14"} ]
        , ep1: [ {style: "req", read: "wisdom 10:15-999"}
               , {style: "req", read: "wisdom 11:1-10"} 
               ]
        , ep2: [ {style: "req", read: "revelation 4:1-999"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "wisdom 11:21-999"}
                 , {style: "req", read: "wisdom 12:1-2"} 
                 ]
          , mp2: [ {style: "req", read: "matthew 7:15-999"} ]
          , ep1: [ {style: "req", read: "wisdom 12:12-21"} ]
          , ep2: [ {style: "req", read: "revelation 5:1-999"} ]
        } // end of proper 29
      } // end of propers
    }
  }
} // end of mpep
};