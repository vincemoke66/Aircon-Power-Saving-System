#define RELAY_PIN 2

void setup() {
    Serial.begin(9600);
    pinMode(RELAY_PIN, OUTPUT);
}

void loop() {
    digitalWrite(RELAY_PIN, HIGH);
    delay(5000);
    digitalWrite(RELAY_PIN, LOW);
    delay(2000);
}