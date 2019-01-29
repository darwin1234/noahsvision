// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin
int data = 0;
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(8, OUTPUT);
  // initialize the pushbutton pin as an input:
  //pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:
 /*buttonState = digitalRead(buttonPin);
 
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }*/
  data = analogRead(A0);
  //Serial.println(data);
  if(data > 100){
    digitalWrite(8,HIGH);
    Serial.println("Water reach 1 centimeter");
  
  }else{
      digitalWrite(8,LOW);
     Serial.println("Safe");
  }
}
