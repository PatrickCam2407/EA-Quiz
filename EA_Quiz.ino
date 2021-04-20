

void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(10, OUTPUT);
  }

void loop() {

 int S = analogRead(A0);
 int g = map(S,0,1023,10000,1000);

  if(S> 1000){
       digitalWrite(10 ,HIGH);
    noTone(4);
               }else {
                   tone(4,g);
                   digitalWrite(7, LOW); 

  Serial.print("Potentiometer Value = ");
  Serial.print(S);
  Serial.println();

  Serial.print("f = ");
  Serial.print(g);
  Serial.println();

                   
        

   delay(5);
  }
}
