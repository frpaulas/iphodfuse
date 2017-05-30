var Context = require("./Context")

function back() {
  router.goBack()
};

function oneOf(list) {
  list[Math.floor(Math.random()*items.length)];
}

module.exports = {
    back: back
  , oneOf: oneOf
};