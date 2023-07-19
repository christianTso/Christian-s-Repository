# Christian-s-Repository

String rcvString = "";
int weight = 0;

void setup() {













  
   Serial.begin(115200); //set up serial library baud rate to 115200
   delay(2000);
   Serial.println("what is you bmi?");
}

void loop() {
   if(Serial.available()) { //if number of bytes (characters) available for reading
      Serial.print(""); //print I received
      rcvString = Serial.readString();
      weight = rcvString.toInt(); // read string until newline character


      if (weight <= 16) {
        Serial.println("Severely Undeweight");
      }
      else if (weight <= 18.4) {
        Serial.println("Underweight");
      }
      else if (weight <= 24.9) {
        Serial.println("Normal");
      }
      else if (weight <= 29.9) {
        Serial.println("Overweight");
      }
      else if (weight <= 34.9) {
        Serial.println("Moderately Obese");
      }
      else if (weight <= 39.9) {
        Serial.println("Severely Obese");
      }
      else if (weight >= 40) {
        Serial.println("Morbidly Obese");
      }
      else {
        Serial.println("what...");
      }

   }
   
}
 
