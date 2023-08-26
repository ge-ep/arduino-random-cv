# arduino-random-cv
<p>A project using the hardware set-up outlined by Takumi Ogata in the <a target="_blank" href="https://youtu.be/PaWp6zny83I?si=1tmL2BKSnuteJ7N7">4 CVs from Arduino video</a>.</p>
<br/>
<p><b>Required Hardware</b></p>
<ul><li>Arduino - Uno or Nano should work, though so far I've only tested this with Arduino Uno</li>
    <li><a target="_blank" href="https://www.adafruit.com/product/4470">Adafruit MCP4728 Quad i2c DAC</a></li>
    <li>Wire and breadboard for testing</li>
    <li>Mono jacks; I used <a target="_blank" href="https://www.digikey.ca/en/products/detail/kycon-inc/STX-3120-3B/9990113">these</a> as they are breadboard friendly, but any jack will do in a pinch, really. 
        If you want to faff around with wired PJ301-Ms or Thonkiconn jacks, go for it.</li></ul>
<p><b>Suggested Reading</b></p>
<ul><li><a target="_blank" href="https://learn.adafruit.com/adafruit-mcp4728-i2c-quad-dac/arduino">This article</a> on how to connect an Arduino and MCP4728 will ensure you get everything set up correctly</li>
    <li>That's about it, really. If you don't know how to upload scripts to an Arduino there's a ton of documentation on <a target="_blank" href="https://www.arduino.cc/en/Guide">their site</a> and lots of walkthrough videos on YouTube to help you along</li>
    <li>The Youtube video linked above - and the rest in his <b>Let's Build a DIY Instrument</b> <a target="_blank" href="https://youtube.com/playlist?list=PLyFkFo29zHvC5oiRAdwvwxADUeLhCm3lV&si=FIBFOQCawkSmabCd">playlist</a> are well worth watching</li></ul>
<p><b>Basic Set-up</b></p>
<ol><li>Solder the headerpins to the MCP4728</li>
    <li>Connect the Arduino to the MCP4728 as described in the Adafruit article linked above</li>
    <li>If you haven't already done so, download the <b>Adafruit MCP4728 Library</b> in the Arduino IDE</li> 
    <li>Run <code>basic_demo.ino</code> first to ensure you're getting the expected voltages (the steps are outlined in the Adafruit article) </li>
    <li>If all is well, wire up your inputs to <b>VA</b>, <b>VB</b>, <b>VC</b>, and <b>VD</b></li>
    <li>At this point I'd run a quick test on the inputs to make sure you've got them all wired up correctly</li>
    <li>Upload the <code>arduino-random-cv.ino</code> sketch on to your Arduino and you should have 4 random CVs from roughly 0 to 5Vs</li></ol>
    <br/>
    <p><b>To Dos</b></p>
    <ul><li>Optimize the code -- I'm a python beginner rn, so it's not optimized at all and probably looks whack to experts</li>
        <li>Make a perfboard layout -- Ultimately I want this to be used with my modular gear, so getting it layed out and working as a Eurorack and/or Kosmo unit is important.</li>
        <li>Incorporate some triggering options -- either physical (reset button? touch pad interation? vactrol input as trigger for randomization?)</li>
        <li>Explore the <b>Vref</b> capabilities of the MCP4720 as this could lead to a Gate/Trigger function</li></ul>
