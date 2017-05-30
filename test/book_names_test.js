var chai = require('chai')
  , expect = require('chai').expect
  , BookName = require("../Modules/book_names")
  ;

describe('book_name', function() {
  it('returns lamentations given lamentations', function () {
    expect(BookName.book_name("lamentations")).to.eql('lamentations')
  })
  it('returns Undefined given blork', function () {
    expect(BookName.book_name('blork')).to.eql('Undefined')
  })
  it('returns lamentations given lam', function () {
    expect(BookName.book_name('lam')).to.eql('lamentations')
  })
  it('returns lamentations given la', function () {
    expect(BookName.book_name('la')).to.eql('lamentations')
  })
  it('returns mark given mark', function () {
    expect(BookName.book_name('mark')).to.eql('mark')
  })
  it('returns mark given mrk', function () {
    expect(BookName.book_name('mrk')).to.eql('mark')
  })
  it('returns mark given mk', function () {
    expect(BookName.book_name('mk')).to.eql('mark')
  })
  it('returns mark given mr', function () {
    expect(BookName.book_name('mr')).to.eql('mark')
  })
})

describe('web_name', function () {
  it('returns 1CH given 1 chronicles', function () {
    expect(BookName.web_name('1 chronicles')).to.eql('1CH')
  })
  it('returnd Undefined given blork', function () {
    expect(BookName.web_name('blork')).to.eql('Undefined')
  })
  it('returns 3MA given 3 maccabees', function () {
    expect(BookName.web_name('3 maccabees')).to.eql('3MA')
  })
})

describe('book_title', function () {
  it('returns Zephaniah given zephaniah', function () {
    expect(BookName.book_title('zephaniah')).to.eql('Zephaniah')
  })
  it('returns Undefined given blork', function () {
    expect(BookName.book_title('blork')).to.eql('Undefined')
  })
  it('returns Zephaniah given zep', function () {
    expect(BookName.book_title('zep')).to.eql('Zephaniah')
  })
})