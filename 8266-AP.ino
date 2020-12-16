/* ESP8266 Access Point Mode. Sets up the ESP8266 as a local WiFi network devices can connect to. */

#include <ESP8266WiFi.h>  // Library to make life easy

/* Defining variables for the network name and password. The name is what will show up to other devices
and what will need to be entered in the code of devices attempting to connect. The password will also
need to be used by any device seeking to join this network. */

String netName = "Arctic Science Network";
String netPass = "Physics!";

/* Access Point set up lives in the setup function since it needs to happen once
and remain constantly enabled, it cannot be in a loop function because it will constantly
go down and come up making communication difficult if not impossible! */

void setup() {
  Serial.begin(115200); // Setting a decent baud rate of 115200
  Serial.println(); // Goes to next line
  
  Serial.print("Setting Up Network...");  // Message to show the user the network set up is beginning
  bool result = WiFi.softAP(netName, netPass);  // Plugs in variables defined above. Also uses the WiFi class and softAP method from the library.
  if (result == True) { // This statement checks to ensure the result of the execution as a bool. If true, the set up worked and it carries on.
    Serial.println("Network is Ready.");  // Telling the user what happened
   }
   else {
    Serial.println("Network Set-up Failed.");
   }
}

void loop() {
  /* Nothing to see here (for now). This is where you would use HTTP requests to reach out to other sensors.
  The AP can use a HTTP GET request to the sensors or the sensors can use HTTP POST. Post is probably the best way to go here.
}
