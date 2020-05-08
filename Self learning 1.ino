//Pins 3, 5, 6, 9, 10 & 11 have tildes because you use them for analog voltages. The rest are for digitalWrite()[meaning high or low]. 

int blueLED=6; 
int yellowLED=10;

int waitTimeOn=550;
int waitTimeOff=305;

int waitTimeOn2=550;
int waitTimeOff2=305;

int yellowBlink=10;
int blueBlink=10;

int writeValueBlue;
int writeValueYellow;

float voltsBlue;
float voltsYellow;

String yellowMessage= "The yellow LED is blinking.";
// /*    */


void setup() {
  
  pinMode(blueLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
  Serial.begin(9600);

  String m1="Welcome to ";
  String m2="the program. ";
  Serial.println(m1+m2);
  Serial.println(" ");

/*Serial.println("How many volts do you want to write to Blue LED (0-255)? Make sure you're connected to an analog voltage pin (tilde).");
  while(Serial.available()==0) {}
  //blueBlink=Serial.parseInt();
  writeValueBlue=Serial.parseInt();
  Serial.println(" "); 

Serial.println("How many volts do you want to write to Yellow LED (0-255)? Make sure you're connected to an analog voltage pin (tilde). ");
  while (Serial.available()==0) {}
  writeValueYellow=Serial.parseInt();
  //yellowBlink=Serial.parseInt();  
  Serial.println(" ");     */


/* Serial.println("How many times do you want the Blue LED to blink? ");
  while(Serial.available()==0) {}
  blueBlink=Serial.parseInt();
Serial.println("How many times do you want the Yellow LED to blink? ");
  while (Serial.available()==0) {}
  yellowBlink=Serial.parseInt();  */ 
  
 
 /*Serial.println("For how many milliseconds do you want the Blue LED to blink? ");
  while(Serial.available()==0) {}
  waitTimeOn=Serial.parseInt();
  Serial.println(" "); 
  Serial.println("For how many milliseconds do you want the Blue LED to not blink? ");
  while(Serial.available()==0) {}
  waitTimeOff=Serial.parseInt();
  Serial.println(" "); 
  Serial.println("For how many milliseconds do you want the Yellow LED to blink?");
  while(Serial.available()==0) {}
  waitTimeOn2=Serial.parseInt();
  Serial.println(" "); 
  Serial.println("For how many milliseconds do you want the Yellow LED to not blink? ");
  while(Serial.available()==0) {}
  waitTimeOff2=Serial.parseInt();
  Serial.println(" ");     */
  }


  
void loop() {


Serial.println("How many volts do you want to write to Blue LED (0-255)? Make sure you're connected to an analog voltage pin (tilde).");
  while(Serial.available()==0) {}
  //blueBlink=Serial.parseInt();
  writeValueBlue=Serial.parseFloat();
Serial.println("How many volts do you want to write to Yellow LED (0-255)? Make sure you're connected to an analog voltage pin (tilde). ");
  while (Serial.available()==0) {}
  writeValueYellow=Serial.parseFloat();
  //yellowBlink=Serial.parseInt();  
  Serial.println(" ");

/*Serial.println("How many times do you want the Blue LED to blink? ");
  while(Serial.available()==0) {}
  blueBlink=Serial.parseInt();
Serial.println("How many times do you want the Yellow LED to blink? ");
  while (Serial.available()==0) {}
  yellowBlink=Serial.parseInt(); */

Serial.println(" "); 
  
/*Serial.println("For how many milliseconds do you want the Blue LED to blink? ");
  while(Serial.available()==0) {}
  waitTimeOn=Serial.parseInt();
  Serial.println("For how many milliseconds do you want the Blue LED to not blink? ");
  while(Serial.available()==0) {}
  waitTimeOff=Serial.parseInt();
  Serial.println(" "); 
  
Serial.println("For how many milliseconds do you want the Yellow LED to blink?");
  while(Serial.available()==0) {}
  waitTimeOn2=Serial.parseInt();
  Serial.println("For how many milliseconds do you want the Yellow LED to not blink? ");
  while(Serial.available()==0) {}
  waitTimeOff2=Serial.parseInt();
  Serial.println(" "); */



Serial.println(" "); 
Serial.println("The Blue LED is blinking.");

//for (int j=1;j<=blueBlink;j++){
int j=1;
while (j<=blueBlink){
    
    /*Serial.print("Blue Blinking number ");
    Serial.println(j);*/
    
    voltsBlue = writeValueBlue/51.;
    Serial.print(voltsBlue);
    Serial.println(" volts is being supplied");
    
    analogWrite(blueLED,writeValueBlue);//Should be connected to a pin with a tilde for analog voltage
    delay(waitTimeOn);
    analogWrite(blueLED,0);
    delay(waitTimeOff);
    j++;
  }

Serial.println(" "); 
Serial.println(yellowMessage); ; 


//for (int i=1; i<=yellowBlink; i++) {
int i=1;
while (i<=yellowBlink){
    
    /*Serial.print("Yellow Blinking number ");
    Serial.println(i);*/

    voltsYellow = writeValueYellow/51.;
    Serial.print(voltsYellow);
    Serial.println(" volts is being supplied");
    
    analogWrite(yellowLED,writeValueYellow);
    delay(waitTimeOn2);
    analogWrite(yellowLED,0);
    delay(waitTimeOff2);
    i++; 
  }
    

}
