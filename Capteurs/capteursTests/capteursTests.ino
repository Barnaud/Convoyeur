int capteur_debut=13;
int capteur_fin=12;
int tapis=11;
const int tempo = 3000;
 

void setup() {
  // put your setup code here, to run once:
pinMode(capteur_debut, INPUT);
pinMode(capteur_fin, INPUT);
pinMode(tapis, OUTPUT);
Serial.begin(9600);
}

void loop() {
  while(!digitalRead(capteur_debut)){
    
  }
  digitalWrite(tapis, HIGH);
  int i=0;
  while (i<tempo){
    i++;
    Serial.println(i);
    if (0){
      i=0;
    }
    if (digitalRead(capteur_fin and i>(2/3)*tempo)){
      i=3001;
    }
  }
  digitalWrite(tapis, LOW);
  

}
