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
    case 'lent': return 'LentVenite'; break;
    case 'easterDay':
      if (week === 1) {return 'PaschaNostrum'}
    case 'easter': return oneOf(['Veniter', 'Jubilate', 'PaschaNostrum'])
    default: return oneOf(['Veniter', 'Jubilate'])
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
        , ref: "Luke 2:10-11"
        }
      ]
    , epiphany:   
      [ { vss: "For from the rising of the sun to its setting my name will be great among the nations, and in every place incense will be offered to my name, and a pure offering. For my name will be great among the nations, says the Lord of hosts."
        , ref: "Malachi 1:11"
        }
      ]
    , lent:
      [ { vss: "Repent, for the kingdom of heaven is at hand."
        , ref: "Matthew 3:2"
        }
      ]
    , goodFriday: 
      [ { vee:  "Is it nothing to you, all you who pass by? Look and see if there is any sorrow like my sorrow, which was brought upon me, which the Lord inflicted on the day of his fierce anger."
        , ref: "Lamentations 1:12"
        }
      ]
    , easter:     
      [ { vss: "Christ is risen! The Lord is risen indeed!"
        , ref: "Mark 16:6 and Luke 24:34"
        }
      ]
    , ascension:  
      [ { vss: "Since then we have a great high priest who has passed through the heavens, Jesus, the Son of God, let us hold fast our confession. Let us then with confidence draw near to the throne of grace, that we may receive mercy and find grace to help in time of need."
        , ref: "Hebrews 4:14, 16"
        }
      ]
    , pentecost:  
      [ { vss: "You will receive power when the Holy Spirit has come upon you, and you will be my witnesses in Jerusalem and in all Judea and Samaria, and to the end of the earth."
        , ref: "Acts 1:8"
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
          , ref: "John 4:23"
        }
        , { vss: "Grace to you and peace from God our Father and the Lord Jesus Christ."
          , ref: "Philippians 1:2"
        }   
      ]
    }
  , ep_opening:
    { advent: 
      [ { vss:  `Therefore stay awake – for you do not know when the master of the
                house will come, in the evening, or at midnight, or when the cock
                crows, or in the morning – lest he come suddenly and find you asleep.`
        , ref: "Mark 13:35-36"
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
                 and to cleanse us from all unrighteousness.`
        , ref: "1 John 1:8-9"
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
              [ { style: "req", read: "Isa 1:1-20"}
              , { style: "opt", read: "Isa 1:21-31"}
              ]
          , mp2: [ { style: "req", read: "Matt 24:1-28"} ]
          , ep1: 
              [ { style: "opt", read: "Isa 2:1-9"}
              , { style: "req", read: "Isa 2:10-end"}
              ]
          , ep2: [ { style: "req", read: "John 3:1-21"} ]
        }
      , Monday:
        { title: "Monday"
          , colors: ["violet", "blue"]
          , mp1: 
              [ { style: "req", read: "Isa 3:1-15"}
              , {style: "opt", read: "Isa 3:16-26"}
              ]
          , mp2: [ { style: "req", read: "Mark 1:1-20"} ]
          , ep1: [ { style: "req", read: "Isa 4"} ]
          , ep2: [ {style: "req", read: "Rev 6"} ]
        }
        , Tuesday:
        { title: "Tuesday"
          , colors:  ["violet", "blue" ]
          , mp1: [ {style: "req", read: "Isa 6"} ]
          , mp2: [ {style: "req", read: "Mark 1:21-end"} ]
          , ep1: [ {style: "req", read: "Isa 8:16-9:7"} ]
          , ep2: [ {style: "req", read: "Rev 7"} ]
        }
        , Wednesday:
        { title: "Wednesday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "Isa 9:8-10:4"} ]
          , mp2: [ {style: "req", read: "Mark 2:1-22"} ]
          , ep1: [ {style: "req", read: "Isa 10:5-23"} ]
          , ep2: [ {style: "req", read: "Rev 8"} ]
        }
        , Thursday:
        { title: "Thursday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "Isa 10:24-34"}
                  ,{style: "opt", read: "Isa 11:1-10"} 
                  ]
          , mp2: [ {style: "req", read: "Mark 2:23-3:12"} ]
          , ep1: [ {style: "req", read: "Isa 13:1-14:2"} ]
          , ep2: [ {style: "req", read: "Rev 9"} ]
        }
      , Friday:
        { title: "Friday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "Isa 14:3-27"}
                 , {style: "opt", read: "Isa 14:28-end, 15:1-9"} 
                 ]
          , mp2: [ {style: "req", read: "Mark 3:13-end"} ]
          , ep1: [ {style: "opt", read: "Isa 16"}
                 , {style: "req", read: "Isa 17"} 
                 ]
          , ep2: [ {style: "req", read: "Rev 10"} ]
        }
      , Saturday:
          {  title: "Saturday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "Isa 18"} ]
          , mp2: [ {style: "req", read: "Mark 4:1-20"} ]
          , ep1: [ {style: "req", read: "Isa 19:1-17"} ]
          , ep2: [ {style: "req", read: "Rev 11"} ]
        }
        }
      , 2:
        { Sunday:
        { title: "Second Sunday in Advent"
          , colors: ["violet", "blue"]
          , mp1: [ { style: "req", read: "Isa 5:1-16"} ]
          , mp2: [ { style: "req", read: "Matt 24:29-end"} ]
          , ep1: [ { style: "opt", read: "Isa 5:17-30"}
                 , {style: "req", read: "Isa 18-end"}
                 ]
          , ep2: [ { style: "req", read: "Luke 1:1-25"} ]
        }
      , Monday:
        { title: "Monday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "Isa 19:18-end"}
                 , {style: "opt", read: "Isa 20"} 
                 ]
          , mp2: [ {style: "req", read: "Mark 4:21-end"} ]
          , ep1: [ {style: "req", read: "Isa 21:1-12"}
                 , {style: "opt", read: "Isa 21:13-17"}
                 ]
          , ep2: [ {style: "req", read: "Rev 12"} ]
        }
        , Tuesday:
        { title: "Tuesday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "Isa 22:1-14"}
                 , {style: "opt", read: "Isa 22:15-25"} 
                 ]
          , mp2: [ {style: "req", read: "Mark 5:1-20"} ]
          , ep1: [ {style: "opt", read: "Isa 23"}
                 , {style: "req", read: "Isa 24"} 
                 ]
          , ep2: [ {style: "req", read: "Rev 13" } ]
        }
        , Wednesday:  
        { title: "Wednesday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "opt", read: "Isa 27"}
                 , {style: "req", read: "Isa 28:1-8"}
                 , {style: "opt", read: "Isa 21:9-end"} 
                 ]
          , mp2: [ {style: "req", read: "Mark 5:21-end"} ]
          , ep1: [ {style: "req", read: "Isa 29:1-14"} ]
          , ep2: [ {style: "req", read: "Rev 14"} ]
        }
        , Thursday:
        { title: "Thursday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "Isa 29:15-end, 30:1-18"}
                 , {style: "opt", read: "Isa 30:19-end, 31:1-9"} 
                 ]
          , mp2: [ {style: "req", read: "Mark 6:1-13"} ]
          , ep1: [ {style: "req", read: "Isa 32"}
                 , {style: "opt", read: "Isa 33"} 
                 ]
          , ep2: [ {style: "req", read: "Rev 15"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["violet", "blue"]
        , mp1: [ {style: "req", read: "Isa 34"}
               , {style: "opt", read: "Isa 36"} 
               ]
        , mp2: [ {style: "req", read: "Mark 6:14-29"} ]
        , ep1: [ {style: "opt", read: "Isa 37"}
               , {style: "req", read: "Isa 38"} 
               ]
        , ep2: [ {style: "req", read: "Rev 16"} ]
          }
      , Saturday:
        { title: "Saturday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "opt", read: "Isa 39"}
                 , {style: "req", read: "Isa 40:12-end"} 
                 ]
          , mp2: [ {style: "req", read: "Mark 6:30-end"} ]
          , ep1: [ {style: "req", read: "Isa 41"} ]
        , ep2: [ {style: "req", read: "Rev 17"} ]
          }
        }
        , 3:
      { Sunday:
        { title: "Third Sunday in Advent"
        , colors: ["rose", "violet", "blue"]
        , mp1: [ {style: "req", read: "Isa 25:1-9"}
               , {style: "opt", read: "Isa 25:10-12"} 
               ]
        , mp2: [ {style: "req", read: "Matt 25:1-30"} ]
        , ep1: [ {style: "req", read: "Isa 26:1-13"}
               , {style: "opt", read: "Isa 26:14-end"} 
               ]
        , ep2: [ {style: "req", read: "Matt 3"} ]
          }
      , Monday:
        { title: "Monday"
        , colors: ["rose", "violet", "blue"]
        , mp1: [ {style: "req", read: "Isa 42:1-17"} ]
        , mp2: [ {style: "req", read: "Mark 7:1-23"} ]
        , ep1: [ {style: "req", read: "Isa 42:18-end, 43:1-13"} ]
        , ep2: [ {style: "req", read: "Rev 18"} ]
          }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["rose", "violet", "blue"]
        , mp1: [ {style: "req", read: "Isa 43:14-end, 44:1-5"} ]
        , mp2: [ {style: "req", read: "Mark 7:24-end, 8:1-10"} ]
        , ep1: [ {style: "req", read: "Isa 44:6-23"} ]
        , ep2: [ {style: "req", read: "Rev 19"} ]
          }
          , Wednesday:  
        { title: "Wednesday Ember Day"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Isa 44:24-end, 45:1-13"} ]
        , mp2: [ {style: "req", read: "Mark 8:11-end, 9:1"} ]
        , ep1: [ {style: "req", read: "Isa 45:14-end"} ]
        , ep2: [ {style: "req", read: "Rev 20"} ]
          }
        , Thursday:
        { title: "Thursday"
          , colors: ["rose", "violet", "blue"]
          , mp1: [ {style: "req", read: "Isa 46"} ]
          , mp2: [ {style: "req", read: "Mark 9:2-32"} ]
          , ep1: [ {style: "req", read: "Isa 47"} ]
          , ep2: [ {style: "req", read: "Rev 21:1-14"} ]
        }
      , Friday:
        { title: "Friday Ember Day"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "Isa 48"} ]
          , mp2: [ {style: "req", read: "Mark 9:33-end"} ]
          , ep1: [ {style: "req", read: "Isa 49:1-13"} ]
          , ep2: [ {style: "req", read: "Rev 21:15-22:5"} ]
        }
      , Saturday:
        { title: "Saturday Ember Day"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "Isa 49:14-end"} ]
          , mp2: [ {style: "req", read: "Mark 10:1-31"} ]
          , ep1: [ {style: "req", read: "Isa 50"} ]
          , ep2: [ {style: "req", read: "Rev 22:6-end"} ]
        }
        }
      , 4:
        { Sunday:
        { title: "Fourth Sunday in Advent"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "Isa 35"} ]
          , mp2: [ {style: "req", read: "Matt 25:31-end"} ]
          , ep1: [ {style: "req", read: "Isa 40:1-11"} ]
          , ep2: [ {style: "req", read: "Luke 1:26-45"} ]
        }
      , Monday:
        { title: "Monday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "Isa 51:1-16"} ]
          , mp2: [ {style: "req", read: "Mark 10:32-end"} ]
          , ep1: [ {style: "req", read: "Isa 51:17-end, 52:1-12"} ]
          , ep2: [ {style: "req", read: "Jude 1-16"} ]
        }
        , Tuesday:
        { title: "Tuesday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "Isa 52:13-end, 53"} ]
          , mp2: [ {style: "req", read: "Mark 11:1-26"} ]
          , ep1: [ {style: "req", read: "Isa 54"} ]
          , ep2: [ {style: "req", read: "Jude 17-end"} ]
        }
        , Wednesday:  
        { title: "Wednesday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "Isa 56:1-8"}
                 , {style: "opt", read: "Isa 56:9-12"} 
                 ]
          , mp2: [ {style: "req", read: "Mark 11:27-end, 12:1-12"} ]
          , ep1: [ {style: "opt", read: "Isa 57:1-14"}
                 , {style: "req", read: "Isa 57:15-end"} 
                 ]
          , ep2: [ {style: "req", read: "2 Pet 1"} ]
        }
        , Thursday:
        { title: "Thursday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "Isa 59"} ]
          , mp2: [ {style: "req", read: "Mark 12:13-34"} ]
          , ep1: [ {style: "req", read: "Isa 60:1-7"} ]
          , ep2: [ {style: "req", read: "2 Pet 2"} ]
        }
      , Friday:
        { title: "Friday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "Isa 60:8-end"} ]
          , mp2: [ {style: "req", read: "Mark 12:35-end, 13:1-13"} ]
          , ep1: [ {style: "req", read: "Isa 61"} ]
          , ep2: [ {style: "req", read: "2 Pet 3"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "Isa 62"} ]
          , mp2: [ {style: "req", read: "Mark 13:14-end"} ]
          , ep1: [ {style: "req", read: "Zech 2:10-end"} ]
          , ep2: [ {style: "req", read: "Heb 2:10-18"} ]
        }
        }
        } // end of advent
    , christmas:
      { 1:
        { christmasEve:
        { title: "Christmas Eve"
          , colors: ["violet", "blue"]
          , mp1: [ {style: "req", read: "Isa 62"} ]
          , mp2: [ {style: "req", read: "Mark 13:14-end"} ]
          , ep1: [ {style: "req", read: "Zech 2:10-end"} ]
          , ep2: [ {style: "req", read: "Heb 2:10-18"} ]
        }
        , christmasDay:
        { title: "Christmas Day"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Isa 9:2-7"} ]
          , mp2: [ {style: "opt", read: "Matt 1:1-17"}
                 , {style: "req", read: "Matt 1:18-25"} 
                 ]
          , ep1: [ {style: "req", read: "Isa 7:10-14"}
                 , {style: "opt", read: "Isa 7:15-25"} 
                 ]
          , ep2: [ {style: "req", read: "1 John 4:7-end"} ]
        }
        , stStephen:
        { title: "St Stephen"
          , colors: ["red"]
          , mp1: [ {style: "req", read: "Gen 4:1-10"} ]
          , mp2: [ {style: "req", read: "Acts 6"} ]
          , ep1: [ {style: "req", read: "2 Chron 24:15-22"} ]
          , ep2: [ {style: "req", read: "Acts 7:59-8:8"} ]
        }
        , stJohn:
        { title: "St John Evangelist"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Exod 33:9-end"} ]
          , mp2: [ {style: "req", read: "John 13:21-35"} ]
          , ep1: [ {style: "req", read: "Isa 6:1-8"} ]
          , ep2: [ {style: "req", read: "1 John 5:1-12"} ]
        }
        , holyInnocents:
        { title: "Holy Innocents"
          , colors: ["red"]
          , mp1: [ {style: "req", read: "Baruch 4:21-27"} ]
          , mp2: [ {style: "req", read: "Rev 6:9-11"} ]
          , ep1: [ {style: "req", read: "Jer 31:1-17"} ]
          , ep2: [ {style: "req", read: "Matt 18:1-10"} ]
        }
        , Sunday:
        { title: "* First Sunday of Christmas"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Isa 41:8-20"} ]
          , mp2: [ {style: "req", read: "Col 1:1-20"} ]
          , ep1: [ {style: "req", read: "Isa 55"} ]
          , ep2: [ {style: "req", read: "Luke 2:22-40"} ]
        }
        , Dec29:
        { title: "December 29"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Ruth 1:1-18"} ]
          , mp2: [ {style: "req", read: "John 1:14-18"} ]
          , ep1: [ {style: "req", read: "Ruth 1:19-2:13"} ]
          , ep2: [ {style: "req", read: "Matt 11:2-6"} ]
        }
        , Dec30:
        { title: "December 30"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Ruth 2:14-end"} ]
          , mp2: [ {style: "req", read: "John 3:16-21"} ]
          , ep1: [ {style: "req", read: "Ruth 3"} ]
          , ep2: [ {style: "req", read: "Matt 16:13-20"} ]
        }
        , Dec31:
        { title: "December 31"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Ruth 4:1-17"}
                 , {style: "opt", read: "Ruth 4:18-21"} 
                 ]
          , mp2: [ {style: "req", read: "John 6:41-58"} ]
          , ep1: [ {style: "req", read: "Mic 4:8-5:4"} ]
          , ep2: [ {style: "req", read: "Luke 22:24-30"} ]
        }
        , octaveChristmas:
        { title: "Octave Day of Christmas"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Gen 17:1-13"} ]
          , mp2: [ {style: "req", read: "Rom 2:17-end"} ]
          , ep1: [ {style: "req", read: "Deut 30"} ]
          , ep2: [ {style: "req", read: "Col 2:8-15"} ]
        }
        }
      , 2:
        { Sunday:
        { title: "Second Sunday of Christmas"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Isa 41:21-end"} ]
          , mp2: [ {style: "req", read: "1 John 1:1-2:6"} ]
          , ep1: [ {style: "req", read: "Isa 55"} ]
          , ep2: [ {style: "req", read: "Luke 2:22-40"} ]
        }
        , Jan02:
        { title: "January 2"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Isa 63:1-6"} ]
          , mp2: [ {style: "req", read: "Matt 1:18-end"} ]
          , ep1: [ {style: "req", read: "Isa 63:7-end"} ]
          , ep2: [ {style: "req", read: "1 Thess 1"} ]
        }
        , Jan03:
        { title: "January 3"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Isa 64"} ]
          , mp2: [ {style: "req", read: "Matt 2:19-end"} ]
          , ep1: [ {style: "req", read: "Isa 65:1-16"} ]
          , ep2: [ {style: "req", read: "1 Thess 2:1-16"} ]
        }
        , Jan04:
        { title: "January 4"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Isa 65:17-end"} ]
          , mp2: [ {style: "req", read: "Matt 3:1-4:11"} ]
          , ep1: [ {style: "req", read: "Isa 66:1-9"} ]
          , ep2: [ {style: "req", read: "1 Thess 2:17-end, 3"} ]
        }
        , Jan05:
        { title: "January 5"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Isa 66:10-end"} ]
          , mp2: [ {style: "req", read: "Matt 4:12-5:16"} ]
          , ep1: [ {style: "req", read: "Isa 60:1-7"} ]
          , ep2: [ {style: "req", read: "Rom 15:8-21"} ]
        }
        }
      } // end of Christmas
    , epiphany:
      { 0:
        { Epiphany:
        { title: "Epiphany"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Isa 49:1-13"} ]
          , mp2: [ {style: "req", read: "Luke 3:15-22"}
                 , {style: "opt", read: "Luke 3:23-28"} 
                 ]
          , ep1: [ {style: "req", read: "Isa 60:9-end"} ]
          , ep2: [ {style: "req", read: "John 2:1-11"} ]
        }
      , Monday:
        { title: "Monday"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Amos 1"} ]
          , mp2: [ {style: "req", read: "Matt 5:17-end"} ]
          , ep1: [ {style: "req", read: "Amos 2"} ]
          , ep2: [ {style: "req", read: "1 Thess 4:1-12"} ]
        }
        , Tuesday:
        { title: "Tuesday"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Amos 3"} ]
          , mp2: [ {style: "req", read: "Matt 6:1-18"} ]
          , ep1: [ {style: "req", read: "Amos 4"} ]
          , ep2: [ {style: "req", read: "1 Thess 4:13-5:11"} ]
        }
        , Wednesday: 
        { title: "Wednesday"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Amos 5"} ]
          , mp2: [ {style: "req", read: "Matt 6:19-end"} ]
          , ep1: [ {style: "req", read: "Amos 6"} ]
          , ep2: [ {style: "req", read: "1 Thess 5:12-end"} ]
        }
        , Thursday:
        { title: "Thursday"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Amos 7"} ]
          , mp2: [ {style: "req", read: "Matt 7"} ]
          , ep1: [ {style: "req", read: "Amos 8"} ]
          , ep2: [ {style: "req", read: "2 Thess 1"} ]
        }
      , Friday:
        { Title: "Friday"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Amos 9"} ]
          , mp2: [ {style: "req", read: "Matt 8:1-17"} ]
          , ep1: [ {style: "req", read: "Mic 1"} ]
          , ep2: [ {style: "req", read: "2 Thess 2"}]
        }
      , Saturday:
        { Title: "Saturday"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Mic 2"} ]
          , mp2: [ {style: "req", read: "Matt 8:18-end"} ]
          , ep1: [ {style: "req", read: "Mic 3"} ]
          , ep2: [ {style: "req", read: "2 Thess 3"} ]
        }
      }
    , 1:
      { Sunday:
        { title: "First Sunday of Epiphany"
          , colors: ["white", "gold"]
          , mp1: [ {style: "req", read: "Isa 42:1-12"} ]
          , mp2: [ {style: "req", read: "John 4:1-26"}
                 , {style: "opt", read: "John 4:27-42"} 
                 ]
          , ep1: [ {style: "req", read: "Isa 61"} ]
          , ep2: [ {style: "req", read: "Matt 2"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["white", "gold"]
        , mp1: [ {style: "req", read: "Mic 4:1-5:1"} ]
        , mp2: [ {style: "req", read: "Matt 9:1-17"} ]
        , ep1: [ {style: "req", read: "Mic 5:2-end"} ]
        , ep2: [ {style: "req", read: "Gal 1"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["white", "gold"]
        , mp1: [ {style: "req", read: "Mic 6"} ]
        , mp2: [ {style: "req", read: "Matt 9:18-34"} ]
        , ep1: [ {style: "req", read: "Mic 7"} ]
        , ep2: [ {style: "req", read: "Gal 2"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["white", "gold"]
        , mp1: [ {style: "req", read: "Hos 1"} ]
        , mp2: [ {style: "req", read: "Matt 9:35-10:13"} ]
        , ep1: [ {style: "req", read: "Hos 2:1-13"} ]
        , ep2: [ {style: "req", read: "Gal 3"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["white", "gold"]
        , mp1: [ {style: "req", read: "Hos 2:14-end, 3"} ]
        , mp2: [ {style: "req", read: "Matt 10:24-end"} ]
        , ep1: [ {style: "req", read: "Hos 4:1-11"}
               , {style: "opt", read: "Hos 4:12-19"} 
               ]
        , ep2: [ {style: "req", read: "Gal 4:1-5:1"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["white", "gold"]
        , mp1: [ {style: "opt", read: "Hos 5:1-7"}
               , {style: "req", read: "Hos 5:8-6:6"}
               , {style: "opt", read: "Hos 6:7-11"} 
               ]
        , mp2: [ {style: "req", read: "Matt 11"} ]
        , ep1: [ {style: "opt", read: "Hos 7"}
               , {style: "req", read: "Hos 8"} 
               ]
        , ep2: [ {style: "req", read: "Gal 5:2-end"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["white", "gold"]
        , mp1: [ {style: "req", read: "Hos 9"} ]
        , mp2: [ {style: "req", read: "Matt 12:1-21"} ]
        , ep1: [ {style: "req", read: "Hos 10"} ]
        , ep2: [ {style: "req", read: "Gal 6"} ]
        }
      }
    , 2:
      { Sunday:
        { title: "Second Sunday of Epiphany"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "Amos 3"} ]
          , mp2: [ {style: "req", read: "John 6:22-40"} ]
          , ep1: [ {style: "req", read: "Isa 44:6-23"} ]
          , ep2: [ {style: "req", read: "Mark 1:35-end"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Hos 11"} ]
        , mp2: [ {style: "req", read: "Matt 12:22-end"} ]
        , ep1: [ {style: "req", read: "Hos 12"} ]
        , ep2: [ {style: "req", read: "1 Cor 1:1-25"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Hos 13:1-14"}
               , {style: "opt", read: "Hos 13:15-16"} 
               ]
        , mp2: [ {style: "req", read: "Matt 13:1-23"} ]
        , ep1: [ {style: "req", read: "Hos 14"} ]
        , ep2: [ {style: "req", read: "1 Cor 1:26-end, 2"} ]
        }
      , Wednesday: 
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Zeph 1"} ]
        , mp2: [ {style: "req", read: "Matt 13:24-43"} ]
        , ep1: [ {style: "req", read: "Zeph 2"} ]
        , ep2: [ {style: "req", read: "1 Cor 3"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Zeph 3"} ]
        , mp2: [ {style: "req", read: "Matt 13:44-end"} ]
        , ep1: [ {style: "req", read: "Nahum 1"} ]
        , ep2: [ {style: "req", read: "1 Cor 4:1-17"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Nahum 2"} ]
        , mp2: [ {style: "req", read: "Matt 14"} ]
        , ep1: [ {style: "req", read: "Nahum 3"} ]
        , ep2: [ {style: "req", read: "1 Cor 4:18-end, 5"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Hab 1"} ]
        , mp2: [ {style: "req", read: "Matt 15:1-28"} ]
        , ep1: [ {style: "req", read: "Hab 2"} ]
        , ep2: [ {style: "req", read: "1 Cor 6"} ]
        }
      }
    , 3:
      { Sunday:
        { title: "Third Sunday of Epiphany"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Amos 5:6-24"} ]
        , mp2: [ {style: "req", read: "John 6:41-end"} ]
        , ep1: [ {style: "req", read: "Isa 46:3-end"} ]
        , ep2: [ {style: "req", read: "Mark 7:24-end"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Hab 3"} ]
        , mp2: [ {style: "req", read: "1 Cor 7"} ]
        , ep1: [ {style: "req", read: "Mal 1"} ]
        , ep2: [ {style: "req", read: "1 Cor 8"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Mal 2:1-16"} ]
        , mp2: [ {style: "req", read: "1 Cor 9"} ]
        , ep1: [ {style: "req", read: "Mal 2:17-3:12"} ]
        , ep2: [ {style: "req", read: "1 Cor 10:1-11:1"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Mal 3:13-end, 4"} ]
        , mp2: [ {style: "req", read: "1 Cor 11:2-end"} ]
        , ep1: [ {style: "req", read: "Obadiah"} ]
        , ep2: [ {style: "req", read: "1 Cor 12:1-27"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Joel 1"} ]
        , mp2: [ {style: "req", read: "1 Cor 12:27-end, 13"} ]
        , ep1: [ {style: "req", read: "Joel 2:1-14"} ]
        , ep2: [ {style: "req", read: "1 Cor 14:1-19"} ]
        }
      , Friday:
        { title: "Friday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "Joel 2:15-end"} ]
          , mp2: [ {style: "req", read: "1 Cor 14:20-end"} ]
          , ep1: [ {style: "req", read: "Joel 3"} ]
          , ep2: [ {style: "req", read: "1 Cor 15:1-34"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "Jonah 1,2"} ]
          , mp2: [ {style: "req", read: "1 Cor 15:35-end"} ]
          , ep1: [ {style: "req", read: "Jonah 3,4"} ]
          , ep2: [ {style: "req", read: "1 Cor 16"} ]
        }
        }
    , 4:
      { Sunday:
        { title: "Fourth Sunday of Epiphany"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Amos 7"} ]
        , mp2: [ {style: "req", read: "John 7:53-8:11"} ]
        , ep1: [ {style: "req", read: "Isa 54:1-14"} ]
        , ep2: [ {style: "req", read: "Luke 13:1-17"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "Jer 1:1-10"}
               , {style: "req", read: "Jer 1:11-end"} 
               ]
        , mp2: [ {style: "req", read: "2 Cor 1:1-2:11"} ]
        , ep1: [ {style: "req", read: "Jer 2:1-13"}
               , {style: "opt", read: "Jer 2:14-3:25"} 
               ]
        , ep2: [ {style: "req", read: "2 Cor 2 12-end, 3"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Jer 4:1-18"}
               , {style: "opt", read: "Jer 4:19-31"} 
               ]
        , mp2: [ {style: "req", read: "2 Cor 4"} ]
        , ep1: [ {style: "req", read: "Jer 5:1-19"} ]
        , ep2: [ {style: "req", read: "2 Cor 5"} ]
        }
      , Wednesday: 
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Jer 5:20-end"} ]
        , mp2: [ {style: "req", read: "2 Cor 5:20-end, 6:1-end, 7:1"} ]
        , ep1: [ {style: "req", read: "Jer 6:1-21"}
               , {style: "opt", read: "Jer 6:22-30"} 
               ]
        , ep2: [ {style: "req", read: "2 Cor 7:2-end"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Jer 7:1-28"}
               , {style: "opt", read: "Jer 7:29-34"} 
               ]
        , mp2: [ {style: "req", read: "2 Cor 8"} ]
        , ep1: [ {style: "req", read: "Jer 8"} ]
        , ep2: [ {style: "req", read: "2 Cor 9"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Jer 9:1-24"}
               , {style: "opt", read: "Jer 9:25-10:25"} 
               ]
        , mp2: [ {style: "req", read: "2 Cor 10"} ]
        , ep1: [ {style: "req", read: "Jer 11"}
               , {style: "opt", read: "Jer 12"} 
               ]
        , ep2: [ {style: "req", read: "2 Cor 11"} ]
        }
      , Saturday:
        { title: "Saturday"
        ,    colors: ["green"]
        ,    mp1: [ {style: "opt", read: "Jer 13"}
               , {style: "req", read: "Jer 14"} 
               ]
        ,    mp2: [ {style: "req", read: "2 Cor 12:1-13"} ]
        ,    ep1: [ {style: "req", read: "Jer 15"}
               , {style: "opt", read: "Jer 16"} 
               ]
        ,    ep2: [ {style: "req", read: "2 Cor 12:14-end, 13"} ]
        }
      }
    , 5:
      { Sunday:
        { title: "Fifth Sunday of Epiphany"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "Amos 8:4-end"} ]
          , mp2: [ {style: "req", read: "John 7:14-36"} ]
          , ep1: [ {style: "req", read: "Isa 60"} ]
          , ep2: [ {style: "req", read: "Mark 2:1-12"} ]
        }
      , Monday:
        { title: "Monday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "Jer 17:1-18"} ]
          , mp2: [ {style: "req", read: "Acts 15:1-29"} ]
          , ep1: [ {style: "req", read: "Jer 17:19-end"} ]
          , ep2: [ {style: "req", read: "Acts 15:30-16:5"} ]
        }
        , Tuesday:
        { title: "Tuesday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "Jer 18:1-17"}, {style: "opt", read: "Jer 18:18-23"} ]
          , mp2: [ {style: "req", read: "Acts 16:6-end"} ]
          , ep1: [ {style: "req", read: "Jer 20"} ]
          , ep2: [ {style: "req", read: "Acts 17:1-15"} ]
        }
      , Wednesday: 
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Jer 23:9-32"}
               , {style: "opt", read: "Jer 23:33-40"} 
               ]
        , mp2: [ {style: "req", read: "Acts 17:16-end"} ]
        , ep1: [ {style: "req", read: "Jer 30:1-22"}
                 , {style: "opt", read: "Jer 30:23-24"} 
                 ]
        , ep2: [ {style: "req", read: "Acts 18:1-23"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Jer 31:1-20"}
               , {style: "opt", read: "Jer 31:21-22"} 
               ]
        , mp2: [ {style: "req", read: "Acts 18:24-19:7"} ]
        , ep1: [ {style: "req", read: "Jer 31:23-end"} ]
        , ep2: [ {style: "req", read: "Acts 19:8-20"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Jer 33:1-13"} ]
        , mp2: [ {style: "req", read: "Acts 19:21-end"} ]
        , ep1: [ {style: "req", read: "Jer 33:14-end"} ]
        , ep2: [ {style: "req", read: "Acts 20:1-16"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Jer 35:1-11"} ]
        , mp2: [ {style: "req", read: "Acts 20:17-end"} ]
        , ep1: [ {style: "req", read: "Jer 35:12-end"} ]
        , ep2: [ {style: "req", read: "Acts 21:1-16"} ]
        }
      }
    , 6:
      { Sunday:
        { title: "Sixth Sunday of Epiphany"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Amos 9:5-end"} ]
        , mp2: [ {style: "req", read: "John 7:37-52"} ]
        , ep1: [ {style: "req", read: "Isa 64"} ]
        , ep2: [ {style: "req", read: "Luke 7:1-10"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Tobit 4:5-19"} ]
        , mp2: [ {style: "req", read: "Acts 21:17-36"} ]
        , ep1: [ {style: "req", read: "Tobit 13"} ]
        , ep2: [ {style: "req", read: "Acts 21:37-22:12"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Baruch 1:15-2:10"} ]
        , mp2: [ {style: "req", read: "Acts 22:23-23:11"} ]
        , ep1: [ {style: "req", read: "Baruch 2:11-end"} ]
        , ep2: [ {style: "req", read: "Acts 23:12-end"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Baruch 3:1-9"} ]
        , mp2: [ {style: "req", read: "Acts 24:1-23"} ]
        , ep1: [ {style: "req", read: "Baruch 3:9-end"} ]
        , ep2: [ {style: "req", read: "Acts 24:24-25:12"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Baruch 4:21-30"} ]
        , mp2: [ {style: "req", read: "Acts 25:13-end"} ]
        , ep1: [ {style: "req", read: "Baruch 4:36-end, 5"} ]
        , ep2: [ {style: "req", read: "Acts 26"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Macc 4:7-17"} ]
        , mp2: [ {style: "req", read: "Acts 27:1-26"} ]
        , ep1: [ {style: "req", read: "2 Macc 6:12-end"} ]
        , ep2: [ {style: "req", read: "Acts 27:27-end"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Macc 7:1-19"} ]
        , mp2: [ {style: "req", read: "Acts 28:1-15"} ]
        , ep1: [ {style: "req", read: "2 Macc 7:20-41"} ]
        , ep2: [ {style: "req", read: "Acts 28:16-end"} ]
        }
      }
    , 7:
      { Sunday:
        { title: "Seventh Sunday of Epiphany"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 1:1-2:3"} ]
        , mp2: [ {style: "req", read: "John 1:1-18"} ]
        , ep1: [ {style: "req", read: "Gen 2:4-end"} ]
        , ep2: [ {style: "req", read: "Mark 10:1-16"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 3"} ]
        , mp2: [ {style: "req", read: "Matt 15:29-16:12"} ]
        , ep1: [ {style: "req", read: "Gen 4:1-16"} ]
        , ep2: [ {style: "req", read: "Rom 1"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 6"} ]
        , mp2: [ {style: "req", read: "Matt16:13-end"} ]
        , ep1: [ {style: "req", read: "Gen 7"} ]
        , ep2: [ {style: "req", read: "Rom 2"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 8:1-14"} ]
        , mp2: [ {style: "req", read: "Matt17:1-23"} ]
        , ep1: [ {style: "req", read: "Gen 8:15-9:17"}
               , {style: "opt", read: "Gen 9:18-29"} 
               ]
        , ep2: [ {style: "req", read: "Rom 3"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 11:1-9, 27-12:10"}
               , {style: "opt", read: "Gen 12:11-20"} 
               ]
        , mp2: [ {style: "req", read: "Matt17:14-18:14"} ]
        , ep1: [ {style: "req", read: "Gen 13"} ]
        , ep2: [ {style: "req", read: "Rom 4"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 14"} ]
        , mp2: [ {style: "req", read: "Matt18:15-end"} ]
        , ep1: [ {style: "req", read: "Gen 15"} ]
        , ep2: [ {style: "req", read: "Rom 5"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 16"} ]
        , mp2: [ {style: "req", read: "Matt19:1-15"} ]
        , ep1: [ {style: "req", read: "Gen 17:1-22"}
               , {style: "opt", read: "Gen 17:23-27"} 
                 ]
        , ep2: [ {style: "req", read: "Rom 6"} ]
        }
      }
    , 8:
      { Sunday:
        { title: "Eighth Sunday of Epiphany"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 3"} ]
        , mp2: [ {style: "req", read: "1 Cor 10:1-13"}
               , {style: "opt", read: "1 Cor 10:14-24"} 
               ]
        , ep1: [ {style: "req", read: "Gen 4:1-15"} ]
        , ep2: [ {style: "req", read: "Luke 10:25-37"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 18"} ]
        , mp2: [ {style: "req", read: "Matt 19:16-end, 20:1-16"} ]
        , ep1: [ {style: "req", read: "Gen 19:1-3, 12-29"} ]
        , ep2: [ {style: "req", read: "Rom 7"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 6"} ]
        , mp2: [ {style: "req", read: "Matt16:13-end"} ]
        , ep1: [ {style: "req", read: "Gen 7"} ]
        , ep2: [ {style: "req", read: "Rom 2"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 23"} ]
        , mp2: [ {style: "req", read: "Matt 21:1-22"} ]
        , ep1: [ {style: "req", read: "Gen 24:1-28"} ]
        , ep2: [ {style: "req", read: "Rom 8:18-end"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 24:29-end"} ]
        , mp2: [ {style: "req", read: "Matt 21:23-end"} ]
        , ep1: [ {style: "opt", read: "Gen 25:1-6"}
               , {style: "req", read: "Gen 25:7-11, 19-end"} 
                 ]
        , ep2: [ {style: "req", read: "Rom 9"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 26:1-5"}
               , {style: "opt", read: "Gen 26:6-11"
              }
               , {style: "req", read: "Gen 26:12-end"} 
               ]
        , mp2: [ {style: "req", read: "Matt 22:1-33"} ]
        , ep1: [ {style: "req", read: "Gen 27:1-40"} ]
        , ep2: [ {style: "req", read: "Rom 10"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 27:41-end, 28"} ]
        , mp2: [ {style: "req", read: "Matt22:14-23:12"} ]
        , ep1: [ {style: "req", read: "Gen 29:1-20"}
               , {style: "opt", read: "Gen 29:21-30:43"} 
               ]
        , ep2: [ {style: "req", read: "Rom 11"} ]
        }
      }
    , 9:
      { Sunday:
        { title: "The Last Sunday of Epiphany [Transfiguration]"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Gen 12:1-9"} ]
        , mp2: [ {style: "req", read: "1 Cor 12:5-end"} ]
        , ep1: [ {style: "req", read: "Gen 6:5-end"} ]
        , ep2: [ {style: "req", read: "Luke 17:20-end"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 31:1-21"} ]
        , mp2: [ {style: "req", read: "Matt 23:13-end"} ]
        , ep1: [ {style: "req", read: "Gen 31:22-32:2"} ]
        , ep2: [ {style: "req", read: "Rom 12"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 32:3-30"}
               ,  {style: "opt", read: "Gen 32:31-32"}
               ]
        , mp2: [ {style: "req", read: "Matt 24:1-28"} ]
        , ep1: [ {style: "req", read: "Gen 33"}
               , {style: "opt", read: "Gen 34"}
               ]
        , ep2: [ {style: "req", read: "Rom 13"} ]
        }
      , Wednesday:
        { title: "Ash Wednesday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Isa 57:15-end"} ]
        , mp2: [ {style: "req", read: "Mark 2:13-22"} ]
        , ep1: [ {style: "req", read: "Isa 58"} ]
        , ep2: [ {style: "req", read: "Heb 3:12-4:13"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Gen 35:1-20"}
               , {style: "opt", read: "Gen 35:21-29"} 
               ]
        , mp2: [ {style: "req", read: "Matt 24:29-end"} ]
        , ep1: [ {style: "req", read: "Gen 37"}
                 , {style: "opt", read: "Gen 38"} 
                 ]
        , ep2: [ {style: "req", read: "Rom 14"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Gen 39"} ]
        , mp2: [ {style: "req", read: "Matt 25:1-30"} ]
        , ep1: [ {style: "req", read: "Gen 40"} ]
        , ep2: [ {style: "req", read: "Rom 15"} ]
      }
      , Saturday:
        { title: "Saturday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Gen 41:1-40"} ]
        , mp2: [ {style: "req", read: "Matt 25:31-end"} ]
        , ep1: [ {style: "req", read: "Gen 41:41-end"} ]
        , ep2: [ {style: "req", read: "Rom 16"} ]
        }
      }
    }
    , lent:
      { 1:
        { Sunday:
        { title: "First Sunday in Lent"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "Gen 13"} ]
          , mp2: [ {style: "req", read: "Matt 9:1-17"} ]
          , ep1: [ {style: "req", read: "Gen 8"} ]
          , ep2: [ {style: "req", read: "Mark 14:1-26"} ]
        }
      , Monday:
        { title: "Monday"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "Gen 42"} ]
          , mp2: [ {style: "req", read: "Matt 26:1-30"} ]
          , ep1: [ {style: "req", read: "Gen 43"} ]
          , ep2: [ {style: "req", read: "Phil 1"} ]
        }
        , Tuesday:
        { title: "Tuesday"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "Gen 44"} ]
          , mp2: [ {style: "req", read: "Matt 26:31-56"} ]
          , ep1: [ {style: "req", read: "Gen 45:1-15"} ]
          , ep2: [ {style: "req", read: "Phil 2"} ]
        }
        , Wednesday:  
        { title: "Wednesday Ember Day"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "Gen 45:16-46:7"} ]
          , mp2: [ {style: "req", read: "Matt 26:57-end"} ]
          , ep1: [ {style: "req", read: "Gen 46:26-47:12"} ]
          , ep2: [ {style: "req", read: "Phil 3"} ]
          }
        , Thursday:
        { title: "Thursday"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "Gen 47:13-end"} ]
          , mp2: [ {style: "req", read: "Matt 27:1-26"} ]
          , ep1: [ {style: "req", read: "Gen 48"} ]
          , ep2: [ {style: "req", read: "Phil 4"} ]
          }
      , Friday:
        { title: "Friday Ember Day"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "Gen 49:1-32"} ]
          , mp2: [ {style: "req", read: "Matt 27:27-56"} ]
          , ep1: [ {style: "req", read: "Gen 49:33-end, 50"} ]
          , ep2: [ {style: "req", read: "Col 1:1-20"} ]
          }
      , Saturday:
        { title: "Saturday Ember Day"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "Exod 1:1-14"}
               , {style: "opt", read: "Exod 1:15-21"
              }
               , {style: "req", read: "Exod 1:22-2:10"} 
                 ]
          ,   mp2: [ {style: "req", read: "Matt 27:57-end, 28"} ]
          ,   ep1: [ {style: "req", read: "Exod 2:11-22"} ]
          ,   ep2: [ {style: "req", read: "Col 1:21-2:7"} ]
          }
        }
    , 2:
      { Sunday:
        { title: "Second Sunday in Lent"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Gen 18:1-15"} ]
        , mp2: [ {style: "req", read: "Luke 15:11-end"} ]
        , ep1: [ {style: "req", read: "Gen 9:1-17"}
               , {style: "opt", read: "Gen 11:1-9"} 
               ]
        , ep2: [ {style: "req", read: "Mark 14:27-52"} ]
        }
      , Monday:
        { title: "Monday"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "Exod 2:23-end, 3"} ]
          , mp2: [ {style: "req", read: "John 1:1-28"} ]
          , ep1: [ {style: "req", read: "Exod 4:1-23"}
                 , {style: "opt", read: "Exod 4:24-26"} 
                 ]
          , ep2: [ {style: "req", read: "Col 2:8-3:11"} ]
        }
        , Tuesday:
        { title: "Tuesday"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "Exod 4:27-end, 5, 6:1"} ]
          , mp2: [ {style: "req", read: "John 1:29-end"} ]
          , ep1: [ {style: "req", read: "Exod 6:2-13"}
                 , {style: "opt", read: "Exod 6:14-30"}
                 , {style: "req", read: "Gen 7:1-7"}
                 ]
          , ep2: [ {style: "req", read: "Col 3:12-4:1"} ]
          }
        , Wednesday:
        { title: "Wednesday"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "Exod 7:8-end"} ]
          , mp2: [ {style: "req", read: "John 2"} ]
          , ep1: [ {style: "req", read: "Exod 8:1-19"} ]
          , ep2: [ {style: "req", read: "Col 4:2-end"} ]
          }
        , Thursday:
        { title: "Thursday"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "Exod 8:20-9:12"} ]
          , mp2: [ {style: "req", read: "John 3:1-21"} ]
          , ep1: [ {style: "req", read: "Exod 9:13-end"} ]
          , ep2: [ {style: "req", read: "Philemon"} ]
          }
      , Friday:
        { title: "Friday"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "Exod 10:1-20"} ]
          , mp2: [ {style: "req", read: "John 3:22-end"} ]
          , ep1: [ {style: "req", read: "Exod 10:21-end, 11"} ]
          , ep2: [ {style: "req", read: "Eph 1"} ]
          }
      , Saturday:
        { title: "Saturday"
          , colors: ["violet"]
          , mp1: [ {style: "req", read: "Exod 12:1-20"} ]
          , mp2: [ {style: "req", read: "John 4:1-26"} ]
          , ep1: [ {style: "req", read: "Exod 12:21-36"} ]
          , ep2: [ {style: "req", read: "Eph 2"} ]
          }
        }
    , 3:
      { Sunday:
        { title: "Third Sunday in Lent"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Gen 18:16-end"} ]
        , mp2: [ {style: "req", read: "Luke 18:1-14"} ]
        , ep1: [ {style: "req", read: "Gen 24:1-28"} ]
        , ep2: [ {style: "req", read: "Mark 14:53-end"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Exod 12:37-end"} ]
        , mp2: [ {style: "req", read: "John 4:27-end"} ]
        , ep1: [ {style: "req", read: "Exod 13:1-16"} ]
        , ep2: [ {style: "req", read: "Eph 3"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["violet"]
        ,   mp1: [ {style: "req", read: "Exod 13:17-14:14"} ]
        ,   mp2: [ {style: "req", read: "John 5:1-23"} ]
        , ep1: [ {style: "req", read: "Exod 14:15-end"} ]
        , ep2: [ {style: "req", read: "Eph 4:1-16"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Exod 15:1-26"} ]
        , mp2: [ {style: "req", read: "John 5:24-end"} ]
        , ep1: [ {style: "req", read: "Exod 15:27-16:16"} ]
        , ep2: [ {style: "req", read: "Eph 4:17-30"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Exod 17"} ]
        , mp2: [ {style: "req", read: "John 6:1-21"} ]
        , ep1: [ {style: "req", read: "Exod 18"} ]
        , ep2: [ {style: "req", read: "Eph 4:31-5:11"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Exod 19"} ]
        , mp2: [ {style: "req", read: "John 6:22-40"} ]
        , ep1: [ {style: "req", read: "Exod 20:1-21"}
               , {style: "opt", read: "Exod 20:22-21:36"} 
               ]
        , ep2: [ {style: "req", read: "Eph 5:22-6:9"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["violet"]
        , mp1: [ {style: "opt", read: "Exod 22:1-19"}
               , {style: "req", read: "Exod 22:20-23:17"} 
               ]
        , mp2: [ {style: "req", read: "John 6:41-end"} ]
        , ep1: [ {style: "opt", read: "Exod 23:1-17"}
               , {style: "req", read: "Exod 23:18-end"} 
               ]
        , ep2: [ {style: "req", read: "Eph 6:10-end"} ]
        }
      }
    , 4:
      { Sunday:
        { title: "Fourth Sunday in Lent"
        , colors: ["rose", "violet"]
        , mp1: [ {style: "req", read: "Exod 1:8-14, 22-end, 2:1-2:10"} ]
        , mp2: [ {style: "req", read: "Luke 18:35-19:10"} ]
        , ep1: [ {style: "req", read: "Gen 24:29-end"} ]
        , ep2: [ {style: "req", read: "Mark 15:1-21"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Exod 24"} ]
        , mp2: [ {style: "req", read: "John 7:1-24"} ]
        , ep1: [ {style: "req", read: "Exod 25:1-22"}
               , {style: "opt", read: "Exod 25:23-26:37"} 
               ]
        , ep2: [ {style: "req", read: "1 Tim 1:1-17"} ]
        }
      , Tuesday:
        { title: "Fourth Sunday in Lent"
        , colors: ["rose", "violet"]
        , mp1: [ {style: "req", read: "Exod 1:8-14, 22-end, 2:1-2:10"} ]
        , mp2: [ {style: "req", read: "Luke 18:35-19:10"} ]
        , ep1: [ {style: "req", read: "Gen 24:29-end"} ]
        , ep2: [ {style: "req", read: "Mark 15:1-21"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["violet"]
        , mp1: [ {style: "opt", read: "Exod 31"}
               , {style: "req", read: "Exod 32"} 
               ]
        , mp2: [ {style: "req", read: "John 8:1-30"} ]
        , ep1: [ {style: "req", read: "Exod 33, 34"} ]
        , ep2: [ {style: "req", read: "1 Tim 3"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Exod 35"}
               , {style: "opt", read: "Exod 36"} 
               ]
        , mp2: [ {style: "req", read: "John 8:31-end"} ]
        , ep1: [ {style: "opt", read: "Exod 37"}
               , {style: "req", read: "Exod 38"} 
               ]
        , ep2: [ {style: "req", read: "1 Tim 4"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["violet"]
        , mp1: [ {style: "opt", read: "Exod 39"}
               , {style: "opt", read: "Exod 40:1-16"
                  }
               , {style: "req", read: "Exod 40:17-end"} 
               ]
        , mp2: [ {style: "req", read: "John 9"} ]
        , ep1: [ {style: "req", read: "Lev 6:8-end"} ]
        , ep2: [ {style: "req", read: "1 Tim 5"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Lev 19:1-18, 30-end"} ]
        , mp2: [ {style: "req", read: "John 10:1-21"} ]
        , ep1: [ {style: "req", read: "Lev 25:1-24"} ]
        , ep2: [ {style: "req", read: "1 Tim 6"} ]
        }
      }
    , 5:
      { Sunday:
        { title: "Fifth Sunday in Lent [Passion]"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Exod 2:23-3:10"} ]
        , mp2: [ {style: "req", read: "Mark 10:32-45"} ]
        , ep1: [ {style: "req", read: "Exod 6:2-13"} ]
        , ep2: [ {style: "req", read: "Mark 15:22-39"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Num 6"} ]
        , mp2: [ {style: "req", read: "John 10:22-end"} ]
        , ep1: [ {style: "req", read: "Num 9:15-end, 10:19-end"} ]
        , ep2: [ {style: "req", read: "Titus 1:1-2:8"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Num 11:10-33"} ]
        , mp2: [ {style: "req", read: "John 11:1-44"} ]
        , ep1: [ {style: "req", read: "Num 12"} ]
        , ep2: [ {style: "req", read: "Titus 2:9-end, 3"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Num 13:1-3,17-end"} ]
        , mp2: [ {style: "req", read: "John 11:45-end"} ]
        , ep1: [ {style: "req", read: "Num 14:1-25"} ]
        , ep2: [ {style: "req", read: "2 Tim 1"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Num 16:1-35"} ]
        , mp2: [ {style: "req", read: "John 12:1-19"} ]
        , ep1: [ {style: "req", read: "Num 16:36-end, 17"} ]
        , ep2: [ {style: "req", read: "2 Tim 2"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Num 20"} ]
        , mp2: [ {style: "req", read: "John 12:20-end"} ]
        , ep1: [ {style: "req", read: "Num 22:1-35"} ]
        , ep2: [ {style: "req", read: "2 Tim 3"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Num 22:36-23:16"} ]
        , mp2: [ {style: "req", read: "John 13"} ]
        , ep1: [ {style: "req", read: "Num 23:27-end, 24"} ]
        , ep2: [ {style: "req", read: "2 Tim 4"} ]
        }
      }
    }
  , palmSunday:
    { 1:
      { Sunday:
        { title: "Palm Sunday"
        , colors: ["red"]
        , mp1: [ {style: "req", read: "Exod 11"} ]
        , mp2: [ {style: "req", read: "Matt 26"} ]
        , ep1: [ {style: "req", read: "Isa 52:13, 53:1-end"} ]
        , ep2: [ {style: "req", read: "Luke 19:29-end"} ]
        }
      , Monday:
        { title: "Monday in Holy Week"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Hos 13:1-14"} ]
        , mp2: [ {style: "req", read: "John 14:1-14"} ]
        , ep1: [ {style: "req", read: "Hos 14"} ]
        , ep2: [ {style: "req", read: "John 14:15-end"} ]
        }
      , Tuesday:
        { title: "Tuesday in Holy Week"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Isa 42:1-9"} ]
        , mp2: [ {style: "req", read: "John 15:1-16"} ]
        , ep1: [ {style: "req", read: "Wisd 2:1,12-end"} ]
        , ep2: [ {style: "req", read: "John 15:17-end"} ]
        }
      , Wednesday:
        { title: "Wednesday in Holy Week"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Num 21:4-9"} ]
        , mp2: [ {style: "req", read: "John 16:1-15"} ]
        , ep1: [ {style: "req", read: "Lev 16:2-24"} ]
        , ep2: [ {style: "req", read: "John 16:16-end"} ]
        }
      , Thursday:
        { title: "Maundy Thursday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Lam 1:1-14 "} ]
        , mp2: [ {style: "req", read: "John 17"} ]
        , ep1: [ {style: "req", read: "Lam 3:1-33 "} ]
        , ep2: [ {style: "req", read: "John 13:1-35"} ]
        }
      , Friday:
        { title: "Good Friday"
        , colors: ["red"]
        , mp1: [ {style: "req", read: "Gen 22:1-18"} ]
        , mp2: [ {style: "req", read: "John 18:1-32"} ]
        , ep1: [ {style: "req", read: "Isa 50:4-10"} ]
        , ep2: [ {style: "req", read: "John 19:38-end"} ]
        }
      , Saturday:
        { title: "Holy Saturday"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Zech 9:9-12"} ]
        , mp2: [ {style: "req", read: "1 Pet 2:11-end"} ]
        , ep1: [ {style: "req", read: "Job 19:21-27"} ]
        , ep2: [ {style: "req", read: "John 2:13-22"} ] 
        }
      }
    }
  , easterDay:
    { 1:
      { Sunday:
        { title: "Easter Day"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Exod 12:1-14"} ]
        , mp2: [ {style: "req", read: "Rev 1:4-18"} ]
        , ep1: [ {style: "req", read: "Exod 14:5-end"} ]
        , ep2: [ {style: "req", read: "John 20:11-23"} ]
        }
      , Monday:
        { title: "Monday of Easter Week"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Exod 15:1-18"} ]
        , mp2: [ {style: "req", read: "Luke 24:1-12"} ]
        , ep1: [ {style: "req", read: "Song of Solomon 1:1-2:7"} ]
        , ep2: [ {style: "req", read: "Rev 7:9-end"} ]
        }
      , Tuesday:
        { title: "Tuesday of Easter Week"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Isa 25:1-9"} ]
        , mp2: [ {style: "req", read: "1 Pet 1:1-12"} ]
        , ep1: [ {style: "req", read: "Song of Solomon 2:8-end"} ]
        , ep2: [ {style: "req", read: "Matt 28:1-10"} ]
        }
      , Wednesday:
        { title: "Wednesday of Easter Week"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Isa 61"} ]
        , mp2: [ {style: "req", read: "1 Pet 1:13-end"} ]
        , ep1: [ {style: "req", read: "Song of Solomon 3:1-4:16"} ]
        , ep2: [ {style: "req", read: "John 21:1-14"} ]
        }
      , Thursday:
        { title: "Thursday of Easter Week"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Job 14:1-15"} ]
        , mp2: [ {style: "req", read: "1 Thess 4:13-end"} ]
        , ep1: [ {style: "req", read: "Song of Solomon 4:16-end, 5"} ]
        , ep2: [ {style: "req", read: "Mark 5:21-end"} ]
        }
      , Friday:
        { title: "Friday of Easter Week"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Zeph 3:14-end"} ]
        , mp2: [ {style: "req", read: "Acts 17:16-31"} ]
        , ep1: [ {style: "req", read: "Song of Solomon 6:1-7:10"} ]
        , ep2: [ {style: "req", read: "Luke 7:11-17"} ]
        }
      , Saturday:
        { title: "Saturday of Easter Week"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Jer 31:1-14"} ]
        , mp2: [ {style: "req", read: "Acts 26:1-23"} ]
        , ep1: [ {style: "req", read: "Song of Solomon 7:11-end, 8"} ]
        , ep2: [ {style: "req", read: "John 11:17-44"} ]
        }
      }
    }
  , easter:
    { 2:
      { Sunday:
        { title: "Second Sunday of Easter"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Ezek 37:1-14"} ]
        , mp2: [ {style: "req", read: "Luke 24:13-35"} ]
        , ep1: [ {style: "req", read: "Exod 15:1-18"} ]
        , ep2: [ {style: "req", read: "John 20:24-end"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["white"]
        , mp1: [ {style: "opt", read: "Deut 1:1-2"}
               , {style: "req", read: "Deut 1:3-18"} 
               ]
        , mp2: [ {style: "req", read: "Acts 1:1-14"} ]
        , ep1: [ {style: "req", read: "Deut 1:19-end"} ]
        , ep2: [ {style: "req", read: "Acts 1:15-end"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Deut 2:1-25"} ]
        , mp2: [ {style: "req", read: "Acts 2:1-21"} ]
        , ep1: [ {style: "req", read: "Deut 2:26-3:5"} ]
        , ep2: [ {style: "req", read: "Acts 2:22-end"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["white"]
        , mp1: [ {style: "opt", read: "Deut 3:6-17"}
               , {style: "req", read: "Deut 3:18-end"} 
               ]
        , mp2: [ {style: "req", read: "Acts 3:1-4:4"} ]
        , ep1: [ {style: "req", read: "Deut 4:1-24"} ]
        , ep2: [ {style: "req", read: "Acts 4:5-31"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Deut 4:41-end"} ]
        , mp2: [ {style: "req", read: "Acts 4:32-5:11"} ]
        , ep1: [ {style: "req", read: "Deut 5:1-21"} ]
        , ep2: [ {style: "req", read: "Acts 5:12-end"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Deut 5:22-end"} ]
        , mp2: [ {style: "req", read: "Acts 6:1-7, 6:16"} ]
        , ep1: [ {style: "req", read: "Deut 6"} ]
        , ep2: [ {style: "req", read: "Acts 7:17-34"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Deut 7:1-11"} ]
        , mp2: [ {style: "req", read: "Acts 7:35-8:4"} ]
        , ep1: [ {style: "req", read: "Deut 7:12-end"} ]
        , ep2: [ {style: "req", read: "Acts 8:4-25"} ]
        }
      }
    , 3:
      { Sunday:
        { title: "Third Sunday of Easter"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Num 13:1-2, 17-end"} ]
        , mp2: [ {style: "req", read: "Mark 5:21-end"} ]
        , ep1: [ {style: "req", read: "Deut 4:25-40"} ]
        , ep2: [ {style: "req", read: "John 21:1-14"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Deut 8"} ]
        , mp2: [ {style: "req", read: "Acts 8:26-end"} ]
        , ep1: [ {style: "req", read: "Deut 9:1-10"} ]
        , ep2: [ {style: "req", read: "Acts 9:1-31"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Deut 9:11-end"} ]
        , mp2: [ {style: "req", read: "Acts 9:32-end"} ]
        , ep1: [ {style: "req", read: "Deut 10"} ]
        , ep2: [ {style: "req", read: "Acts 10:1-23"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Deut 11:1-12"} ]
        , mp2: [ {style: "req", read: "Acts 10:24-end"} ]
        , ep1: [ {style: "req", read: "Deut 11:13-end"} ]
        , ep2: [ {style: "req", read: "Acts 11:1-18"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Deut 12:1-14"}
               , {style: "opt", read: "Deut 12:15-13:18"} 
               ]
        , mp2: [ {style: "req", read: "Acts 11:19-end"} ]
        , ep1: [ {style: "opt", read: "Deut 14"}
               , {style: "req", read: "Deut 15:1-18"} 
               ]
        , ep2: [ {style: "req", read: "Acts 12:1-24"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Deut 16:1-20"} ]
        , mp2: [ {style: "req", read: "Acts 12:25-13:12"} ]
        , ep1: [ {style: "opt", read: "Deut 17:1-7"}
               , {style: "req", read: "Deut 17:8-end"} 
               ]
        , ep2: [ {style: "req", read: "Acts 13:13-43"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["white"]
        , mp1: [ {style: "opt", read: "Deut 18:1-8"}
               , {style: "req", read: "Deut 18:9-end"} 
               ]
        , mp2: [ {style: "req", read: "Acts 13:44-14:7"} ]
        , ep1: [ {style: "req", read: "Deut 19"}
               , {style: "opt", read: "Deut 20"} 
               ]
        , ep2: [ {style: "req", read: "Acts 14:8-end"} ]
        }
      }
    , 4:
      { Sunday:
        { title: "Fourth Sunday of Easter"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Num 22:1-21"} ]
        , mp2: [ {style: "req", read: "Luke 7:11-17"} ]
        , ep1: [ {style: "req", read: "Deut 5:1-21"} ]
        , ep2: [ {style: "req", read: "John 21:15-end"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["white"]
        , mp1: [ {style: "opt", read: "Deut 21:1-21"}
               , {style: "req", read: "Deut 21:22-22:8"
                  }
               , {style: "opt", read: "Deut 22:9-30"} 
               ]
        , mp2: [ {style: "req", read: "Acts 15:1-21"} ]
        , ep1: [ {style: "opt", read: "Deut 23"}
               , {style: "opt", read: " 24:1-4"
                  }
               , {style: "req", read: "Deut 24:5-end"} 
               ]
        , ep2: [ {style: "req", read: "Acts 15:22-35"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["white"]
        , mp1: [ {style: "opt", read: "Deut 25"}
               , {style: "req", read: "Deut 26"} 
               ]
        , mp2: [ {style: "req", read: "Acts 15:36-end, 16:1-5"} ]
        , ep1: [ {style: "opt", read: "Deut 27"}
               , {style: "opt", read: "Deut 28:1-57"}
               , {style: "req", read: "Deut 28:58-end"} 
               ]
        , ep2: [ {style: "req", read: "Acts 16:6-end"}]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["white"]
        , mp1: [ {style: "opt", read: "Deut 29:1-9"}
               , {style: "req", read: "Deut 29:10-end"} 
               ]
        , mp2: [ {style: "req", read: "Acts 17:1-15"} ]
        , ep1: [ {style: "req", read: "Deut 30"} ]
        , ep2: [ {style: "req", read: "Acts 17:16-end"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Deut 31:1-13"} ]
        , mp2: [ {style: "req", read: "Acts 18:1-23"} ]
        , ep1: [ {style: "req", read: "Deut 31:14-29"} ]
        , ep2: [ {style: "req", read: "Acts 18:24-end, 19:1-7"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Deut 31:30-32:14"} ]
        , mp2: [ {style: "req", read: "Acts 19:8-20"} ]
        , ep1: [ {style: "req", read: "Deut 32:15-47"} ]
        , ep2: [ {style: "req", read: "Acts 19:21-end"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Deut 33"} ]
        , mp2: [ {style: "req", read: "Acts 20:1-16"} ]
        , ep1: [ {style: "req", read: "Deut 32:48-end, 34"} ]
        , ep2: [ {style: "req", read: "Acts 20:17-end"} ]
        }
      }
    , 5:
      { Sunday:
        { title: "Fifth Sunday of Easter"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Num 22:36-23:12"} ]
        , mp2: [ {style: "req", read: "John 11:1-44"} ]
        , ep1: [ {style: "req", read: "Exod 35:30-36:7"} ]
        , ep2: [ {style: "req", read: "Luke 16:19-end"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Joshua 1"} ]
        , mp2: [ {style: "req", read: "Acts 21:1-16"} ]
        , ep1: [ {style: "req", read: "Joshua 2"} ]
        , ep2: [ {style: "req", read: "Acts 21:17-36"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Joshua 3"} ]
        , mp2: [ {style: "req", read: "Acts 21:37-22:12"} ]
        , ep1: [ {style: "req", read: "Joshua 4:1-5:1"} ]
        , ep2: [ {style: "req", read: "Acts 22:23-23:11"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Joshua 5:13-6:10"} ]
        , mp2: [ {style: "req", read: "Acts 23:12-end"} ]
        , ep1: [ {style: "req", read: "Joshua 7"} ]
        , ep2: [ {style: "req", read: "Acts 24:1-23"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Joshua 9:3-end"} ]
        , mp2: [ {style: "req", read: "Acts 24:24-25:12"} ]
        , ep1: [ {style: "req", read: "Joshua 10:1-15"} ]
        , ep2: [ {style: "req", read: "Acts 25:13-end"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Joshua 21:43-22:8"} ]
        , mp2: [ {style: "req", read: "Acts 26"} ]
        , ep1: [ {style: "req", read: "Joshua 22:9-end"} ]
        , ep2: [ {style: "req", read: "Acts 27"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Joshua 23"} ]
        , mp2: [ {style: "req", read: "Acts 28:1-15"} ]
        , ep1: [ {style: "req", read: "Joshua 24:1-28"} ]
        , ep2: [ {style: "req", read: "Acts 28:16-end"} ]
        }
      }
    , 6:
      { Sunday:
        { title: "Sixth Sunday of Easter [Rogation]"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Num 24:1-19"} ]
        , mp2: [ {style: "req", read: "Rom 6:1-14"} ]
        , ep1: [ {style: "req", read: "Deut 6"} ]
        , ep2: [ {style: "req", read: "Luke 10:38-11:13"} ]
        }
      , Monday:
        { title: "Monday Rogation Days"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Deut 7:6-13"} ]
        , mp2: [ {style: "req", read: "Matt 6:5-18"} ]
        , ep1: [ {style: "req", read: "Deut 8"} ]
        , ep2: [ {style: "req", read: "Matt 6:19-end"} ]
        }
      , Tuesday:
        { title: "Tuesday Rogation Days"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Deut 11:8-21"} ]
        , mp2: [ {style: "req", read: "Luke 5:1-11"} ]
        , ep1: [ {style: "req", read: "1 Kings 8:22-43"} ]
        , ep2: [ {style: "req", read: "Jas 5:1-18"} ]
        }
      , Wednesday:
        { title: "Wednesday Rogation Days"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Joel 2:21-27"} ]
        , mp2: [ {style: "req", read: "John 6:22-40"} ]
        , ep1: [ {style: "req", read: "Song of Three Children 29-37"} ]
        , ep2: [ {style: "req", read: "Matt 28:16-end"} ]
        }
      , Thursday:
        { title: "Thursday Ascension Day"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "2 Kings 2:1-15"} ]
        , mp2: [ {style: "req", read: "John 17"} ]
        , ep1: [ {style: "req", read: "Dan 7:9-10, 13-14"} ]
        , ep2: [ {style: "req", read: "Heb 1"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Judges 2:6-end"} ]
        , mp2: [ {style: "req", read: "Heb 2"} ]
        , ep1: [ {style: "req", read: "Judges 3:12-end"} ]
        , ep2: [ {style: "req", read: "Heb 3"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Judges 4"} ]
        , mp2: [ {style: "req", read: "Heb 4:1-13"} ]
        , ep1: [ {style: "req", read: "Judges 5"} ]
        , ep2: [ {style: "req", read: "Heb 4:14-5:10"} ]
        }
      }
    , 7:
      { Sunday:
        { title: "Sunday after Ascension Day"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Isa 65:17-end"} ]
        , mp2: [ {style: "req", read: "Luke 24:36-end"} ]
        , ep1: [ {style: "req", read: "Jer 31:1-13"} ]
        , ep2: [ {style: "req", read: "Eph 5:1-14"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Judges 6:1-35"} ]
        , mp2: [ {style: "req", read: "Heb 5:11-end, 6"} ]
        , ep1: [ {style: "req", read: "Judges 6:36-7:13"} ]
        , ep2: [ {style: "req", read: "Heb 7"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Judges 7:24-8:18"} ]
        , mp2: [ {style: "req", read: "Heb 8"} ]
        , ep1: [ {style: "req", read: "Judges 8:32-9:14"} ]
        , ep2: [ {style: "req", read: "Heb 9:1-14"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Judges 9:26-end"} ]
        , mp2: [ {style: "req", read: "Heb 9:15-end"} ]
        , ep1: [ {style: "req", read: "Judges 10:17-11:18"} ]
        , ep2: [ {style: "req", read: "Heb 10:1-18"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Judges 11:29-12:7"} ]
        , mp2: [ {style: "req", read: "Heb 10:19-end"} ]
        , ep1: [ {style: "req", read: "Judges 13"} ]
        , ep2: [ {style: "req", read: "Heb 11"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Judges 14"} ]
        , mp2: [ {style: "req", read: "Heb 12:1-13"} ]
        , ep1: [ {style: "req", read: "Judges 15:1-16:3"} ]
        , ep2: [ {style: "req", read: "Heb 12:14-end"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Judges 16:4-end"} ]
        , mp2: [ {style: "req", read: "Heb 13"} ]
        , ep1: [ {style: "req", read: "Deut 16:9-12"} ]
        , ep2: [ {style: "req", read: "Acts 18:24-19:7"} ]
        }
      }
    } // end of easter
  , ascension:
    { 1:
      { Thursday:
        { title: "Thursday Ascension Day"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "2 Kings 2:1-15"} ]
        , mp2: [ {style: "req", read: "John 17"} ]
        , ep1: [ {style: "req", read: "Dan 7:9-10, 13-14"} ]
        , ep2: [ {style: "req", read: "Heb 1"} ]
        }
      , Friday:
        { title: "Friday after Ascension"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Judges 2:6-end"} ]
        , mp2: [ {style: "req", read: "Heb 2"} ]
        , ep1: [ {style: "req", read: "Judges 3:12-end"} ]
        , ep2: [ {style: "req", read: "Heb 3"} ]
        }
      , Saturday:
        { title: "Saturday after Ascension"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Judges 4"} ]
        , mp2: [ {style: "req", read: "Heb 4:1-13"} ]
        , ep1: [ {style: "req", read: "Judges 5"} ]
        , ep2: [ {style: "req", read: "Heb 4:14-5:10"} ]
        }
      } // end of 1:
    } // end of ascension
  , pentecost:
    { 1:
      { Sunday:
        { title: "Pentecost"
        , colors: ["red"]
        , mp1: [ {style: "req", read: "Joel 2:28-end"} ]
        , mp2: [ {style: "req", read: "Rom 8:1-17"} ]
        , ep1: [ {style: "req", read: "Isa 11:1-9"} ]
        , ep2: [ {style: "req", read: "Rom 8:18-end"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezek 11:14-20"} ]
        , mp2: [ {style: "req", read: "Acts 2:12-36"} ]
        , ep1: [ {style: "req", read: "Wisd 1:1-7"} ]
        , ep2: [ {style: "req", read: "Acts 2:37-end"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezek 37:1-14"} ]
        , mp2: [ {style: "req", read: "1 Cor 12:1-13"} ]
        , ep1: [ {style: "req", read: "Wisd 7:15-8:1"} ]
        , ep2: [ {style: "req", read: "1 Cor 12:27-end, 13"} ]
        }
      , Wednesday:
        { title: "Wednesday Ember Day"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "1 Kings 19:1-18"} ]
        , mp2: [ {style: "req", read: "1 Cor 2"} ]
        , ep1: [ {style: "req", read: "Wisd 9"} ]
        , ep2: [ {style: "req", read: "1 Cor 3"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Sam 23:1-5"} ]
        , mp2: [ {style: "req", read: "Eph 6:10-20"} ]
        , ep1: [ {style: "req", read: "Exod 35:30-36:1"} ]
        , ep2: [ {style: "req", read: "Gal 5:13-end"} ]
        }
      , Friday:
        { title: "Friday Ember Day"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Num 11:16-17,24-29"} ]
        , mp2: [ {style: "req", read: "2 Cor 5:14-6:10"} ]
        , ep1: [ {style: "req", read: "Jer 31:31-34"} ]
        , ep2: [ {style: "req", read: "2 Cor 3"} ]
        }
      , Saturday:
        { title: "Saturday Ember Day"
        , colors: ["violet"]
        , mp1: [ {style: "req", read: "Num 27:15-end"} ]
        , mp2: [ {style: "req", read: "Matt 9:35-10:10"} ]
        , ep1: [ {style: "req", read: "Isa 61"} ]
        , ep2: [ {style: "req", read: "2 Tim 1:3-14"} ]
      }
    }
  , trinity:
    { 1:
      { Sunday:
        { title: "Trinity Sunday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Isa 6:1- 8"} ]
        , mp2: [ {style: "req", read: "Mark 1:1-13"} ]
        , ep1: [ {style: "req", read: "Isa 40:12-end"} ]
        , ep2: [ {style: "req", read: "1 Pet 1:1-12"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Job 1"} ]
        , mp2: [ {style: "req", read: "Jas 1"} ]
        , ep1: [ {style: "req", read: "Job 2"} ]
        , ep2: [ {style: "req", read: "Mark 1:14-31"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Job 3"} ]
        , mp2: [ {style: "req", read: "Jas 2:1-13"} ]
        , ep1: [ {style: "req", read: "Job 4"} ]
        , ep2: [ {style: "req", read: "Mark 1:32-end"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Job 5"} ]
        , mp2: [ {style: "req", read: "Jas 2:14-end"} ]
        , ep1: [ {style: "req", read: "Job 6"} ]
        , ep2: [ {style: "req", read: "Mark 2:1-22"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Job 7"} ]
        , mp2: [ {style: "req", read: "Jas 3"} ]
        , ep1: [ {style: "req", read: "Job 8"} ]
        , ep2: [ {style: "req", read: "Mark 2:23-3:12"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Job 9"} ]
        , mp2: [ {style: "req", read: "Jas 4"} ]
        , ep1: [ {style: "req", read: "Job 10"} ]
        , ep2: [ {style: "req", read: "Mark 3:13-end"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["white"]
        , mp1: [ {style: "req", read: "Job 11"} ]
        , mp2: [ {style: "req", read: "Jas 5"} ]
        , ep1: [ {style: "req", read: "Job 12"} ]
        , ep2: [ {style: "req", read: "Mark 4:1-34"} ]
      }
    }
  , proper:
    { 1:
      { Sunday:
        { title: "Sunday closest to May 11"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 3"} ]
        , mp2: [ {style: "req", read: "1 Cor 10:1-13"}
               , {style: "opt", read: "1 Cor 10:14-24"} 
               ]
        , ep1: [ {style: "req", read: "Gen 4:1-15"} ]
        , ep2: [ {style: "req", read: "Luke 10:25-37"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 18"} ]
        , mp2: [ {style: "req", read: "Matt 19:16-end, 20:1-16"} ]
        , ep1: [ {style: "req", read: "Gen 19:1-3, 12-29"} ]
        , ep2: [ {style: "req", read: "Rom 7"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "Gen 20"}, {style: "req", read: "Gen 21"} ]
        , mp2: [ {style: "req", read: "Matt 20:17-end"} ]
        , ep1: [ {style: "req", read: "Gen 22:1-19"} ]
        , ep2: [ {style: "req", read: "Rom 8:1-17"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 23"} ]
        , mp2: [ {style: "req", read: "Matt 21:1-22"} ]
        , ep1: [ {style: "req", read: "Gen 24:1-28"} ]
        , ep2: [ {style: "req", read: "Rom 8:18-end"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 24:29-end"} ]
        , mp2: [ {style: "req", read: "Matt 21:23-end"} ]
        , ep1: [ {style: "opt", read: "Gen 25:1-6"}
               , {style: "req", read: "Gen 25:7-11, 19-end"} 
               ]
        , ep2: [ {style: "req", read: "Rom 9"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 26:1-5"}
               , {style: "opt", read: "Gen 26:6-11"
                  }
               , {style: "req", read: "Gen 26:12-end"} 
               ]
        , mp2: [ {style: "req", read: "Matt 22:1-33"} ]
        , ep1: [ {style: "req", read: "Gen 27:1-40"} ]
        , ep2: [ {style: "req", read: "Rom 10"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 27:41-end, 28"} ]
        , mp2: [ {style: "req", read: "Matt22:14-23:12"} ]
        , ep1: [ {style: "req", read: "Gen 29:1-20"}
               , {style: "opt", read: "Gen 29:21-30:43"} 
               ]
        , ep2: [ {style: "req", read: "Rom 11"} ]
        }
      }
    , 2:
      { Sunday:
        { title: "Sunday closest to May 18"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 12:1-9"} ]
        , mp2: [ {style: "req", read: "1 Cor 12:4-end" } ]
        , ep1: [ {style: "req", read: "Gen 6:5-end" } ]
        , ep2: [ {style: "req", read: "Luke 17:20-end"} ] 
        }
      , Monday:
        { Title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 31:1-21"} ]
        , mp2: [ {style: "req", read: "Matt 23:13-end"} ]
        , ep1: [ {style: "req", read: "Gen 31:22-32:2"} ]
        , ep2: [ {style: "req", read: "Rom 12"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 32:3-30"}, {style: "opt", read: "Gen 32:31-32"} ]
        , mp2: [ {style: "req", read: "Matt 24:1-28"} ]
        , ep1: [ {style: "req", read: "Gen 33"}, {style: "opt", read: "Gen 34"} ]
        , ep2: [ {style: "req", read: "Rom 13"} ]
        }
      , Wednesday:
        { title: "Ash Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Isa 57:15-end"} ]
        , mp2: [ {style: "req", read: "Mark 2:13-22"} ]
        , ep1: [ {style: "req", read: "Isa 58"} ]
        , ep2: [ {style: "req", read: "Heb 3:12-4:13"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 35:1-20"}
               , {style: "opt", read: "Gen 35:21-29"} 
               ]
        , mp2: [ {style: "req", read: "Matt 24:29-end"} ]
        , ep1: [ {style: "req", read: "Gen 37"}
               , {style: "opt", read: "Gen 38"} 
               ]
        , ep2: [ {style: "req", read: "Rom 14"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 39"} ]
        , mp2: [ {style: "req", read: "Matt 25:1-30"} ]
        , ep1: [ {style: "req", read: "Gen 40"} ]
        , ep2: [ {style: "req", read: "Rom 15"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Gen 41:1-40"} ]
        , mp2: [ {style: "req", read: "Matt 25:31-end"} ]
        , ep1: [ {style: "req", read: "Gen 41:41-end"} ]
        , ep2: [ {style: "req", read: "Rom 16"} ]
        }
      }
    , 3:
      { Sunday:
        { title: "Sunday closest to May 25"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Joshua 1:1-9"} ]
        , mp2: [ {style: "req", read: "Mark 1:21-34"} ]
        , ep1: [ {style: "req", read: "1 Sam 9:1-10:1"} ]
        , ep2: [ {style: "req", read: "Acts 1:1-14"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Job 13"} ]
        , mp2: [ {style: "req", read: "1 Pet 1:1-21"} ]
        , ep1: [ {style: "req", read: "Job 14"} ]
        , ep2: [ {style: "req", read: "Mark 4:35-5:10"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Job 15:1-16"}
               , {style: "opt", read: "Job 15:17-35"} 
               ]
        , mp2: [ {style: "req", read: "1 Pet 1:22-2:10"} ]
        , ep1: [ {style: "req", read: "Job 16:1-17:2"} ]
        , ep2: [ {style: "req", read: "Mark 5:21-end"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Job 17:3-end"} ]
        , mp2: [ {style: "req", read: "1 Pet 2:11-3:7"} ]
        , ep1: [ {style: "req", read: "Job 18"} ]
        , ep2: [ {style: "req", read: "Mark 6:1-29"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Job 19"}
               , {style: "opt", read: "Job 20"} 
               ]
        , mp2: [ {style: "req", read: "1 Pet 3:8-4:6"} ]
        , ep1: [ {style: "req", read: "Job 21"} ]
        , ep2: [ {style: "req", read: "Mark 6:30-end"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Job 22"} ]
        , mp2: [ {style: "req", read: "1 Pet 4:7-end"} ]
        , ep1: [ {style: "req", read: "Job 23"} ]
        , ep2: [ {style: "req", read: "Mark 1:1-23"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Job 24"} ]
        , mp2: [ {style: "req", read: "1 Pet 5"} ]
        , ep1: [ {style: "req", read: "Job 25,26"} ]
        , ep2: [ {style: "req", read: "Mark 7:24-8:10"} ]
        }
      }
    , 4:
      { Sunday:
        { title: "Sunday closest to June 1"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Joshua 2"} ]
        , mp2: [ {style: "req", read: "Mark 2:23-3:19"} ]
        , ep1: [ {style: "req", read: "1 Sam 16:1-13"} ]
        , ep2: [ {style: "req", read: "Acts 2:1-21"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Job 27"} ]
        , mp2: [ {style: "req", read: "2 Pet 1"} ]
        , ep1: [ {style: "req", read: "Job 28"} ]
        , ep2: [ {style: "req", read: "Mark 8:11-9:1"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Job 29:1-30:1"}, {style: "opt", read: "Job 30:2-31"} ]
        , mp2: [ {style: "req", read: "2 Pet 2"} ]
        , ep1: [ {style: "opt", read: "Job 31:1-12"}, {style: "req", read: "Job 31:13-end"} ]
        , ep2: [ {style: "req", read: "Mark 9:2-29"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Job 32,33"} ]
        , mp2: [ {style: "req", read: "2 Pet 3"} ]
        , ep1: [ {style: "req", read: "Job 34"}
               , {style: "opt", read: "Job 35"} 
               ]
        , ep2: [ {style: "req", read: "Mark 9:30-end"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Job 36"}
               , {style: "opt", read: "Job 37"} 
               ]
        , mp2: [ {style: "req", read: "Jude"} ]
        , ep1: [ {style: "req", read: "Job 38"} ]
        , ep2: [ {style: "req", read: "Mark 10:1-31"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Job 39"} ]
        , mp2: [ {style: "req", read: "1 John 1:1-2:6"} ]
        , ep1: [ {style: "req", read: "Job 40"} ]
        , ep2: [ {style: "req", read: "Mark 10:32-end"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Job 41"} ]
        , mp2: [ {style: "req", read: "1 John 2:7-end"} ]
        , ep1: [ {style: "req", read: "Job 42"} ]
        , ep2: [ {style: "req", read: "Mark 11:1-26"} ]
        }
      }
    , 5:
      { Sunday:
        { title: "Sunday closest to June 8"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Joshua 3"} ]
        , mp2: [ {style: "req", read: "Mark 3:20-end"} ]
        , ep1: [ {style: "req", read: "1 Sam 17:1-11, 32-51"} ]
        , ep2: [ {style: "req", read: "Acts 2:22-42"}
               , {style: "opt", read: "Acts 2:43-end"} 
               ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Prov 1:1-19"} ]
        , mp2: [ {style: "req", read: "1 John 3:1-12"} ]
        , ep1: [ {style: "req", read: "Prov 1:20-end"} ]
        , ep2: [ {style: "req", read: "Mark 11:27-12:12"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Prov 2"} ]
        , mp2: [ {style: "req", read: "1 John 3:13-4:6"} ]
        , ep1: [ {style: "req", read: "Prov 3:1-26"} ]
        , ep2: [ {style: "req", read: "Mark 12:13-34"} ]
        }
      , Wednesday:
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Prov 3:27-4:19"} ]
        , mp2: [ {style: "req", read: "1 John 4:7-end"} ]
        , ep1: [ {style: "req", read: "Prov 4:20-5:14"}
               , {style: "opt", read: "Prov 5:15-23"} 
               ]
        , ep2: [ {style: "req", read: "Mark 12:35-13:13"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Prov 6:1-19"}
               , {style: "opt", read: "Prov 6:20-35"} 
               ]
        , mp2: [ {style: "req", read: "1 John 5"} ]
        , ep1: [ {style: "opt", read: "Prov 7"}
               , {style: "req", read: "Prov 8"} 
               ]
        , ep2: [ {style: "req", read: "Mark 13:14-end"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Prov 9"} ]
        , mp2: [ {style: "req", read: "2 John"} ]
        , ep1: [ {style: "req", read: "Prov 10:1-22"} ]
        , ep2: [ {style: "req", read: "Mark 14:1-26"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Prov 11:1-25"} ]
        , mp2: [ {style: "req", read: "3 John"} ]
        , ep1: [ {style: "req", read: "Prov 12:10-end"} ]
        , ep2: [ {style: "req", read: "Mark 14:27-52"} ]
        }
      }
    , 6:
      { Sunday:
        { title: "Sunday closest to June 15"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Joshua 5:13-6:10"} ]
        , mp2: [ {style: "req", read: "Mark 4:21-end"} ]
        , ep1: [ {style: "req", read: "1 Sam 18:1-16"} ]
        , ep2: [ {style: "req", read: "Acts 3:1-16"}
               , {style: "opt", read: "Acts 3:17-end"} 
               ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Prov 14:9-27"} ]
        , mp2: [ {style: "req", read: "Rom 1"} ]
        , ep1: [ {style: "req", read: "Prov 15:18-end"} ]
        , ep2: [ {style: "req", read: "Mark 14:53-end"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Prov 16:31-17:17"} ]
        , mp2: [ {style: "req", read: "Rom 2:1-16"} ]
        , ep1: [ {style: "req", read: "Prov 18:10-end"} ]
        , ep2: [ {style: "req", read: "Mark 15:1-41"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Prov 20:1-22"} ]
        , mp2: [ {style: "req", read: "Rom 2:17-end"} ]
        , ep1: [ {style: "req", read: "Prov 22:1-16"} ]
        , ep2: [ {style: "req", read: "Mark 15:42-end, 16"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Prov 24:23-end"} ]
        , mp2: [ {style: "req", read: "Rom 3"} ]
        , ep1: [ {style: "req", read: "Prov 25"} ]
        , ep2: [ {style: "req", read: "Luke 1:1-23"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Prov 26:12-end"} ]
        , mp2: [ {style: "req", read: "Rom 4"} ]
        , ep1: [ {style: "req", read: "Prov 27:1-22"} ]
        , ep2: [ {style: "req", read: "Luke 1:24-56"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "Prov 30:1-31:9"} ]
          , mp2: [ {style: "req", read: "Rom 5"} ]
          , ep1: [ {style: "req", read: "Prov 31:10-end"} ]
          , ep2: [ {style: "req", read: "Luke 1:57-end"} ]
        }
      }
    , 7:
      { Sunday:
        { title: "Sunday closest to June 22"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Joshua 24:1-5, 13-25"} ]
        , mp2: [ {style: "req", read: "Mark 6:7-32"} ]
        , ep1: [ {style: "req", read: "1 Sam 28:3-end"} ]
        , ep2: [ {style: "req", read: "Acts 4:1-22"}
                , {style: "opt", read: "Acts 4:23-31"} 
                ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Sam 1"} ]
        , mp2: [ {style: "req", read: "Rom 6"} ]
        , ep1: [ {style: "req", read: "1 Sam 2:1-21"} ]
        , ep2: [ {style: "req", read: "Luke 2:1-21"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Sam 2:22-end"} ]
        , mp2: [ {style: "req", read: "Rom 7"} ]
        , ep1: [ {style: "req", read: "1 Sam 3"} ]
        , ep2: [ {style: "req", read: "Luke 2:22-end"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Sam 4"}
               , {style: "opt", read: "1 Sam 5"} 
               ]
        , mp2: [ {style: "req", read: "Rom 8:1-17"} ]
        , ep1: [ {style: "opt", read: "1 Sam 6"}
               , {style: "req", read: "1 Sam 7"} 
               ]
        , ep2: [ {style: "req", read: "Luke 3:1-22"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Sam 8"} ]
        , mp2: [ {style: "req", read: "Rom 8:18-end"} ]
        , ep1: [ {style: "req", read: "1 Sam 9:1-25"} ]
        , ep2: [ {style: "req", read: "Luke 4:1-30"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Sam 9:26-10:16"} ]
        , mp2: [ {style: "req", read: "Rom 9"} ]
        , ep1: [ {style: "req", read: "1 Sam 10:17-end"} ]
        , ep2: [ {style: "req", read: "Luke 4:31-end"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "1 Sam 11"} ]
          , mp2: [ {style: "req", read: "Rom 10"} ]
          , ep1: [ {style: "req", read: "1 Sam 12"} ]
          , ep2: [ {style: "req", read: "Luke 5:1-16"} ]
        }
      }
    , 8:
      { Sunday:
        { title: "Sunday closest to June 29"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Judges 5"} ]
        , mp2: [ {style: "req", read: "Mark 6:53-7:13"} ]
        , ep1: [ {style: "req", read: "2 Sam 1"} ]
        , ep2: [ {style: "req", read: "Acts 6"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Sam 13"} ]
        , mp2: [ {style: "req", read: "Rom 11:1-24"} ]
        , ep1: [ {style: "req", read: "1 Sam 14:1-23"} ]
        , ep2: [ {style: "req", read: "Luke 5:17-end"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Sam 14:24-48"}
               , {style: "opt", read: "1 Sam 14:49-52"} 
               ]
        , mp2: [ {style: "req", read: "Rom 11:25-end"} ]
        , ep1: [ {style: "req", read: "1 Sam 15"} ]
        , ep2: [ {style: "req", read: "Luke 6:1-19"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Sam 16"} ]
        , mp2: [ {style: "req", read: "Rom 12"} ]
        , ep1: [ {style: "req", read: "1 Sam 17:1-30"} ]
        , ep2: [ {style: "req", read: "Luke 6:20-38"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Sam 17:31-54"} ]
        , mp2: [ {style: "req", read: "Rom 13"} ]
        , ep1: [ {style: "req", read: "1 Sam 17:55-18:16"}
               , {style: "opt", read: "1 Sam 18:17-30"} 
               ]
        , ep2: [ {style: "req", read: "Luke 6:39-7:10"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Sam 19"} ]
        , mp2: [ {style: "req", read: "Rom 14"} ]
        , ep1: [ {style: "req", read: "1 Sam 20:1-17"} ]
        , ep2: [ {style: "req", read: "Luke 7:11-35"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "1 Sam 20:18-end"} ]
          , mp2: [ {style: "req", read: "Rom 15:1-13"} ]
          , ep1: [ {style: "req", read: "1 Sam 21:1-end, 22:1-5"} ]
          , ep2: [ {style: "req", read: "Luke 7:36-end"} ]
        }
      }
    , 9:
      { Sunday:
        { title: "Sunday closest to July 6"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Judges 7:1-23"} ]
        , mp2: [ {style: "req", read: "Mark 9:14-29"} ]
        , ep1: [ {style: "req", read: "Jer 52:1-11"}
               , {style: "opt", read: "Jer 52:12-34"} 
               ]
        , ep2: [ {style: "req", read: "Acts 8:4-17"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Sam 22:6-end"} ]
        , mp2: [ {style: "req", read: "Rom 15:14-end"} ]
        , ep1: [ {style: "req", read: "1 Sam 23"} ]
        , ep2: [ {style: "req", read: "Luke 8:1-21"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Sam 24"} ]
        , mp2: [ {style: "req", read: "Rom 16"} ]
        , ep1: [ {style: "req", read: "1 Sam 25:1-43"} ]
        , ep2: [ {style: "req", read: "Luke 8:22-end"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Sam 26"}
               , {style: "opt", read: "1 Sam 27"} 
               ]
        , mp2: [ {style: "req", read: "1 Cor 1:1-25"} ]
        , ep1: [ {style: "opt", read: "1 Sam 28:1-2"}
               , {style: "req", read: "1 Sam 28:3-end"}
               , {style: "opt", read: "1 Sam 29"} 
               ]
        , ep2: [ {style: "req", read: "Luke 9:1-17"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "1 Sam 30"}
               , {style: "req", read: "1 Sam 31"} 
               ]
        , mp2: [ {style: "req", read: "1 Cor 1:26-end, 2"} ]
        , ep1: [ {style: "req", read: "2 Sam 1"} ]
        , ep2: [ {style: "req", read: "Luke 9:18-50"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Sam 2:1-3:1"} ]
        , mp2: [ {style: "req", read: "1 Cor 3"} ]
        , ep1: [ {style: "opt", read: "2 Sam 3:2-16"}
               , {style: "req", read: "2 Sam 3:17-end"} 
               ]
        , ep2: [ {style: "req", read: "Luke 9:51-end"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "2 Sam 4"}
               , {style: "req", read: "2 Sam 5:1-12"} 
               ]
        , mp2: [ {style: "req", read: "1 Cor 4:1-17"} ]
        , ep1: [ {style: "req", read: "2 Sam 6"} ]
        , ep2: [ {style: "req", read: "Luke 10:1-24"} ]
        }
      }
    , 10:
      { Sunday:
        { title: "Sunday closest to July 13"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Judges 16:4-end"} ]
        , mp2: [ {style: "req", read: "Mark 9:30-end"} ]
        , ep1: [ {style: "req", read: "2 Sam 11"} ]
        , ep2: [ {style: "req", read: "Acts 8:26-39"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Sam 7"} ]
        , mp2: [ {style: "req", read: "1 Cor 4:18-end, 5"} ]
        , ep1: [ {style: "req", read: "2 Sam 8"} ]
        , ep2: [ {style: "req", read: "Luke 10:25-end"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Sam 9"} ]
        , mp2: [ {style: "req", read: "1 Cor 6"} ]
        , ep1: [ {style: "req", read: "2 Sam 10"} ]
        , ep2: [ {style: "req", read: "Luke 11:1-28"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "2 Sam 12"}
               , {style: "opt", read: "2 Sam 13:1-37"}
               , {style: "req", read: "2 Sam 13:38-14:24"} 
               ]
        , mp2: [ {style: "req", read: "1 Cor 7"} ]
        , ep1: [ {style: "req", read: "2 Sam 14:25-15:12"} ]
        , ep2: [ {style: "req", read: "Luke 11:29-end"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Sam 15:13-end"} ]
        , mp2: [ {style: "req", read: "1 Cor 8"} ]
        , ep1: [ {style: "req", read: "2 Sam 16"} ]
        , ep2: [ {style: "req", read: "Luke 12:1-34"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Sam 17:1-23"} ]
        , mp2: [ {style: "req", read: "1 Cor 9"} ]
        , ep1: [ {style: "req", read: "2 Sam 17:24-18:18"} ]
        , ep2: [ {style: "req", read: "Luke 12:35-53"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "2 Sam 18:19-end"} ]
          , mp2: [ {style: "req", read: "1 Cor 10:1-11:1"} ]
          , ep1: [ {style: "req", read: "2 Sam 19"} ]
          , ep2: [ {style: "req", read: "Luke 12:54-13:9"} ]
        }
      }
    , 11:
      { Sunday:
        { title: "Sunday closest to July 20"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Sam 1:1-20"}
               , {style: "opt", read: "1 Sam 1:21-end"} 
               ]
        , mp2: [ {style: "req", read: "Mark 10:17-31"} ]
        , ep1: [ {style: "req", read: "2 Sam 12:1-23"} ]
        , ep2: [ {style: "req", read: "Acts 11:1-18"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Sam 20"}
               , {style: "opt", read: "2 Sam 21"} 
               ]
        , mp2: [ {style: "req", read: "1 Cor 11:2-end"} ]
        , ep1: [ {style: "opt", read: "2 Sam 22"}
               , {style: "req", read: "2 Sam 23:1-17"
                  }
               , {style: "opt", read: "2 Sam 23:18-39"} 
               ]
        , ep2: [ {style: "req", read: "Luke 13:10-end"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Sam 24"} ]
        , mp2: [ {style: "req", read: "1 Cor 12:1-27"} ]
        , ep1: [ {style: "opt", read: "1 Kings 1:1-4"}
               , {style: "req", read: "1 Kings 1:5-31"} 
               ]
        , ep2: [ {style: "req", read: "Luke 14:1-24"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Kings 1:32-end"}
               , {style: "opt", read: "1 Kings 2"} 
               ]
        , mp2: [ {style: "req", read: "1 Cor 12:27-end, 13"} ]
        , ep1: [ {style: "req", read: "1 Chron 22:2-end"} ]
        , ep2: [ {style: "req", read: "Luke 14:25-15:10"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Chron 28:1-29:9"} ]
        , mp2: [ {style: "req", read: "1 Cor 14:1-19"} ]
        , ep1: [ {style: "req", read: "1 Chron 29:10-end"} ]
        , ep2: [ {style: "req", read: "Luke 15:11-end"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Kings 3"} ]
        , mp2: [ {style: "req", read: "1 Cor 14:20-end"} ]
        , ep1: [ {style: "opt", read: "1 Kings 4:1-20"}
               , {style: "req", read: "1 Kings 4:21-end"} 
               ]
        , ep2: [ {style: "req", read: "Luke 16"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "1 Kings 5"} ]
          , mp2: [ {style: "req", read: "1 Cor 15:1-34"} ]
          , ep1: [ {style: "req", read: "1 Kings 6:1-14"}
                 , {style: "opt", read: "1 Kings 6:15-38"} 
                 ]
          , ep2: [ {style: "req", read: "Luke 17:1-19"} ]
        }
      }
    , 12:
      { Sunday:
        { title: "Sunday closest to July 27"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Sam 3:1-4:1 a"} ]
        , mp2: [ {style: "req", read: "Mark 12:18-end"} ]
        , ep1: [ {style: "req", read: "Ezek 37:15-end"} ]
        , ep2: [ {style: "req", read: "Acts 15:1-31"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "1 Kings 7"}
               , {style: "req", read: "1 Kings 8:1-21"} 
               ]
        , mp2: [ {style: "req", read: "1 Cor 15:35-end"} ]
        , ep1: [ {style: "req", read: "1 Kings 8:22-53"} ]
        , ep2: [ {style: "req", read: "Luke 17:20-end"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Kings 8:54-9:9"}
               , {style: "opt", read: "1 Kings 9:10-28"} 
               ]
        , mp2: [ {style: "req", read: "1 Cor 16"} ]
        , ep1: [ {style: "req", read: "1 Kings 10"} ]
        , ep2: [ {style: "req", read: "Luke 18:1-30"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Kings 11:1-13"}
               , {style: "opt", read: "1 Kings 11:14-25"
            }
               , {style: "req", read: "1 Kings 11:26-end"} 
               ]
        , mp2: [ {style: "req", read: "2 Cor 1:1-22"} ]
        , ep1: [ {style: "req", read: "1 Kings 12:1-24"} ]
        , ep2: [ {style: "req", read: "Luke 18:31-19:10"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Kings 12:25-13:10"} ]
        , mp2: [ {style: "req", read: "2 Cor 1:23-end, 2"} ]
        , ep1: [ {style: "req", read: "1 Kings 13:11-end"} ]
        , ep2: [ {style: "req", read: "Luke 19:11-28"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Kings 14:1-20"}
               , {style: "opt", read: "1 Kings 14:21-31"} 
               ]
        , mp2: [ {style: "req", read: "2 Cor 3"} ]
        , ep1: [ {style: "req", read: "2 Chron 12"} ]
        , ep2: [ {style: "req", read: "Luke 19:29-end"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "2 Chron 13"} ]
          , mp2: [ {style: "req", read: "2 Cor 4"} ]
          , ep1: [ {style: "req", read: "2 Chron 14"} ]
          , ep2: [ {style: "req", read: "Luke 20:1-26"} ]
        }
      }
    , 13:
      { Sunday:
        { title: "Sunday closest to August 3"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Hos 6:1-6"} ]
        , mp2: [ {style: "req", read: "Luke 4:1-15"} ]
        , ep1: [ {style: "req", read: "Zech 2"} ]
        , ep2: [ {style: "req", read: "Matt 4:23-5:10"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Chron 15"} ]
        , mp2: [ {style: "req", read: "2 Cor 5"} ]
        , ep1: [ {style: "req", read: "2 Chron 16"} ]
        , ep2: [ {style: "req", read: "Luke 20:27-21:4"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "1 Kings 15"}
               , {style: "opt", read: "1 Kings 16:1-14"}
               , {style: "req", read: "1 Kings 16:15-end"} 
               ]
        , mp2: [ {style: "req", read: "2 Cor 5:20-7:1"} ]
        , ep1: [ {style: "req", read: "1 Kings 17"} ]
        , ep2: [ {style: "req", read: "Luke 21:5-end"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Kings 18:1-16"} ]
        , mp2: [ {style: "req", read: "2 Cor 7:2-end"} ]
        , ep1: [ {style: "req", read: "1 Kings 18:17-end"} ]
        , ep2: [ {style: "req", read: "Luke 22:1-38"} ]
        }
      , Thursday:
        { title: "Thursd"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Kings 19"}
               , {style: "opt", read: "1 Kings 20"} 
               ]
        , mp2: [ {style: "req", read: "2 Cor 8"} ]
        , ep1: [ {style: "req", read: "1 Kings 21"} ]
        , ep2: [ {style: "req", read: "Luke 22:39-53"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Kings 22:1-40"}
               , {style: "opt", read: "1 Kings 22:41-53"} 
               ]
        , mp2: [ {style: "req", read: "2 Cor 9"} ]
        , ep1: [ {style: "req", read: "2 Chron 20:1-30"} ]
        , ep2: [ {style: "req", read: "Luke 22:54-end"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Kings 1"} ]
        , mp2: [ {style: "req", read: "2 Cor 10"} ]
        , ep1: [ {style: "req", read: "2 Kings 2:1-22"}
               , {style: "opt", read: "2 Kings 2:23-25"}
               , {style: "opt", read: "2 Kings 3"} 
               ]
        , ep2: [ {style: "req", read: "Luke 23:1-25"} ]
        }
      }
    , 14:
      { Sunday:
        { title: "Sunday closest to August 10"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Jer 26:1-16"} ]
        , mp2: [ {style: "req", read: "Luke 4:16-30"} ]
        , ep1: [ {style: "req", read: "Jer 7:1-16"} ]
        , ep2: [ {style: "req", read: "Matt 5:21-end"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Kings 4:1-37"}
               , {style: "opt", read: "2 Kings 4:38-44"} 
               ]
        , mp2: [ {style: "req", read: "2 Cor 11"} ]
        , ep1: [ {style: "req", read: "2 Kings 5"} ]
        , ep2: [ {style: "req", read: "Luke 23:26-49"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Kings 6:1-23"} ]
        , mp2: [ {style: "req", read: "2 Cor 12:1-13"} ]
        , ep1: [ {style: "req", read: "2 Kings 6:24-7:2"} ]
        , ep2: [ {style: "req", read: "Luke 23:50-24:12"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Kings 7:3-end"} ]
        , mp2: [ {style: "req", read: "2 Cor 12:14-end, 13"} ]
        , ep1: [ {style: "req", read: "2 Kings 8:1-15"}
               , {style: "opt", read: "2 Kings 8:16-29"} 
               ]
        , ep2: [ {style: "req", read: "Luke 24:13-end"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Kings 9"}
               , {style: "opt", read: "2 Kings 10"} 
               ]
        , mp2: [ {style: "req", read: "Gal 1"} ]
        , ep1: [ {style: "req", read: "2 Kings 11:1-20"} ]
        , ep2: [ {style: "req", read: "John 1:1-28"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Kings 11:21-end, 12"} ]
        , mp2: [ {style: "req", read: "Gal 2"} ]
        , ep1: [ {style: "req", read: "2 Kings 13"} ]
        , ep2: [ {style: "req", read: "John 1:29-end"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "2 Kings 14"} ]
          , mp2: [ {style: "req", read: "Gal 3"} ]
          , ep1: [ {style: "req", read: "2 Chron 26"} ]
          , ep2: [ {style: "req", read: "John 2"} ]
        }
      }
    , 15:
      { Sunday:
        { title: "Sunday closest to August 17"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Hos 14"} ]
        , mp2: [ {style: "req", read: "Luke 6:20-38"} ]
        , ep1: [ {style: "req", read: "Ezra 1:1-8"} ]
        , ep2: [ {style: "req", read: "Matt 6:1-18"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "2 Kings 15:1-16"}
               , {style: "req", read: "2 Kings 15:17-end"} 
               ]
        , mp2: [ {style: "req", read: "Gal 4:1-5:1"} ]
        , ep1: [ {style: "req", read: "2 Kings 16"} ]
        , ep2: [ {style: "req", read: "John 3:1-21"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Isa 7:1-17"} ]
        , mp2: [ {style: "req", read: "Gal 5:2-end"} ]
        , ep1: [ {style: "req", read: "Isa 8:1-18"} ]
        , ep2: [ {style: "req", read: "John 3:22-end"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Kings 17:1-23"} ]
        , mp2: [ {style: "req", read: "Gal 6"} ]
        , ep1: [ {style: "req", read: "2 Kings 17:24-end"} ]
        , ep2: [ {style: "req", read: "John 4:1-26"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Kings 18:1-8"}
               , {style: "opt", read: "2 Kings 18:9-12"} 
               ]
        , mp2: [ {style: "req", read: "Eph 1:1-14"} ]
        , ep1: [ {style: "req", read: "2 Chron 30"} ]
        , ep2: [ {style: "req", read: "John 4:27-end"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Kings 18:13-end"} ]
        , mp2: [ {style: "req", read: "Eph 1:15-end"} ]
        , ep1: [ {style: "req", read: "2 Kings 19"} ]
        , ep2: [ {style: "req", read: "John 5:1-23"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Kings 20"}
               , {style: "opt", read: "2 Kings 21"} 
               ]
        , mp2: [ {style: "req", read: "Eph 2:1-10"} ]
        , ep1: [ {style: "req", read: "2 Chron 33"} ]
        , ep2: [ {style: "req", read: "John 5:24-end"} ]
        }
      }
    , 16:
      { Sunday:
        { title: "Sunday closest to August 24"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Joel 2:1-14"} ]
        , mp2: [ {style: "req", read: "Luke 6:39-end"} ]
        , ep1: [ {style: "req", read: "Dan 3"} ]
        , ep2: [ {style: "req", read: "Matt 6:19-end"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Kings 22"} ]
        , mp2: [ {style: "req", read: "Eph 2:11-end"} ]
        , ep1: [ {style: "req", read: "2 Kings 23:1-20"} ]
        , ep2: [ {style: "req", read: "John 6:1-21"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Kings 23:21-35"} ]
        , mp2: [ {style: "req", read: "Eph 3"} ]
        , ep1: [ {style: "req", read: "2 Kings 23:36-24:17"} ]
        , ep2: [ {style: "req", read: "John 6:22-40"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Kings 24:18-25:7"} ]
        , mp2: [ {style: "req", read: "Eph 4:1-16"} ]
        , ep1: [ {style: "req", read: "2 Kings 25:8-end"} ]
        , ep2: [ {style: "req", read: "John 6:41-end"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Jer 19"} ]
        , mp2: [ {style: "req", read: "Eph 4:17-30"} ]
        , ep1: [ {style: "req", read: "Jer 21:1-10"}
               , {style: "opt", read: "Jer 21:11-14"} 
               ]
        , ep2: [ {style: "req", read: "John 7:1-24"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "Jer 22:1-19"}
               , {style: "req", read: "Jer 22:20-23:8 "} 
               ]
        , mp2: [ {style: "req", read: "Eph 4:31-5:11"} ]
        , ep1: [ {style: "req", read: "Jer 24"} ]
        , ep2: [ {style: "req", read: "John 7:25-end"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Jer 25:1-14"}
               , {style: "opt", read: "Jer 25:15-38"} 
               ]
        , mp2: [ {style: "req", read: "Eph 5:22-end"} ]
        , ep1: [ {style: "req", read: "Jer 27:2-end"} ]
        , ep2: [ {style: "req", read: "John 8:1-30"} ]
        }
      }
    , 17:
      { Sunday:
        { title: "Sunday closest to August 31"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezek 11:14-20"} ]
        , mp2: [ {style: "req", read: "Luke 7:36-8:3"} ]
        , ep1: [ {style: "req", read: "Dan 5"} ]
        , ep2: [ {style: "req", read: "Matt 7:1-14"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Jer 28"} ]
        , mp2: [ {style: "req", read: "Eph 6:1-9"} ]
        , ep1: [ {style: "req", read: "Jer 29:1-20"} ]
        , ep2: [ {style: "req", read: "John 8:31-end"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Jer 32:1-15"} ]
        , mp2: [ {style: "req", read: "Eph 6:10-end"} ]
        , ep1: [ {style: "req", read: "Jer 32:16-35"} ]
        , ep2: [ {style: "req", read: "John 9"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Jer 32:36-end"} ]
        , mp2: [ {style: "req", read: "Phil 1:1-11"} ]
        , ep1: [ {style: "req", read: "Jer 33:1-13"} ]
        , ep2: [ {style: "req", read: "John 10:1-21"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Jer 33:14-end"} ]
        , mp2: [ {style: "req", read: "Phil 1:12-end"} ]
        , ep1: [ {style: "opt", read: "Jer 34:1-7"}
               , {style: "req", read: "Jer 34:8-end"} 
               ]
        , ep2: [ {style: "req", read: "John 10:22-end"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "Jer 36"}
               , {style: "req", read: "Jer 37"} 
               ]
        , mp2: [ {style: "req", read: "Phil 2:1-11"} ]
        , ep1: [ {style: "req", read: "Jer 38:1-13"} ]
        , ep2: [ {style: "req", read: "John 11:1-44"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Jer 38:14-end"}
               , {style: "opt", read: "Jer 39"} 
               ]
        , mp2: [ {style: "req", read: "Phil 2:12-end"} ]
        , ep1: [ {style: "req", read: "Jer 40"}
               , {style: "opt", read: "Jer 41"} 
               ]
        , ep2: [ {style: "req", read: "John 11:45-end"} ]
        }
      }
    , 18:
      { Sunday:
        { title: "Sunday closest to September 7"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezek 18:1-4, 19-end"} ]
        , mp2: [ {style: "req", read: "Luke 9:46-end"} ]
        , ep1: [ {style: "req", read: "Dan 6:1-23"}
               , {style: "opt", read: "Dan 6:24-28"} 
               ]
        , ep2: [ {style: "req", read: "Matt 7:15-end"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Jer 42"}
               , {style: "opt", read: "Jer 43"} 
               ]
        , mp2: [ {style: "req", read: "Phil 3"} ]
        , ep1: [ {style: "req", read: "Jer 44"}
               , {style: "opt", read: "Jer 45"} 
               ]
        , ep2: [ {style: "req", read: "John 12:1-19"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Jer 46"}
               , {style: "opt", read: "Jer 47"} 
               ]
        , mp2: [ {style: "req", read: "Phil 4"} ]
        , ep1: [ {style: "req", read: "Jer 48"}
               , {style: "opt", read: "Jer 49"} 
               ]
        , ep2: [ {style: "req", read: "John 12:20-end"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Jer 50"} ]
        , mp2: [ {style: "req", read: "Col 1:1-20"} ]
        , ep1: [ {style: "req", read: "Jer 51"} ]
        , ep2: [ {style: "req", read: "John 13"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezek 1:1-14"} ]
        , mp2: [ {style: "req", read: "Col 1:21-2:7"} ]
        , ep1: [ {style: "req", read: "Ezek 1:15-end"} ]
        , ep2: [ {style: "req", read: "John 14"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezek 2"} ]
        , mp2: [ {style: "req", read: "Col 2:8-19"} ]
        , ep1: [ {style: "req", read: "Ezek 3:1-14"} ]
        , ep2: [ {style: "req", read: "John 15"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "Ezek 3:15-end"} ]
          , mp2: [ {style: "req", read: "Col 2:20-3:11"} ]
          , ep1: [ {style: "req", read: "Ezek 8"} ]
          , ep2: [ {style: "req", read: "John 16"} ]
        }
      }
    , 19:
      { Sunday:
        { title: "Sunday closest to September 14"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezek 33:1-11"} ]
        , mp2: [ {style: "req", read: "Luke 10:1-24"} ]
        , ep1: [ {style: "req", read: "Prov 1:20-end"} ]
        , ep2: [ {style: "req", read: "Matt 11:2-19"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezek 9"} ]
        , mp2: [ {style: "req", read: "Col 3:12-4:1"} ]
        , ep1: [ {style: "req", read: "Ezek 11:1-13"} ]
        , ep2: [ {style: "req", read: "John 17"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezek 12:1-16"} ]
        , mp2: [ {style: "req", read: "Col 4:2-end"} ]
        , ep1: [ {style: "req", read: "Ezek 12:17-end"} ]
        , ep2: [ {style: "req", read: "John 18:1-27"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezek 13:1-16"} ]
        , mp2: [ {style: "req", read: "Philemon"} ]
        , ep1: [ {style: "req", read: "Ezek 14"} ]
        , ep2: [ {style: "req", read: "John 18:28-end"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezek 17"} ]
        , mp2: [ {style: "req", read: "1 Thess 1"} ]
        , ep1: [ {style: "req", read: "Ezek 20:1-26"} ]
        , ep2: [ {style: "req", read: "John 19:1-30"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezek 20:27-44"} ]
        , mp2: [ {style: "req", read: "1 Thess 2:1-16"} ]
        , ep1: [ {style: "req", read: "Ezek 22:23-end"} ]
        , ep2: [ {style: "req", read: "John 19:31-end"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "Ezek 24:15-end"} ]
          , mp2: [ {style: "req", read: "1 Thess 2:17-end, 3"} ]
          , ep1: [ {style: "req", read: "Ezek 28:1-19"} ]
          , ep2: [ {style: "req", read: "John 20"} ]
        }
      }
    , 20:
      { Sunday:
        { title: "Sunday closest to September 21"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezek 34:1-16"} ]
        , mp2: [ {style: "req", read: "Luke 11:37-end"} ]
        , ep1: [ {style: "req", read: "Prov 8:1-17"} ]
        , ep2: [ {style: "req", read: "Matt 11:20-end"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezek 33:12-20"} ]
        , mp2: [ {style: "req", read: "1 Thess 4:1-12"} ]
        , ep1: [ {style: "req", read: "Ezek 33:21-end"} ]
        , ep2: [ {style: "req", read: "John 21"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezek 34:17-end"} ]
        , mp2: [ {style: "req", read: "1 Thess 4:13-5:11"} ]
        , ep1: [ {style: "req", read: "Ezek 36:22-end"} ]
        , ep2: [ {style: "req", read: "Heb 1"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezek 37:1-14"} ]
        , mp2: [ {style: "req", read: "1 Thess 5:12-end"} ]
        , ep1: [ {style: "req", read: "Ezek 37:15-end"} ]
        , ep2: [ {style: "req", read: "Heb 2"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezra 1"}
               , {style: "opt", read: "Ezra 2"} 
               ]
        , mp2: [ {style: "req", read: "2 Thess 1"} ]
        , ep1: [ {style: "req", read: "Ezra 3"} ]
        , ep2: [ {style: "req", read: "Heb 3"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezra 4"} ]
        , mp2: [ {style: "req", read: "2 Thess 2"} ]
        , ep1: [ {style: "req", read: "Hag 1:1-2:9"} ]
        , ep2: [ {style: "req", read: "Heb 4:1-13"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "Zech 1:1-17"} ]
          , mp2: [ {style: "req", read: "2 Thess 3"} ]
          , ep1: [ {style: "req", read: "Zech 1:18-end, 2"} ]
          , ep2: [ {style: "req", read: "Heb 4:14-5:10"} ]
        }
      }
    , 21:
      { Sunday:
        { title: "Sunday closest to September 28"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Prov 14:31-15:17"} ]
        , mp2: [ {style: "req", read: "Luke 12:1-21"} ]
        , ep1: [ {style: "req", read: "Prov 8:1, 22-end"} ]
        , ep2: [ {style: "req", read: "Matt 12:22-45"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Zech 3"} ]
        , mp2: [ {style: "req", read: "1 Tim 1:1-17"} ]
        , ep1: [ {style: "req", read: "Zech 4"}
               , {style: "opt", read: "Zech 5"} 
               ]
        , ep2: [ {style: "req", read: "Heb 5:11-end, 6"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Zech 6"} ]
        , mp2: [ {style: "req", read: "1 Tim 1:18-end, 2"} ]
        , ep1: [ {style: "req", read: "Zech 7"}
               , {style: "opt", read: "Zech 8"} 
               ]
        , ep2: [ {style: "req", read: "Heb 7"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Zech 9"}
               , {style: "opt", read: "Zech 10"} 
               ]
        , mp2: [ {style: "req", read: "1 Tim 3"} ]
        , ep1: [ {style: "req", read: "Zech 11"}
               , {style: "opt", read: "Zech 12"} 
               ]
        , ep2: [ {style: "req", read: "Heb 8"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Zech 13"}
               , {style: "opt", read: "Zech 14"} 
               ]
        , mp2: [ {style: "req", read: "1 Tim 4"} ]
        , ep1: [ {style: "req", read: "Hag 2:10-end"} ]
        , ep2: [ {style: "req", read: "Heb 9:1-14"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezra 5"} ]
        , mp2: [ {style: "req", read: "1 Tim 5"} ]
        , ep1: [ {style: "req", read: "Ezra 6"} ]
        , ep2: [ {style: "req", read: "Heb 9:15-end"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezra 7"} ]
        , mp2: [ {style: "req", read: "1 Tim 6"} ]
        , ep1: [ {style: "req", read: "Ezra 8:15-end"} ]
        , ep2: [ {style: "req", read: "Heb 10:1-18"} ]
        }
      }
    , 22:
      { Sunday:
        { title: "Sunday closest to October 5"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Prov 31:10-end"} ]
        , mp2: [ {style: "req", read: "Luke 12:22-34"} ]
        , ep1: [ {style: "req", read: "Jonah 3,4"} ]
        , ep2: [ {style: "req", read: "Matt 13:44-end"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ezra 9"} ]
        , mp2: [ {style: "req", read: "Titus 1:1-2:8"} ]
        , ep1: [ {style: "req", read: "Ezra 10:1-19 "} ]
        , ep2: [ {style: "req", read: "Heb 10:19-end"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Neh 1"} ]
        , mp2: [ {style: "req", read: "Titus 2:9-end, 3"} ]
        , ep1: [ {style: "req", read: "Neh 2"} ]
        , ep2: [ {style: "req", read: "Heb 11:1-16"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Neh 4"} ]
        , mp2: [ {style: "req", read: "2 Tim 1"} ]
        , ep1: [ {style: "req", read: "Neh 5"} ]
        , ep2: [ {style: "req", read: "Heb 11:17-end"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Neh 6:1-7:4"} ]
        , mp2: [ {style: "req", read: "2 Tim 2"} ]
        , ep1: [ {style: "req", read: "Neh 8"} ]
        , ep2: [ {style: "req", read: "Heb 12:1-13"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Neh 9:1-23"} ]
        , mp2: [ {style: "req", read: "2 Tim 3"} ]
        , ep1: [ {style: "req", read: "Neh 9:24-end"} ]
        , ep2: [ {style: "req", read: "Heb 12:14-end"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "Neh 12:17-end"}
               , {style: "req", read: "Neh 13"} 
               ]
        , mp2: [ {style: "req", read: "2 Tim 4"} ]
        , ep1: [ {style: "req", read: "Dan 1"} ]
        , ep2: [ {style: "req", read: "Heb 13"} ]
        }
      }
    , 23:
      { Sunday:
        { title: "Sunday closest to October 12"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Wisd 2"}
               , {style: "alt", read: "Prov 2"} 
               ]
        , mp2: [ {style: "req", read: "Luke 12:35-end"} ]
        , ep1: [ {style: "req", read: "Ecclus 4:11-28"}
               , {style: "alt", read: "Dan 1"} 
               ]
        , ep2: [ {style: "req", read: "Matt 14:13-33"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Dan 2:1-24"} ]
        , mp2: [ {style: "req", read: "Jas 1:1-11"} ]
        , ep1: [ {style: "req", read: "Dan 2:25-end"} ]
        , ep2: [ {style: "req", read: "Jas 1:12-end"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Dan 4:1-18"} ]
        , mp2: [ {style: "req", read: "Jas 2:1-13"} ]
        , ep1: [ {style: "req", read: "Dan 4:19-end"} ]
        , ep2: [ {style: "req", read: "Jas 2:14-end"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "opt", read: "Dan 7:1-8"}
               , {style: "req", read: "Dan 7:9-end"}
               , {style: "opt", read: "Dan 8"} 
               ]
        , mp2: [ {style: "req", read: "Jas 3"} ]
        , ep1: [ {style: "req", read: "Dan 9"} ]
        , ep2: [ {style: "req", read: "Jas 4"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Dan 10"}
               , {style: "opt", read: "Dan 11"} 
               ]
        , mp2: [ {style: "req", read: "Jas 5"} ]
        , ep1: [ {style: "req", read: "Dan 12"} ]
        , ep2: [ {style: "req", read: "1 Pet 1:1-12"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Esther 1"} ]
        , mp2: [ {style: "req", read: "1 Pet 1:13-end"} ]
        , ep1: [ {style: "req", read: "Esther 2"} ]
        , ep2: [ {style: "req", read: "1 Pet 2:1-10"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "Esther 3"} ]
          , mp2: [ {style: "req", read: "1 Pet 2:11-3:7"} ]
          , ep1: [ {style: "req", read: "Esther 4,5"} ]
          , ep2: [ {style: "req", read: "1 Pet 3:8-end"} ]
        }
      }
    , 24:
      { Sunday:
        { title: "Sunday closest to October 19"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Wisd 4:7-17"}
               , {style: "alt", read: "Prov 9:1-11"} 
               ]
        , mp2: [ {style: "req", read: "Luke 13:18-end"} ]
        , ep1: [ {style: "req", read: "Ecclus 4:29-6:1"}
               , {style: "alt", read: "Dan 2:1-23"} 
               ]
        , ep2: [ {style: "req", read: "Matt 16:13-end"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Esther 6,7"} ]
        , mp2: [ {style: "req", read: "1 Pet 4:1-11"} ]
        , ep1: [ {style: "req", read: "Esther 8"}
               , {style: "opt", read: "Esther 9,10"} 
               ]
        , ep2: [ {style: "req", read: "1 Pet 4:12-end"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Eccles 1"} ]
        , mp2: [ {style: "req", read: "1 Pet 5"} ]
        , ep1: [ {style: "req", read: "Eccles 2:1-23"}
               , {style: "opt", read: "Eccles 2:24-26"} 
               ]
        , ep2: [ {style: "req", read: "1 John 1:1-2:6"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Eccles 3"} ]
        , mp2: [ {style: "req", read: "1 John 2:7-17"} ]
        , ep1: [ {style: "req", read: "Eccles 4"} ]
        , ep2: [ {style: "req", read: "1 John 2:18-end"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Eccles 5"} ]
        , mp2: [ {style: "req", read: "1 John 3:1-18"} ]
        , ep1: [ {style: "req", read: "Eccles 6:1-7:14"} ]
        , ep2: [ {style: "req", read: "1 John 3:19-4:6"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Eccles 7:15-end"} ]
        , mp2: [ {style: "req", read: "1 John 4:7-end"} ]
        , ep1: [ {style: "req", read: "Eccles 8"} ]
        , ep2: [ {style: "req", read: "1 John 5"} ]
        }
      , Saturday:
        { title: "Saturday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Eccles 9"}
               , {style: "opt", read: "Eccles 10"} 
               ]
        , mp2: [ {style: "req", read: "2 John"} ]
        , ep1: [ {style: "opt", read: "Eccles 11"}
               , {style: "req", read: "Eccles 12"} 
               ]
        , ep2: [ {style: "req", read: "3 John"} ]
        }
      }
    , 25:
      { Sunday:
        { title: "Sunday closest to October 26"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Wisd 6:1-21"}
               , {style: "alt", read: "Prov 16:9-20"} 
               ]
        , mp2: [ {style: "req", read: "Luke 14:15-end"} ]
        , ep1: [ {style: "req", read: "Ecclus 11:7-28"}
               , {style: "alt", read: "Dan 2:24-45"} 
               ]
        , ep2: [ {style: "req", read: "Matt 18:1-20"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Macc 1:1-19"} ]
        , mp2: [ {style: "req", read: "Acts 1"} ]
        , ep1: [ {style: "req", read: "1 Macc 1:20-40"} ]
        , ep2: [ {style: "req", read: "Acts 2:1-21"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Macc 1:41-end"} ]
        , mp2: [ {style: "req", read: "Acts 2:22-end"} ]
        , ep1: [ {style: "req", read: "1 Macc 2:1-28"} ]
        , ep2: [ {style: "req", read: "Acts 3:1-4:4"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Macc 2:29-48"} ]
        , mp2: [ {style: "req", read: "Acts 4:5-31"} ]
        , ep1: [ {style: "req", read: "1 Macc 2:49-end"} ]
        , ep2: [ {style: "req", read: "Acts 4:32-5:11"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Macc 3:1-26"} ]
        , mp2: [ {style: "req", read: "Acts 5:12-end"} ]
        , ep1: [ {style: "req", read: "1 Macc 3:27-41"} ]
        , ep2: [ {style: "req", read: "Acts 6:1-7:16"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Macc 4:1-25"} ]
        , mp2: [ {style: "req", read: "Acts 7:17-34"} ]
        , ep1: [ {style: "req", read: "1 Macc 4:26-35"} ]
        , ep2: [ {style: "req", read: "Acts 7:35-8:4"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "1 Macc 4:36-end"} ]
          , mp2: [ {style: "req", read: "Acts 8:4-25"} ]
          , ep1: [ {style: "req", read: "1 Macc 6:1-17"} ]
          , ep2: [ {style: "req", read: "Acts 8:26-end"} ]
        }
      }
    , 26:
      { Sunday:
        { title: "Sunday closest to November 2"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Wisd 7:15-8:1"}
               , {style: "alt", read: "Prov 25:11-end"} 
               ]
        , mp2: [ {style: "req", read: "Luke 15:1-10"} ]
        , ep1: [ {style: "req", read: "Ecclus 15:11-end"}
               , {style: "alt", read: "Dan 9:1-19"} 
               ]
        , ep2: [ {style: "req", read: "Matt 21:12-32"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Macc 6:18-47"} ]
        , mp2: [ {style: "req", read: "Acts 9:1-31"} ]
        , ep1: [ {style: "req", read: "1 Macc 6:48-end"} ]
        , ep2: [ {style: "req", read: "Acts 9:32-end"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Macc 7:1-20"} ]
        , mp2: [ {style: "req", read: "Acts 10:1-23"} ]
        , ep1: [ {style: "req", read: "1 Macc 7:21-end"} ]
        , ep2: [ {style: "req", read: "Acts 10:24-end"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "1 Macc 9:1-22"} ]
        , mp2: [ {style: "req", read: "Acts 11:1-18"} ]
        , ep1: [ {style: "req", read: "1 Macc 13:41-end"}
               , {style: "opt", read: "1 Macc 14:1-15"} 
               ]
        , ep2: [ {style: "req", read: "Acts 11:19-end"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ecclus 1:1-10"} ]
        , mp2: [ {style: "req", read: "Acts 12:1-24"} ]
        , ep1: [ {style: "req", read: "Ecclus 1:1 1-end"} ]
        , ep2: [ {style: "req", read: "Acts 12:25-13:12"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ecclus 2"} ]
        , mp2: [ {style: "req", read: "Acts 13:13-43"} ]
        , ep1: [ {style: "req", read: "Ecclus 6:14-31"} ]
        , ep2: [ {style: "req", read: "Acts 13:44-14:7"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "Ecclus 7:27-end"} ]
          , mp2: [ {style: "req", read: "Acts 14:8-end"} ]
          , ep1: [ {style: "req", read: "Ecclus 10:6-8, 12-24"} ]
          , ep2: [ {style: "req", read: "Acts 15:1-21"} ]
        }
      }
    , 27:
      { Sunday:
        { title: "Sunday closest to November 9"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "2 Esdras 16:53-67"}
               , {style: "alt", read: "Zech 1:7-end"} 
               ]
        , mp2: [ {style: "req", read: "Luke 17:1-10"} ]
        , ep1: [ {style: "req", read: "Baruch 3:1-14"}
               , {style: "alt", read: "Zech 9:9-12, 9:16"} 
               ]
        , ep2: [ {style: "req", read: "Matt 21:33-end"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ecclus 14:20-15:10"} ]
        , mp2: [ {style: "req", read: "Acts 15:22-35"} ]
        , ep1: [ {style: "req", read: "Ecclus 16:1-14"} ]
        , ep2: [ {style: "req", read: "Acts 15:36-16:5"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ecclus 16:17-end"} ]
        , mp2: [ {style: "req", read: "Acts 16:6-end"} ]
        , ep1: [ {style: "req", read: "Ecclus 17:1-24"} ]
        , ep2: [ {style: "req", read: "Acts 17:1-15"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ecclus 18:15-end"} ]
        , mp2: [ {style: "req", read: "Acts 17:16-end"} ]
        , ep1: [ {style: "req", read: "Ecclus 19:13-end"} ]
        , ep2: [ {style: "req", read: "Acts 18:1-23"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ecclus 20:1-20"} ]
        , mp2: [ {style: "req", read: "Acts 18:24-19:7"} ]
        , ep1: [ {style: "req", read: "Ecclus 20:21-end"} ]
        , ep2: [ {style: "req", read: "Acts 19:8-20"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ecclus 21:1-17"} ]
        , mp2: [ {style: "req", read: "Acts 19:21-end"} ]
        , ep1: [ {style: "req", read: "Ecclus 22:6-22"} ]
        , ep2: [ {style: "req", read: "Acts 20:1-16"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "Ecclus 22:27-23:15"} ]
          , mp2: [ {style: "req", read: "Acts 20:17-end"} ]
          , ep1: [ {style: "req", read: "Ecclus 24:1-22"} ]
          , ep2: [ {style: "req", read: "Acts 21:1-16"} ]
        }
      }
    , 28:
      { Sunday:
        { title: "Sunday closest to November 16"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Prayer of Manasses 1"}
               , {style: "alt", read: "Zech 11"} 
               ]
        , mp2: [ {style: "req", read: "Luke 20:1-19"} ]
        , ep1: [ {style: "req", read: "Baruch 4:36-end, 5"}
               , {style: "alt", read: "Zech 13"} 
               ]
        , ep2: [ {style: "req", read: "Matt 23:1-22"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ecclus 24:23-end"} ]
        , mp2: [ {style: "req", read: "Acts 21:17-36"} ]
        , ep1: [ {style: "req", read: "Ecclus 31:1-11"} ]
        , ep2: [ {style: "req", read: "Acts 21:37-22:12"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ecclus 34:9-end"} ]
        , mp2: [ {style: "req", read: "Acts 22:23-23:11"} ]
        , ep1: [ {style: "req", read: "Ecclus 35"} ]
        , ep2: [ {style: "req", read: "Acts 23:12-end"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ecclus 37:1-15"} ]
        , mp2: [ {style: "req", read: "Acts 24:1-23"} ]
        , ep1: [ {style: "req", read: "Ecclus 38:1-14"} ]
        , ep2: [ {style: "req", read: "Acts 24:24-25:12"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ecclus 39:1-11"} ]
        , mp2: [ {style: "req", read: "Acts 25:13-end"} ]
        , ep1: [ {style: "req", read: "Ecclus 39:13-end"} ]
        , ep2: [ {style: "req", read: "Acts 26"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Ecclus 43:1-12"} ]
        , mp2: [ {style: "req", read: "Acts 27:1-26"} ]
        , ep1: [ {style: "req", read: "Ecclus 50:1-24"} ]
        , ep2: [ {style: "req", read: "Acts 27:27-end"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "Ecclus 51:1-12"} ]
          , mp2: [ {style: "req", read: "Acts 28:1-15"} ]
          , ep1: [ {style: "req", read: "Ecclus 51:13-end"} ]
          , ep2: [ {style: "req", read: "Acts 28:16-end"} ]
        }
      }
    , 29:
      { Sunday:
        { title: "Sunday closest to November 23"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Eccles 11,12"} ]
        , mp2: [ {style: "req", read: "Heb 11:1-16"} ]
        , ep1: [ {style: "req", read: "Mal 3:13-end, 4"} ]
        , ep2: [ {style: "req", read: "Heb 11:17-12:2"} ]
        }
      , Monday:
        { title: "Monday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Wisd 1"} ]
        , mp2: [ {style: "req", read: "Matt 5:1-16"} ]
        , ep1: [ {style: "req", read: "Wisd 2"} ]
        , ep2: [ {style: "req", read: "Rev 1"} ]
        }
      , Tuesday:
        { title: "Tuesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Wisd 3:1-9"} ]
        , mp2: [ {style: "req", read: "Matt 5:17-end"} ]
        , ep1: [ {style: "req", read: "Wisd 4:7-end"} ]
        , ep2: [ {style: "req", read: "Rev 2:1-17"} ]
        }
      , Wednesday:  
        { title: "Wednesday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Wisd 5:1-16"} ]
        , mp2: [ {style: "req", read: "Matt 6:1-18"} ]
        , ep1: [ {style: "req", read: "Wisd 6:1-21"} ]
        , ep2: [ {style: "req", read: "Rev 2:18-3:6"} ]
        }
      , Thursday:
        { title: "Thursday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Wisd 7:15-8:4"} ]
        , mp2: [ {style: "req", read: "Matt 6:19-end"} ]
        , ep1: [ {style: "req", read: "Wisd 8:5-18"} ]
        , ep2: [ {style: "req", read: "Rev 3:7-end"} ]
        }
      , Friday:
        { title: "Friday"
        , colors: ["green"]
        , mp1: [ {style: "req", read: "Wisd 8:21-end, 9"} ]
        , mp2: [ {style: "req", read: "Matt 7:1-14"} ]
        , ep1: [ {style: "req", read: "Wisd 10:15-11:10"} ]
        , ep2: [ {style: "req", read: "Rev 4"} ]
        }
      , Saturday:
        { title: "Saturday"
          , colors: ["green"]
          , mp1: [ {style: "req", read: "Wisd 11:21-12:2"} ]
          , mp2: [ {style: "req", read: "Matt 7:15-end"} ]
          , ep1: [ {style: "req", read: "Wisd 12:12-21"} ]
          , ep2: [ {style: "req", read: "Rev 5"} ]
        } // end of proper 29
      } // end of propers
    }
  }
} // end of mpep
};