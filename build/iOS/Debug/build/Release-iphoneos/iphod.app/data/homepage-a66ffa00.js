var Context = require("Modules/Context");

function goToPage(arg) {
  router.push(arg.data.page);
}



module.exports = {
    pages: Context.pages
  , goToPage: goToPage
}