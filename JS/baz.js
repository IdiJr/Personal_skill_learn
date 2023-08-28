#!/usr/bin/node
var Baz = function () {};

Baz.prototype.log = function () {
  console.log('baz!');
};

export.Baz = new Baz()
