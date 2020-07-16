int LED_RED = 2;
int LED_GREEN = 5;
int LED_BLUE = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  analogWriteRange(255);
  digitalWrite(LED_RED, HIGH);
  digitalWrite(LED_GREEN, HIGH);
  digitalWrite(LED_BLUE, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*digitalWrite(LED_RED, LOW);
  digitalWrite(LED_GREEN, LOW);
  delay(500);
  digitalWrite(LED_RED, HIGH);
  digitalWrite(LED_GREEN, HIGH);
  
  digitalWrite(LED_GREEN, LOW);
  digitalWrite(LED_BLUE, LOW);
  delay(500);
  digitalWrite(LED_GREEN, HIGH);
  digitalWrite(LED_BLUE, HIGH);
  
  digitalWrite(LED_BLUE, LOW);
  digitalWrite(LED_RED, LOW);
  delay(500);
  digitalWrite(LED_BLUE, HIGH);
  digitalWrite(LED_RED, HIGH);*/

  //Light fading
  
  for(int i = 255; i >= 0; i--){
      analogWrite(LED_RED, 255 - i);
      delay(10);
    }

  for(int i = 0; i <= 0; i++){
      analogWrite(LED_GREEN, 255 - i);
      delay(30);
    }

  for(int i = 255; i >= 0; i--){
      analogWrite(LED_BLUE, 255 - i);
      delay(20);
    }
    delay(100);
}
