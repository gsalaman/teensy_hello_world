bool pin_state=HIGH;

#define LED_PIN 13

void setup() 
{
  pinMode(LED_PIN, OUTPUT);
  
  Serial.begin(9600);

  digitalWrite(LED_PIN, pin_state);

  Serial.println("Hello world");
}

void loop() 
{
   if (Serial.available())
   {
     char c=Serial.read();
     Serial.println("Toggle LED");
     pin_state = !pin_state;
     digitalWrite(LED_PIN, !pin_state);
   }
}
