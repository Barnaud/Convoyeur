int nb=0;
bool in = false;
bool out = false;
bool current_state = false;
//Bleu 0
//Vert 1
// Piston: 12
unsigned long end = 0;
void setup() {
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(13, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(12, OUTPUT);
    digitalWrite(12, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4,LOW);
    digitalWrite(8, LOW);
    digitalWrite(13, HIGH);
    Serial.begin(9600);
}

bool readSensor(int pin){
    int moy = 0;
    for (int i=0; i<3; i++){
    moy+= analogRead(pin);
    delay (50);
    
  }
  moy/=3;
  return(moy>500 );
}


void loop() {
  
  if(readSensor(0)){
    if (not in){
    nb++;
    end = millis()+45000;
    in = true;
    }
    //Serial.println(nb);
  }
  else{
    in = false;
  }

  if (readSensor(5)){
    if (not out){
      if (nb>0){
            nb--;
            digitalWrite(12, HIGH);
            delay(200);
            digitalWrite(12, LOW);
            if(nb == 0){
              end = millis()+5000;
            }
      }
    out = true;
    }
    //Serial.println(nb);

    }
    else{
      out = false;
    }

    if(millis()<end){
    if(current_state == false){
      current_state = true;
    digitalWrite(5, HIGH);
    delay(2000);
    digitalWrite(5, LOW);
    delay(200);
    digitalWrite(5, HIGH);
    }
    
    
  }
  else{
    current_state = false;
    digitalWrite(5,LOW);
    nb=0;
  }
  }
