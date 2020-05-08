#include <RGBLED.h>

int redPin=11;
int greenPin=9;
int bluePin=6;
int randRed;
int randGreen;
int randBlue;

RGBLED rgbLED(redPin,greenPin,bluePin,COMMON_CATHODE);

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT); 
  pinMode(bluePin, OUTPUT);
  
}

void loop() {

  /*randBlue=random(0,256);
  randGreen=random(0,256);
  randRed=random (0,256);
  Serial.print("Red: "); Serial.println(randRed);
  Serial.print("Green: "); Serial.println(randGreen);
  Serial.print("Blue: "); Serial.println(randBlue);
  analogWrite(redPin,randRed);
  analogWrite(greenPin,randGreen);
  analogWrite(bluePin,randBlue);
  delay(1500);
  analogWrite(redPin,0);
  analogWrite(greenPin,0);
  analogWrite(bluePin,0);
  delay(500);
  Serial.println(" "); 

  rgbLED.writeRandom(); //Set the RGBLED to show a random color
  Serial.println("(r,g,b)=(" + String(rgbLED.redValue) + "," + String(rgbLED.greenValue) + "," + String(rgbLED.blueValue) + ")"); //Prints the RGB values to the serial port
  delay(2500);
  Serial.println(" "); */

  analogWrite(redPin,20);
  analogWrite(greenPin,0);
  analogWrite(bluePin,80);
  

}
