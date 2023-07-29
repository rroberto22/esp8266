
#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

const int pinD2 = 4;

void setup() {
  Serial.begin(115200);
  mySwitch.enableReceive(pinD2);
}

void loop() {
  if (mySwitch.available()) {
    Serial.print("Decimal:");
    Serial.println(mySwitch.getReceivedValue());
    
    Serial.print("lenght:");
    Serial.println(mySwitch.getReceivedBitlength());
    
    Serial.print("Pulse lenght:");
    Serial.println(mySwitch.getReceivedDelay());
    
    //Serial.print("Binary:");
    //Serial.println(mySwitch.getReceivedRawdata());
    
    Serial.print("Protocol:");
    Serial.println(mySwitch.getReceivedProtocol());

    Serial.println("-------------------------------------------------------");
    
    
    mySwitch.resetAvailable();
  }
}
