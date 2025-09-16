void setup() {
  Serial.begin(9600);
}

void loop() {
  int tempValue = random(20, 31);

  Serial.print("{\"temperature_value\":");
  Serial.print(tempValue);
  Serial.println("}");

  delay(5000); 
}
