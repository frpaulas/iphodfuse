var chai = require('chai')
  , expect = require("chai").expect
  , moment = require('moment')
  , bcp = require("../Modules/bcp")
  ;

describe('getPsalm', function () {
  it('returns the psalm name in obj', function () {
    let name = bcp.getPsalm(1).name
    expect(name).to.eql("Psalm 1.")
  })
  it('returns the title in obj', function () {
    let title = bcp.getPsalm(1).title
    expect(title).to.eql('Beatus vir qui non abiit')
  })
  it('returns the entire psalm in obj', function () {
    let vss = bcp.getPsalm(1).vss
      , v1first = vss[0].first
      , vLast2nd = vss[vss.length - 1].second
    expect(v1first).to.eql("Happy are they who have not walked in the counsel of the wicked, * ")
    expect(vLast2nd).to.eql("but the way of the wicked is doomed.")
  })
})

describe ('getPsalm - partial', function () {
  // body...
})