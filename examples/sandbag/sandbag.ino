#include <DLink.h>

DLinkOrigin dlink(6); //Put your GPIO number here
DataSetOrigin senddata, recvdata;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("===== Starting Battle =====");
  randomSeed(millis());
  senddata.field.species = (unsigned char)random(3, 15);
  senddata.field.effort  = 0;
  senddata.field.victory = DLinkOrigin::LOSE; // Always lose
  senddata.field.version = DLinkOrigin::VER1;
  recvdata = dlink.battle(senddata, true, 1000); // Initiate battle every 1 second
  if (recvdata.frame[0] == 0)
  {
    Serial.println("===== Battle Failure  ====="); // No response
  }
  else
  {
  Serial.println("===== Battle Success  ====="); // Battle initiated success
  Serial.print("frame[0] : 0b");
  Serial.println(recvdata.frame[0], BIN);
  Serial.print("frame[1] : 0b");
  Serial.println(recvdata.frame[1], BIN);
  }
}
