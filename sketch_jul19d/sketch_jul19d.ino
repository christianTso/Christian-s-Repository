
#define ONBOARD_LED 12    // LED GP12
#define ONBOARD_SW  7    // Switch GP7

int current_LED = LOW;
int button = 0;

void setup() {
   Serial.begin(115200); //set up serial library baud rate to 115200
   pinMode(ONBOARD_LED, OUTPUT);
   pinMode(ONBOARD_SW, INPUT_PULLUP);
   button = 0;
   digitalWrite(ONBOARD_LED, current_LED);    // turn the LED off by making the voltage LOW   
}

void loop() {
    current_LED = (current_LED == HIGH) ? LOW: HIGH;
    digitalWrite(ONBOARD_LED, current_LED);
   
    if (digitalRead(ONBOARD_SW) == LOW) {  
    button++;
    }


   if (button == 1){
    delay(1000);
   }
   if (button == 2){
    delay(500);
   }
   if (button == 3){
    delay(100);
   }
   else {
      
          if (digitalRead(ONBOARD_SW) == LOW) {  
          button = 0;
          }
    }
    
}
  
