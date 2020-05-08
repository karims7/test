int blueLED=6;
int potPin=A0;
float writeValue;
float readValue;
float blinkLED;


void setup() {
  
  Serial.begin(9600);
  pinMode (blueLED, OUTPUT);
  pinMode (potPin, INPUT);
  
}

void loop() {

 /*readValue=analogRead(potPin);
 writeValue=(255./1023.)*readValue;*/
 readValue=analogRead(potPin);
 blinkLED=(1000./1023.)*readValue+100;
 
 analogWrite(blueLED,0);
 delay(blinkLED);
 analogWrite(blueLED,0);
 delay(blinkLED);

 Serial.println(blinkLED);
 //Serial.println(" milliseconds");

}
