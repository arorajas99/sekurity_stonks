  const int echo_pin = 6;
  const int trig_pin = 7;
  void setup() {
    Serial.begin(9600);
    pinMode(echo_pin, INPUT);
    pinMode(trig_pin, OUTPUT);
  
  }
  
  void loop() {
    double period, distance;
    digitalWrite(trig_pin, LOW);
    digitalWrite(trig_pin, HIGH);
  digitalWrite(trig_pin, LOW);
  period = pulseIn(echo_pin, HIGH);
  distance = (period / 2) / 29.1;
  Serial.println(distance);

}
