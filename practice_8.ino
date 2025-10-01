// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;  // the number of the pushbutton pin
const int RledPin = 3;    // the number of the LED pin
const int GledPin = 5;    // the number of the LED pin
const int BledPin = 4;    // the number of the LED pin

// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status
int ledState = LOW;

int ledcolor =0;
bool ButtonPressed = false;
String currentcolor = "led";
unsigned long previousMillis = 0;
const long interval = 1000;

void setup() {
  // initialize the LED pin as an output:
  pinMode(RledPin, OUTPUT);
  pinMode(GledPin, OUTPUT);
  pinMode(BledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {


  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  Serial.print("Current Color:");
  Serial.println(currentcolor);

  if(buttonState == HIGH && !ButtonPressed)
  {
    ledcolor = ledcolor + 1;
    ButtonPressed = true;
  }

  if(buttonState == LOW && ButtonPressed)
  {
    ButtonPressed = false;
  }

  unsigned long currentMillis = millis();
  if(currentMillis - previousMillis >= interval){
    previousMillis = currentMillis;
  if(ledState == LOW){
    ledState = HIGH;
  }
  else{
    ledState = LOW;
  }
  }
  

  if(ledcolor==0)
  { 
    currentcolor = "LED OFF";
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
  }
  else if(ledcolor==1)
  {
    currentcolor = "RED";
    if(ledState == LOW){
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
    }
    else{
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
    }
  }

  else if(ledcolor==2)
  {
    currentcolor = "GREEN";
    if(ledState == LOW){
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, HIGH);
    }
    else{
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
    }
  }

  else if(ledcolor==3)
  {
    currentcolor = "BLUE";
    if(ledState == LOW){
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, LOW);
    }
    else{
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
    }
  }

  else if(ledcolor==4)
  {
    currentcolor = "YELLOW";
    if(ledState == LOW){
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, HIGH);
    }
    else{
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
    }
  }

  else if(ledcolor==5)
  {
    currentcolor = "PURPLE";
    if(ledState == LOW){
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, LOW);
    }
    else{
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
    }
  }

  else if(ledcolor==6)
  {
    currentcolor = "CYAN";
    if(ledState == LOW){
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, LOW);
    }
    else{
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
    }
  }

  else if(ledcolor==7)
  {
    currentcolor = "wHITE";
    if(ledState == LOW){
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, LOW);
    }
    else{
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
    }
  }

  else if( ledcolor == 8)
  {
    ledcolor = 0;
  }

}
