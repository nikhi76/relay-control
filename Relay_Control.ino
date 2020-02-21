#define BLYNK_PRINT Serial        
#include <ESP8266WiFi.h>        
#include <BlynkSimpleEsp8266.h>        
char auth[] = "U22mKZ69KwuVkNjPiTDA2r6F9RQCQ32q"; // PASTE YOUR AUTHENTICATION CODE HERE        
// Your WiFi credentials.        
char ssid[] = "redmi"; //WIFI NAME        
char pass[] = "nikhi123"; //PASSWORD        
void setup()        
{        
 Serial.begin(9600);        
 Blynk.begin(auth, ssid, pass);        
}        
void loop()        
{        
 Blynk.run();        
}        
