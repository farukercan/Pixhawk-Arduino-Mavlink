
#include "C:/Users/luis.Valtierra/Documents/ardupilot/libraries/mavlink/include/mavlink.h"


void setup()
{
  Serial.begin(57600);
  while (!Serial)
  {
    ; // wait for port to connect.
  }
  Serial1.begin(57600);
  while (!Serial1)
  {
    ; // wait for port to connect.
  }
  
  Serial.println("Ready");
  
}
void loop()
{
  while (Serial1.available() > 1 ) 
  {
    Serial.print("Num Bytes: ");
    Serial.println(Serial1.available());
  }
 
  Serial.println("Not yet");
}
