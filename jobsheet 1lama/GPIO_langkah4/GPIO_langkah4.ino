// AISYAH NURUL AINI (4.31.21.0.03)
// BRIAN RAHMADITYA (4.31.21.0.09)
// SABRINA VIRRY TALITHA MEIRILLA (4.31.21.0.23)

// set pin numbers
const int buttonPin = 4; // the number of the pushbutton pin
const int ledPin = 5; // the number of the LED pin
const int button2 = 16;
const int led2 = 17;
// variable for storing the pushbutton status
int buttonState = 0;
int buttonState2 = 0;
void setup() {
  Serial.begin(115200);
  // initialize the pushbutton pin as an input
  pinMode(buttonPin, INPUT);
  pinMode(button2, INPUT);
  // initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  pinMode(led2, OUTPUT);
}
void loop() {
  // read the state of the pushbutton value
  buttonState = digitalRead(buttonPin);
  buttonState2 = digitalRead(button2);
  Serial.println(buttonState);
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH
  if (buttonState == HIGH) {
    // turn LED on
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off
    digitalWrite(ledPin, LOW);
  }
  if (buttonState2 == HIGH) {
    // turn LED on
    digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);                       // wait for a second
    digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
    delay(500);                       // wait for a second
  } else {
    // turn LED off
    digitalWrite(led2, LOW);
  }
}
