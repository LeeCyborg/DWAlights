int leftBlade = 9;
int rightBlade = 6;
int lowFade = 100;
void setup() {
}
void loop() {
  for (int fadeValue = lowFade ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(rightBlade, fadeValue);
    delay(30);
  }

  for (int fadeValue = 255 ; fadeValue >= lowFade; fadeValue -= 5) {
    analogWrite(leftBlade, fadeValue);
    delay(30);
  }
  for (int fadeValue = 255 ; fadeValue >= lowFade; fadeValue -= 5) {
    analogWrite(rightBlade, fadeValue);
    delay(30);
  }
  for (int fadeValue = lowFade ; fadeValue <= 255; fadeValue += 5) {
    analogWrite(leftBlade, fadeValue);
    delay(30);
  }
}


