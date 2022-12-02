#define BLUE 7
#define GREEN 6
#define RED 5

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);
}

const uint16_t DELAY_TIME = 5;
const uint8_t RANDOM_COUNT = 10;
int RandomR = 0;
int RandomG = 0;
int RandomB = 0;

void loop() {
  // RESET
  analogWrite(RED, 0);
  analogWrite(GREEN, 0);
  analogWrite(BLUE, 0);

  // RED
  for (int R = 0; R < 255; R++) {
    analogWrite(RED, R);
    delay(DELAY_TIME);
  }

  for (int R = 255; R > 0; R--) {
    analogWrite(RED, R);
    delay(DELAY_TIME);
  }

  // GREEN
  for (int G = 0; G < 255; G++) {
    analogWrite(GREEN, G);
    delay(DELAY_TIME);
  }

  for (int G = 255; G > 0; G--) {
    analogWrite(GREEN, G);
    delay(DELAY_TIME);
  }

  // BLUE
  for (int B = 0; B < 255; B++) {
    analogWrite(BLUE, B);
    delay(DELAY_TIME);
  }

  for (int B = 255; B > 0; B--) {
    analogWrite(BLUE, B);
    delay(DELAY_TIME);
  }

  // Random color flashes
  for (int RandomX = 1; RandomX < RANDOM_COUNT; RandomX++) {
    RandomR = random(255);
    RandomG = random(255);
    RandomB = random(255);
    analogWrite(RED, RandomR);
    analogWrite(GREEN, RandomG);
    analogWrite(BLUE, RandomB);
    delay(100);
  }

}
