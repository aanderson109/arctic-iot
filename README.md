# arctic-iot
IoT connectivity at the top of the world.

I haven't completely tested all of this code yet. Much of it is just from what I remember and writing it out, however I expect to actually test it later. I'll be adding to this regularly as time goes on along with some other stuff.

# code descriptions

## Already Published ##

### 8266-AP.ino ###
This program show you how to set an ESP8266 up as a web server that other devices (clients) can join. I think the limit for the 8266 is 5 in all but this isn't for long term use just familiarizing ourselves with the basic principles surrounding IoT.

### 8266-Client.ino ###
This program shows how to use an ESP8266 to connect to a WiFi network whether it be a regular one at your house or another ESP8266, the methodology is the same.

## Coming Soon ##

### HTTP Requests, Data Transfer ###
The next installation will be using the fundamentals discussed in the previous programs (8266-AP & 8266-Client) to start pulling data and doing something with it. We will do this in a couple different ways. We'll take data from an actual live sensor controlled by another MCU using both HTTP POST and HTTP GET. They work to achieve the same end goal but they are different. We'll explore which is better for what application and why. Essentially, HTTP POST is the client pushing to the server while HTTP GET is the server pulling from the client but we'll dive into that when we get there. Additionally, we will also look pulling data from webpages on the internet and how that works just to learn more about HTTP and how this is useful sometimes.

These will be very barebones as in we will just get the data and display it. We won't use HTML or CSS to make anything look nice or anything like that. It will be simple networking of data.

### Multiple Data Streams & GUI Elements ###
This program will focus more on managing multiple sources of data from either two unique live sensors or two webpages and how to handle that safely. With multiple sources, it isn't super efficient to keep the same barebones look/feel since it can get messy and complicated quick. So, we will dive into making it look nice, neat, and organized using a variety of different methods.

### Raspberry Pi Server/Access Point ###
For a real arctic application, it will be much better to not use an ESP8266 but rather a Raspberry Pi. They are pretty powerful, can get down to super low power consumption, and have the wireless built in. They will be able to act as a more efficient server and data manager. Setting them up applies the same basic fundamentals but now with some python scripting. It isn't too complicated though so we will knock it out pretty quickly.

### RPi Server + 8266 Client ###
Here we will expand off making the RPi an access point and actually send some information to it. Honestly, this plus the access point will probably be one thing together entirely but incase I go down a rabbit hole on either one i'll keep them separate for now.

## The Future ##
This section details some features that can be super helpful but will have to come later in the future once we move past the more fundamental elements.
