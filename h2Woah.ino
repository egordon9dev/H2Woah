int valve = 2, light = 3;
void setup() {
  Serial.begin(9600);
  pinMode(valve, OUTPUT);
  digitalWrite(valve, 0);
  pinMODE(light, OUTPUT);
  digitalWrite(light, 0);
}

void loop() {
  
}
