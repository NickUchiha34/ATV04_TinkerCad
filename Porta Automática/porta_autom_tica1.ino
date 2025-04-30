const int pinoRele = 2;
const int PIR = 3;

void setup(){
  
    pinMode(PIR, INPUT);
    pinMode(pinoRele, OUTPUT);
    Serial.begin(9600);
}

void loop(){

    int valor = digitalRead(PIR);
  
    if (valor == 1) {

        Serial.println("Movimento");
        digitalWrite(pinoRele, 1);
    }
    else{
      
        Serial.println("Sem movimento");
        digitalWrite(pinoRele, 0);
    }

    delay(1000);
}