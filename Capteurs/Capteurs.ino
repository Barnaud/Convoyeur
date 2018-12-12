int capteur_debut=13;
int capteur_fin=12;
int tapis=11;
const int tempo = 10000;
 

void setup() {
  // put your setup code here, to run once:
pinMode(capteur_debut, INPUT);
pinMode(capteur_fin, INPUT);
pinMode(tapis, OUTPUT);

}

void loop() {
  while(!digitalRead(capteur_debut)){
    
  }
  digitalWrite(tapis, HIGH);
  int i=0;
  while (i<tempo){
    i++;
    if (digitalRead(capteur_fin and i>(2/3)*tempo)){
      if (tempo<tempo-500){
              i=tempo-500;
      }
    }
    if (digitalRead(capteur_debut)){
      i=0;
    }
  }
  digitalWrite(tapis, LOW);
  

}
