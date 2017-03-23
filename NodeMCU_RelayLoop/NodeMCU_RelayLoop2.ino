void setup() {
  // put your setup code here, to run once:
  initPinOut();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(D1, LOW);
  delay(2000);
  digitalWrite(D1, HIGH);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(D2, LOW);
  delay(2000);
  digitalWrite(D2, HIGH);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);

  
}

void initPinOut()
{
  digitalWrite(D1, HIGH);  
  digitalWrite(D2, HIGH);  
 
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}
