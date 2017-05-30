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

function psalm119(){ setPsalm(bcp.getPsalm([119, 105, 112])) }

function psalm121(){ setPsalm(bcp.getPsalm([121])) }
function psalm124(){ setPsalm(bcp.getPsalm([124])) }
function psalm126(){ setPsalm(bcp.getPsalm([126])) }

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
  , psalm119: psalm119
  , psalm121: psalm121
  , psalm126: psalm126
  , psalm124: psalm124
  , directives: directives
  , directiveVisibility: directiveVisibility
    // setPsalm: setPsalm
}
