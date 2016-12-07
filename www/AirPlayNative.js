var exec = require('cordova/exec');

module.exports = {

  airplayButtonPress: function() {
    exec(null, null, "AirPlayNative", "airplayButtonPress", []);
  },

  airplayInit: function() {
    exec(null,null, "AirPlayNative", "airplayInit", []);
  }

};
