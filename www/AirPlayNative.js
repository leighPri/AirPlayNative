var exec = require('cordova/exec');

module.exports = {

  createAirPlay: function(originx,originy,width,height) {
    exec(null,null, "AirPlayNative", "createAirPlayButton", [originx,originy,width,height]);
  },

  showAirPlay: function() {
    exec(null, null, "AirPlayNative", "showAirPlayButton", []);
  },

  hideAirPlay: function() {
    exec(null, null, "AirPlayNative", "hideAirPlayButton", []);
  }

};
