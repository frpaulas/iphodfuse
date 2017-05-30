var bcp = require("Modules/bcp")
  , ps = {}
  , psName = ps.name
  , psTitle = ps.title
  , vss = ps.vss

function goToPage(arg) {
  router.push(arg.data.page);
}

// function setPsalm(n) {
//   ps = (psNum === n) ? ps : bcp.getPsalm(n, 1, 999)
//   psNum = n
//   return ps
// }

function psalm119(){ 
  ps = getPsalm(119, 105, 112) 
  console.log("PS119: ", ps)
}
function psalm121(){ ps = getPsalm(121) }
function psalm124(){ ps = getPsalm(124) }
function psalm126(){ ps = getPsalm(126) }

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
    // setPsalm: setPsalm
}
