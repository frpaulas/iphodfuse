var BookName = require('./book_names')
  ;
var web = {
  "1CH": require('../Modules/Books/chronicles1.js').chronicles1
, "1CO": require('../Modules/Books/corinthians1.js').corinthians1
, "1ES": require('../Modules/Books/esdras1.js').esdras1
, "1JN": require('../Modules/Books/john1.js').john1
, "1KI": require('../Modules/Books/kings1.js').kings1
, "1MA": require('../Modules/Books/maccabees1.js').maccabees1
, "1PE": require('../Modules/Books/peter1.js').peter1
, "1SA": require('../Modules/Books/samuel1.js').samuel1
, "1TH": require('../Modules/Books/thessalonians1.js').thessalonians1
, "1TI": require('../Modules/Books/timothy1.js').timothy1
, "2CH": require('../Modules/Books/chronicles2.js').chronicles2
, "2CO": require('../Modules/Books/corinthians2.js').corinthians2
, "2ES": require('../Modules/Books/esdras2.js').esdras2
, "2JN": require('../Modules/Books/john2.js').john2
, "2KI": require('../Modules/Books/kings2.js').kings2
, "2MA": require('../Modules/Books/maccabees2.js').maccabees2
, "2PE": require('../Modules/Books/peter2.js').peter2
, "2SA": require('../Modules/Books/samuel2.js').samuel2
, "2TH": require('../Modules/Books/thessalonians2.js').thessalonians2
, "2TI": require('../Modules/Books/timothy2.js').timothy2
, "3JN": require('../Modules/Books/john3.js').john3
, "3MA": require('../Modules/Books/maccabees3.js').maccabees3
, "4MA": require('../Modules/Books/maccabees4.js').maccabees4
, "ACT": require('../Modules/Books/acts.js').acts
, "AMO": require('../Modules/Books/amos.js').amos
, "BAR": require('../Modules/Books/baruch.js').baruch
, "COL": require('../Modules/Books/colossians.js').colossians
, "DAG": require('../Modules/Books/daniel_greek.js').daniel_greek
, "DAN": require('../Modules/Books/daniel.js').daniel
, "DEU": require('../Modules/Books/deuteronomy.js').deuteronomy
, "ECC": require('../Modules/Books/ecclesiastes.js').ecclesiastes
, "EPH": require('../Modules/Books/ephesians.js').ephesians
, "ESG": require('../Modules/Books/esther_greek.js').esther_greek
, "EST": require('../Modules/Books/esther.js').esther
, "EXO": require('../Modules/Books/exodus.js').exodus
, "EZK": require('../Modules/Books/ezekiel.js').ezekiel
, "EZR": require('../Modules/Books/ezra.js').ezra
, "GAL": require('../Modules/Books/galatians.js').galatians
, "GEN": require('../Modules/Books/genesis.js').genesis
, "HAB": require('../Modules/Books/habakkuk.js').habakkuk
, "HAG": require('../Modules/Books/haggai.js').haggai
, "HEB": require('../Modules/Books/hebrews.js').hebrews
, "HOS": require('../Modules/Books/hosea.js').hosea
, "ISA": require('../Modules/Books/isaiah.js').isaiah
, "JAS": require('../Modules/Books/james.js').james
, "JDG": require('../Modules/Books/judges.js').judges
, "JDT": require('../Modules/Books/judith.js').judith
, "JER": require('../Modules/Books/jeremiah.js').jeremiah
, "JHN": require('../Modules/Books/john.js').john
, "JOB": require('../Modules/Books/job.js').job
, "JOL": require('../Modules/Books/joel.js').joel
, "JON": require('../Modules/Books/jonah.js').jonah
, "JOS": require('../Modules/Books/joshua.js').joshua
, "JUD": require('../Modules/Books/jude.js').jude
, "LAM": require('../Modules/Books/lamentations.js').lamentations
, "LEV": require('../Modules/Books/leviticus.js').leviticus
, "LUK": require('../Modules/Books/luke.js').luke
, "MAL": require('../Modules/Books/malachi.js').malachi
, "MAN": require('../Modules/Books/prayer_of_manasses.js').prayer_of_manasses
, "MAT": require('../Modules/Books/matthew.js').matthew
, "MIC": require('../Modules/Books/micah.js').micah
, "MRK": require('../Modules/Books/mark.js').mark
, "NAM": require('../Modules/Books/nahum.js').nahum
, "NEH": require('../Modules/Books/nehemiah.js').nehemiah
, "NUM": require('../Modules/Books/numbers.js').numbers
, "OBA": require('../Modules/Books/obadiah.js').obadiah
, "PHM": require('../Modules/Books/philemon.js').philemon
, "PHP": require('../Modules/Books/philippians.js').philippians
, "PRO": require('../Modules/Books/proverbs.js').proverbs
, "PS2": require('../Modules/Books/psalm151.js').psalm151
, "PSA": require('../Modules/Books/psalms.js').psalms
, "REV": require('../Modules/Books/revelation.js').revelation
, "ROM": require('../Modules/Books/romans.js').romans
, "RUT": require('../Modules/Books/ruth.js').ruth
, "SIR": require('../Modules/Books/sirach.js').sirach
, "SNG": require('../Modules/Books/song_of_solomon.js').song_of_solomon
, "TIT": require('../Modules/Books/titus.js').titus
, "TOB": require('../Modules/Books/tobit.js').tobit
, "WIS": require('../Modules/Books/wisdom_of_solomon.js').wisdom_of_solomon
, "ZEC": require('../Modules/Books/zechariah.js').zechariah
, "ZEP": require('../Modules/Books/zephaniah.js').zephaniah
}; // end of web
function getReading(book, chapter, vsFrom = 1, vsTo = 999) {
  var title = BookName.book_title(book)
    , web_name = BookName.web_name(book)
    , bk = web[web_name]
    , chap = bk[chapter]
    , vss = Object.keys(chap)
            .map( function(x) { return {number: x, vs: chap[x]} }) 
            .filter(function(tuple) { return tuple.number >= vsFrom && tuple.number <= vsTo})
    ;
  return {title: title, vss: vss};
};

module.exports = {
    getReading: getReading
//  , web: web
};

