#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

int melody1[] = {
  NOTE_E7, NOTE_E7, 0, NOTE_E7,
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0,  0,
  NOTE_G6, 0, 0, 0,
 
  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,
 
  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,
 
  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,
 
  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0
};
int noteDurations1[] = {
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
};
int melody2[] = {
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0, NOTE_DS4, NOTE_CS4, NOTE_D4,
  NOTE_CS4, NOTE_DS4,
  NOTE_DS4, NOTE_GS3,
  NOTE_G3, NOTE_CS4,
  NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
  NOTE_GS4, NOTE_DS4, NOTE_B3,
  NOTE_AS3, NOTE_A3, NOTE_GS3,
  0, 0, 0
};
int noteDurations2[] = {
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  6, 18, 18, 18,
  6, 6,
  6, 6,
  6, 6,
  18, 18, 18, 18, 18, 18,
  10, 10, 10,
  10, 10, 10,
  3, 3, 3
};
int melody3[] = {
  NOTE_C2, NOTE_F3, NOTE_C3, NOTE_A2, NOTE_A2,
  NOTE_C3, NOTE_F3, NOTE_C3,
  NOTE_C3, NOTE_F3, NOTE_C3, NOTE_F3,
  NOTE_AS3, NOTE_G3, NOTE_F3, NOTE_E3, NOTE_D3, NOTE_CS3,
  NOTE_C2, NOTE_F3, NOTE_C3, NOTE_A2, NOTE_A2, // repeat line 1 and 2
  NOTE_C3, NOTE_F3, NOTE_C3,
  NOTE_AS3, 0, NOTE_G3, NOTE_F3,
  NOTE_E3, NOTE_D3, NOTE_CS3, NOTE_C3};
int noteDurations3[] = {
  4, 4, 4, 8, 
  8,
  4, 4, 2,
  4, 4, 4, 4,
  3, 8, 8, 8, 8, 8,
  4, 4, 4, 8, 8, 
  4, 4, 2,
  4, 8, 8, 4, 4,
  4, 4, 4, 4,
  0};
int melody4[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};
int noteDurations4[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

const int Buzz = 8;
const int buttonPin1= 7;
const int buttonPin2= 9;
const int buttonPin3= 10;
const int buttonPin4= 11;
const int buttonPin5= 12;
const int ledPin = 2;

void setup()
{ 
  pinMode(buttonPin1, INPUT);
  digitalWrite(buttonPin1, HIGH);
  pinMode(buttonPin2, INPUT);
  digitalWrite(buttonPin2, HIGH);
  pinMode(buttonPin3, INPUT);
  digitalWrite(buttonPin3, HIGH);
  pinMode(buttonPin4, INPUT);
  digitalWrite(buttonPin4, HIGH);
  pinMode(buttonPin5, INPUT);
  digitalWrite(buttonPin5, HIGH);
  pinMode(ledPin, OUTPUT);
}

void loop()
{ 
  while(digitalRead(buttonPin2) == HIGH)
  {
    tone(Buzz,NOTE_D4);
    digitalWrite(ledPin, HIGH);
  }
  while(digitalRead(buttonPin3) == HIGH)
  {
    tone(Buzz,NOTE_E4);
    digitalWrite(ledPin, HIGH);
  }
  while(digitalRead(buttonPin4) == HIGH)
  {
    tone(Buzz,NOTE_F4);
    digitalWrite(ledPin, HIGH);
  }
  while(digitalRead(buttonPin5) == HIGH)
  {
    tone(Buzz,NOTE_G4);
    digitalWrite(ledPin, HIGH);
  }
  //for melodys: 
  //press button1 and button2: 
  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);
   if (buttonState1 == HIGH && buttonState2 == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    int size = sizeof(melody1) / sizeof(int);
    for (int thisNote=0; thisNote < size; thisNote++)
    {
      int noteDuration1 = 1000 / noteDurations1 [thisNote];
      tone(8, melody1 [thisNote], noteDuration1);
      int pauseBetweenNotes = noteDuration1 * 1.30;
      delay(pauseBetweenNotes);
      
      tone(8, 0, noteDuration1);
    }
  }
  //press button1 and button3:
  int buttonState3 = digitalRead(buttonPin3);
  if (buttonState1 == HIGH && buttonState3 == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    int size = sizeof(melody2) / sizeof(int);
    for (int thisNote=0; thisNote < size; thisNote++)
    {
      int noteDuration2 = 1000 / noteDurations2 [thisNote];
      tone(8, melody2 [thisNote], noteDuration2);
      int pauseBetweenNotes = noteDuration2 * 1.30;
      delay(pauseBetweenNotes);
      
      tone(8, 0, noteDuration2);
    }
  }
  //press button1 and button4:
  int buttonState4 = digitalRead(buttonPin4);
  if (buttonState1 == HIGH && buttonState4 == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    int size = sizeof(melody3) / sizeof(int);
    for (int thisNote=0; thisNote < size; thisNote++)
    {
      int noteDuration3 = 1000 / noteDurations3 [thisNote];
      tone(8, melody3 [thisNote], noteDuration3);
      int pauseBetweenNotes = noteDuration3 * 1.30;
      delay(pauseBetweenNotes);
      
      tone(8, 0, noteDuration3);
    }
  }
  //press button1 and button5:
  int buttonState5 = digitalRead(buttonPin5);
  if (buttonState1 == HIGH && buttonState5 == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    int size = sizeof(melody4) / sizeof(int);
    for (int thisNote=0; thisNote < size; thisNote++)
    {
      int noteDuration4 = 1000 / noteDurations4 [thisNote];
      tone(8, melody4 [thisNote], noteDuration4);
      int pauseBetweenNotes = noteDuration4 * 1.30;
      delay(pauseBetweenNotes);
      
      tone(8, 0, noteDuration4);
    }
  }
  noTone(Buzz);
  digitalWrite(ledPin, LOW);
}
