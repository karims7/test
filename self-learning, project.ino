
#include <RGBLED.h>

RGBLED rgbLED(11,9,6,COMMON_CATHODE);
int redPin=11;
int greenPin=9;
int bluePin=6;
String chooseColor;

void setup() {
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
}

void loop() {
  
  Serial.println(" ");
  Serial.println("Please enter a color for the LED.");
  while (Serial.available()==0) {
    };
  chooseColor=Serial.readString();

  if (chooseColor=="red") {
    analogWrite(redPin,255);
    analogWrite(greenPin,0);
    analogWrite(bluePin,0);
    }

  if (chooseColor=="green") {
    analogWrite(redPin,0);
    analogWrite(greenPin,255);
    analogWrite(bluePin,0);
    }

  if (chooseColor=="blue") {
    analogWrite(redPin,0);
    analogWrite(greenPin,0);
    analogWrite(bluePin,255);
    }   

  if (chooseColor=="white") {
    analogWrite(redPin,255);
    analogWrite(greenPin,255);
    analogWrite(bluePin,225);
    }  

  if (chooseColor=="cyan") {
    analogWrite(redPin,0);
    analogWrite(greenPin,255);
    analogWrite(bluePin,255);
    }  

  if (chooseColor=="pink") {
    analogWrite(redPin,255);
    analogWrite(greenPin,0);
    analogWrite(bluePin,255);
    }  

  if (chooseColor=="yellow") {
    analogWrite(redPin,255);
    analogWrite(greenPin,60);
    analogWrite(bluePin,0);
    }  

  if (chooseColor=="purple") {
    analogWrite(redPin,60);
    analogWrite(greenPin,0);
    analogWrite(bluePin,255);
    }  

  if (chooseColor=="orange") {
    analogWrite(redPin,255);
    analogWrite(greenPin,30);
    analogWrite(bluePin,0);
    }  

  if (chooseColor=="turn off") {
    analogWrite(redPin,0);
    analogWrite(greenPin,0);
    analogWrite(bluePin,0);
    Serial.println("");
    Serial.println("The LED is off."); 
    Serial.println("");
    }  
    
  if (chooseColor=="color wheel") {
    Serial.println("");
    Serial.println("Now, showing the color wheel..."); 
    Serial.println("");
    rgbLED.writeColorWheel(25);
    rgbLED.writeColorWheel(25);
    rgbLED.writeColorWheel(25);
    }  

  else if (chooseColor != "blue" && chooseColor != "red" && chooseColor != "green" && chooseColor != "yellow" && chooseColor != "orange" && chooseColor != "purple" && chooseColor != "pink" && chooseColor != "white" && chooseColor != "cyan" && chooseColor != "turn off") {

    Serial.println("");
    Serial.println("Sorry, this color isn't available. Please try red, green, blue, yellow, orange, purple, pink, cyan or white."); 
    Serial.println("To see the color wheel, type in \"color wheel\".");
    Serial.println("If you'd like to turn off the LED, please type in \"turn off\".");
    analogWrite(redPin,0);
    analogWrite(greenPin,0);
    analogWrite(bluePin,0);
    Serial.println("");
    }
    
  
}
