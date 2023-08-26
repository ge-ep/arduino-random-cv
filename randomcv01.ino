#include <Adafruit_MCP4728.h>
#include <Wire.h>

Adafruit_MCP4728 mcp;

void setup(void) {
  Serial.begin(115200);
  while (!Serial)
    delay(10); // will pause Zero, Leonardo, etc until serial console opens

  Serial.println("Adafruit MCP4728 test!");

  // Try to initialize!
  if (!mcp.begin()) {
    Serial.println("Failed to find MCP4728 chip");
    while (1) {
      delay(10);
    }
  }
}

void loop() {
  // Generate random values for channels A and B
  uint16_t valueA = random(4096);  // 0 to 4095
  uint16_t valueB = random(4096);  // 0 to 4095
  
  // Set the channel values for A and B
  mcp.setChannelValue(MCP4728_CHANNEL_A, valueA);
  mcp.setChannelValue(MCP4728_CHANNEL_B, valueB);
  
  // Generate a slower random value for channel D
  uint16_t valueD = random(4096);  // 0 to 4095
  
  // Set the channel value for D
  mcp.setChannelValue(MCP4728_CHANNEL_D, valueD);
  
  // Print the generated values to the serial console
  Serial.print("Channel A: "); Serial.print(valueA);
  Serial.print("\tChannel B: "); Serial.print(valueB);
  Serial.print("\tChannel D: "); Serial.println(valueD);

  // Generate random delay times for channels A, B, and D (1000 to 3000 ms)
  int delayA = random(1000, 3001);
  int delayB = random(1000, 3001);
  int delayD = random(1000, 3001);
  
  // Delay for the calculated times for channels A, B, and D
  delay(delayA);
  delay(delayB);
  delay(delayD);
}
