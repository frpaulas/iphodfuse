var Observable = require("FuseJS/Observable")
  , bcp = require("Modules/bcp")
  , ps = {}
  , psName = Observable()
  , psTitle = Observable()
  , vss = Observable()
  , directiveVisibility = Observable('Collapsed')

function goToPage(arg) {
  router.push(arg.data.page);
}

// function setPsalm(n) {
//   ps = (psNum === n) ? ps : bcp.getPsalm(n, 1, 999)
//   psNum = n
//   return ps
// }

function setPsalm(ps) {
  psName.value = ps.name
  psTitle.value = ps.title
  vss.clear()
  vss.addAll(ps.vss)
}

function psalm4(){ setPsalm(bcp.getPsalm(4)) }
function psalm31(){ setPsalm(bcp.getPsalm(31)) }
function psalm91(){ setPsalm(bcp.getPsalm(91)) }
function psalm134(){ setPsalm(bcp.getPsalm(134)) }

function directives(){
  directiveVisibility.value = (directiveVisibility.value === "Collapsed") ? "Visible" : "Collapsed"
}

// function name (args) {
//   // console.log("NAME: ", args)
//   return "BLORKY"
// }
// name = function(n, vsFrom, vsTo) { return setPsalm(n).name }
// title = function(n, vsFrom, vsTo) { return setPsalm(n).title }
// vss = function(n, vsFrom, vsTo) { setPsalm(n).vss.slice(vsFrom - 1, vsTo) }
module.exports = {
    psName: psName
  , psTitle: psTitle
  , vss: vss
  , psalm4: psalm4
  , psalm31: psalm31
  , psalm91: psalm91
  , psalm134: psalm134
  , directives: directives
  , directiveVisibility: directiveVisibility
}
