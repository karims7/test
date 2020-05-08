 
 String myName;
 int age;
 float height;
 float weight;
 float leanWeight;
 float bodyFatP;
 float bodyFat;
 float BMI;
 
 
 void setup() {
  
  Serial.begin(9600);

  Serial.println(" ");
  Serial.println("Welcome to your body measurements calculator.");
  Serial.println("");

}

void loop() {

  Serial.println("Please enter your name.");
  while(Serial.available()==0) {
    }
  myName=Serial.readString();

  Serial.print("How old are you, "); Serial.print(myName); Serial.println("?");
  while(Serial.available()==0) {
    }
  age=Serial.parseInt();

  Serial.println("Please enter your height in meters.");
  while(Serial.available()==0) {}
  height=Serial.parseFloat();

  Serial.println("Please enter your weight in kilograms.");
  while(Serial.available()==0) {}
  weight=Serial.parseFloat();

  Serial.println("Enter your body fat percentage.");
  while(Serial.available()==0) {}
  bodyFatP=Serial.parseFloat();

  BMI= (weight)/(height*height);
  bodyFat=weight*(bodyFatP/100.);
  leanWeight=weight-bodyFat;
  
  Serial.println("");

  Serial.print(myName); Serial.print(", your BMI is "); Serial.print(BMI); Serial.println(". BMI is an inaccurate way of measuring how healthy you are.");
  Serial.println(" ");
  Serial.print("Your body fat percentage is "); Serial.print(bodyFatP); Serial.print("%, which means you have "); Serial.print(bodyFat); Serial.print(" kilograms of fat on your body ");
  Serial.print("and "); Serial.print(leanWeight); Serial.println(" kilograms of lean weight.");

  Serial.println(" ");

  if (bodyFatP< 4.5) {
    Serial.println("You have less than 5% body fat which is unhealthy. Eat more and lift weights.");
    }
  else if (bodyFatP >= 4.5 && bodyFatP < 10) {
    Serial.println("You have a healthy amount of fat on your body. ");
    }
  else if (bodyFatP >= 10 && bodyFatP < 16) {
    Serial.print("You have moderate amount of fat in your body.");
    }
  else if (bodyFatP >= 16 && bodyFatP <= 21) {
    Serial.print("You have "); Serial.print(bodyFatP); Serial.print("% of fat in your body. Stay under 15%. ");
    }
  else  {
    Serial.println ("You're overweight! Start weightlifting and HIIT to lose body fat and gain lean muscle.");
    }

Serial.println(" ");
Serial.println(" ");

}
