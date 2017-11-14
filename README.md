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
      
      
Copyright (c) 2017 Leigh Prince

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
