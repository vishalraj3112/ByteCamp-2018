void setup() {
  pinMode(4,OUTPUT); 
  pinMode(3,INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  long measurment;
  measurment=pulseIn(3,HIGH);
  Serial.println(measurment);
  
  if(measurment>30000)
  {digitalWrite(4,HIGH);
  }
  
  //digitalWrite(LED_BUILTIN,HIGH);
  // put your main code here, to run repeatedly:

}
