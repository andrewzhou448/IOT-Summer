int ldr_pin = A0;
int analogValue = 0;
int LED_PIN1 = 4;
int LED_PIN2 = 5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogValue = analogRead(ldr_pin);
  Serial.println(analogValue);
  delay(100);
  if(analogValue <=79){
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN2, LOW);
    }
  else if(analogValue <= 200 && analogValue > 80){
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, LOW);
    }
  else{
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, HIGH);
    }
}
