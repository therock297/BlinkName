//2110994819
//Madhav Mittal

//The setup function runs once when we press reset or power the board
void setup()
{
  //Initializing digital pin LED_BUILTIN as an output
  pinMode(LED_BUILTIN,OUTPUT);
}
 
//blinks a dot
void dot()
{
  digitalWrite(LED_BUILTIN, HIGH); //Turning the LED on by giving HIGH voltage
  delay(100);  //waits for 0.1 seconds
  digitalWrite(LED_BUILTIN, LOW); //Turning the LED off by giving LOW voltage
  delay(100);  //waits for 0.1 seconds
}

//It blinks a dash
void dash()
{
  digitalWrite(LED_BUILTIN, HIGH); //Turning the LED on by giving HIGH voltage
  delay(300); //wait for 0.3 seconds
  digitalWrite(LED_BUILTIN, LOW); //Turning the LED off by giving LOW voltage
  delay(300); //wait for 0.3 seconds
}

//Function for giving longer break for a new word
void new_word()
{
  delay(500);  //wait for 0.5 seconds--
}

//This loop function runs over and over again forever
void loop() 
{
  //In this loop we are calling the dash() and dot() function for each specific letter. 
  //It will blink letter M on Arduino Nano
  //M(--)
  dash();
  dash();
  new_word();

  //It will blink letter A on Arduino Nano
  //A(.-)
  dot();
  dash();
  new_word();

  //It will blink letter D on Arduino Nano
  //D(-..)
  dash();
  dot();
  dot();
  new_word();

  
  //It will blink letter H on Arduino Nano
  //H(....)
  dot();
  dot();
  dot();
  dot();
  new_word();

  //It will blink letter A on Arduino Nano
  //A(.-)
  dot();
  dash();
  new_word();

  //It will blink letter V on Arduino Nano
  //v(...-)
  dot();
  dot();
  dot();
  dash();
  new_word();

}
