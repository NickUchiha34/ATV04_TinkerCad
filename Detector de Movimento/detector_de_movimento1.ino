const int PIR = 2;
const int LED = 4;

void setup(){

    pinMode(PIR, INPUT);
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
}

void loop() {

    int valor = digitalRead(PIR);
    if (valor == 1) {

        Serial.println("Movimento");
        digitalWrite(LED, 1); 
    }
    else{
      
        Serial.println("Sem movimento");
        digitalWrite(LED, 0);
    }

    delay(1000);
}