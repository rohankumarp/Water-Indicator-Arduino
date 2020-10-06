
const int analogInPin = A0;  
const int analogOutPin = 9; 

int sensorValue = 0;       
int outputValue = 0;     
int peizopin = 7;
void setup() {
 
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(analogInPin);
 
  outputValue = map(sensorValue, 0, 1023, 0, 255);
 
  analogWrite(analogOutPin, outputValue);

 
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);
 if(outputValue>80)
 {
   tone(peizopin,60,100);
   delay(500);
 }

 
  delay(2);
}
