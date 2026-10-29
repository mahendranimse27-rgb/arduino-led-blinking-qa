/*
  Project: Arduino LED Blinking - QA Activity
  Board: Arduino Uno (or compatible board)
  LED: Built-in LED on pin 13
  Behavior: Toggle LED every 500 ms without using delay().
*/

const byte LED_PIN = LED_BUILTIN;
const unsigned long BLINK_INTERVAL_MS = 500;

unsigned long previousToggleMs = 0;
bool ledState = false;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  const unsigned long currentMs = millis();

  // Unsigned subtraction remains safe when millis() rolls over.
  if (currentMs - previousToggleMs >= BLINK_INTERVAL_MS) {
    previousToggleMs = currentMs;
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState ? HIGH : LOW);
  }

  // Other non-blocking tasks can run here.
}
