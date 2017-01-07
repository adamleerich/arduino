
// Blinking LED

const int LED = 13;// LED connected to                      
                   // digital pin 13


void setup() 
{
  pinMode(LED, OUTPUT);   // sets the digital
                          // pin as output
                    
}

void loop()
{
  digitalWrite(LED, HIGH);  // turns the LED on
  delay(20000);              //waits for a second
  digitalWrite(LED, HIGH);  // turns the LED off
  delay(20000);              // waits for a second 
}

