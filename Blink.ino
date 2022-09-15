void dot() 
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for 1 second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
}
void dash() 
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);                       // wait for 3 second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
}

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  String name = Serial.readString();
  name.toUpperCase();
  for (int i = 0; i < name.length(); i++) {
    switch (name[i])
    {
      case 'A':
        dot();
        dash();
        break;
      case 'B':
        dash();
        dot();
        dot();
        dot();
        break;

      case 'C':
        dash();
        dot();
        dash();
        dot();
        break;

      case 'D':
        dash();
        dot();
        dot();
        break;

      case 'E':
        dot();
        break;

      case 'F':
        dot();
        dot();
        dash();
        dot();
        break;

      case 'G':
        dash();
        dash();
        dot();
        break;

      case 'H':
        dot();
        dot();
        dot();
        dot();
        break;

      case 'I':
        dot();
        dot();
        break;
      case'J':
        dot();
        dash();
        dash();
        dash();
        break;

      case 'K':
        dash();
        dot();
        dash();
        break;

      case 'L':
        dot();
        dash();
        dot();
        dot();
        break;

      case 'M':
        dash();
        dash();
        break;

      case 'N':
        dash();
        dot();
        break;

      case 'O':
        dash();
        dash();
        dash();
        break;

      case 'P':
        dot();
        dash();
        dash();
        dot();
        break;

      case 'Q':

        dash();
        dash();
        dot();
        dash();
        break;

      case  'R':
        dot();
        dash();
        dot();
        break;

      case 'S':
        dot();
        dot();
        dot();
        break;

      case 'T':
        dash();
        break;

      case 'U':
        dot();
        dot();
        dash();
        break;

      case 'V':
        dot();
        dot();
        dot();
        dash();
        break;

      case 'W':
        dot();
        dash();
        dash();
        break;


      case 'X':
        dash();
        dot();
        dot();
        dash();
        break;

      case 'Y':
        dash();
        dot();
        dash();
        dash();
        break;

      case 'Z':
        dash();
        dash();
        dot();
        dot();
        break;
      case ' ':
        dot();
        break;
    }
  }
}
