

#define trigPin 8  // These lines assign names to values
#define echoPin 7  // so they can be easily identified.
#define buzzer 12  // These are set before the code


void setup() {
  Serial.begin (9600); 
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);  
  pinMode(buzzer, OUTPUT);
}

void loop() { 
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  Serial.print(distance);
    Serial.println(" cm");
  

  
if (distance > 30 and distance < 62) { 
    tone(buzzer,100,50);  // Intermitten beeps
    }
    if (distance > 0 and distance < 31) { 
    tone(buzzer,100); // Long solid beep
  }
  else {
    }
  delay (500);
  
} 
