# AirPlayNative

A plugin that allows you to easily add a custom AirPlay button to your Cordova iOS application (no Android support).

## Installation

      cordova plugin add https://github.com/leighPri/AirPlayNative.git
      
## Methods

airplayInit()

      Initializes plugin
      
airplayButtonPress()

      Calls AirPlay action sheet
    
## Example

app.js

      var airplay = cordova.plugins.airplay;
      
      document.addEventListener("deviceready", onDeviceReady, false);

      function onDeviceReady() {
        airplay.airplayInit();
      }
      
      document.getElementById('airplay-btn').click(function() {
        airplay.airplayButtonPress();
      });
     
index.html
      
      <button id="airplay-btn">Click here for AirPlay</button>
      
      
(there are better ways to call initialization and to bind to a button's click event, I only wanted to give a pure JavaScript example)
