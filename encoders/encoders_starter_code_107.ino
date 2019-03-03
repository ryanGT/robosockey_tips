// - encoder channel A must be on pin 2
// - encoder channel B can be any pin
#define encoderPinA 2
#define encoderPinB 11

// global variable
int encoder_count=0;

void setup()
{
  Serial.begin(115200);//or 9600 if your lame
  //other stuff
  pinMode(encoderPinA, INPUT);
  pinMode(encoderPinB, INPUT);

  // - interrupt 0 is connected to pin 2
  // - interrupt 1 is connected to pin 3
  attachInterrupt(0, doEncoderL, RISING);
  
  // you might need pullup resistors
  // depending on your encoder model
  //digitalWrite(encoderPinA, HIGH);
  //digitalWrite(encoderPinB, HIGH);
}


void doEncoderL{
  // figure out whether to increment or
  // decrement encoder_count
}


void loop()
{
  Serial.print("enc count: ");
  Serial.println(encoder_count);
}

