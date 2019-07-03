#define Tempo_verin 30000
/*
Changer cette valeur pour modifier la tempo
entre la sortie de la pièce du convoyeur et ledéclanchement du vérin.
*/
void setup() {
  Serial.begin(9600);
  pinMode(10, INPUT);
  pinMode(9, OUTPUT);
  digitalWrite(9, HIGH);
    
}

void loop() {
  if(readValue()){
    delay(Tempo_verin);
    digitalWrite(9, LOW);
    delay(5000);
    digitalWrite(9, HIGH);
  }
  
    
}
bool readValue(){
  int k=0;
  for (int i=0;i<=3;i++){
    if(!digitalRead(10)){
      k++;
    }
  }
  return(k>=1);
}
