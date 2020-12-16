/* This code sets up the ESP8266 as a client to connect to a WiFi network.
For the purpose of this project, we are going to assume it is connecting to another 8266 that
has been set up as a soft access point. The method would be the same regardless. */

#include <ESP8266WiFi.h>  // Includes the WiFi library to make our lives easier

String netName = "Arctic Science Network";  // Defining the name of the network we would like to join.
String netPass = "Physics!";  // Defining the password of the network we would like to join.

/* Setting up the 8266 in client mode is done in the setup() because we don't want it to continually become a client forever on a loop.
We want the 8266 to become a client and then use the loop() to push HTTP requests to the server so we can do things like turn on LEDs,
get data, display webpages, and much more. */

void setup() {
  Serial.begin(115200); // Setting baud rate to a nice 115200
  Serial.println(); // Skips to the next line
  
  WiFi.begin(netName, netPass); // uses the begin method from the WiFi class in the library defined above to start the connection protocol
  Serial.print("Connecting to " + netName + "....");  // Tells the user it is trying to connect. Should look like: Connecting to Arctic Science Network....
  
  /* This while loop is not super necessary but good for UI. It basically prints an extra period to the end
  of the previous statement in serial until the connection is made. It again utilizes the library's WiFi class but this time
  it uses the status method.
  
  This statement can be boiled down to: While the status DOES NOT equal WL_CONNECTED (most likely a bool so really it is just checking
  to see if the statement is TRUE or FALSE) delay 500 milliseconds and print a dot. This method is preferred over If statements because
  the While loop will automatically terminate and move on while an If statement would need more stringent conditions and decision trees
  to get the same result. */
  
  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println(); // Skips a line
  Serial.print("Connected. Your IP Address is: ");  // Tells the user (by printing to the terminal) that it has connected. Prints IP Address.
  Serial.println(WiFi.localIP()); // Uses the WiFi class's (again) localIP method to pull what IP address we have been assigned.
}

void loop() {
  // Nothing here with this model but don't worry it is coming!
}
