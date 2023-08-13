const int EchoPin = 5;
const int TriggerPin = 6;
const int LedPin = 13;

 void setup() {
  Serial.begin(9600);
  pinMode(LedPin,OUTPUT);
  pinMode(TriggerPin,OUTPUT);
  pinMode(EchoPin,INPUT);
 }

void loop(){
  int cm = ping(TriggerPin,EchoPin);
  Serial.print("Distancia -jacky");
  Serial.println(cm);
  delay(1000);

 if (cm<20)
 {digitalWrite(LedPin,HIGH);
  }
  if (cm>20)
 { digitalWrite(LedPin,LOW);
 }
}

int ping(int TriggerPin, int EchoPin){
  long duration, distanceCm;
  digitalWrite(TriggerPin,LOW);

  delayMicroseconds(4);
  digitalWrite(TriggerPin,HIGH);
  delayMicroseconds (10);
  digitalWrite(TriggerPin, LOW);
  duration=pulseIn(EchoPin, HIGH);
  distanceCm=duration*10 / 292/ 2;
  return distanceCm;
}




