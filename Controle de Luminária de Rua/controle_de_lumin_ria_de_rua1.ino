const int pinoRele = 2;
const int pinoFotorresistor = A0; 

void setup() {

    pinMode(pinoRele, OUTPUT);
    digitalWrite(pinoRele, LOW);
    Serial.begin(9600);
    Serial.println("SE O VALOR QUE DETERMINA A LUMINOSIDADE FOR MENOR QUE 510, A LÂMPADA ACENDERÁ");
    delay(5000);
}

void loop() {
    
    int valorFotoresistor = analogRead(pinoFotorresistor);
	
    Serial.print("VALOR QUE DETERMINA A LUMINOSIDADE:");
    Serial.println(valorFotoresistor);
    int limite = 510;

    if (valorFotoresistor < limite) {

        digitalWrite(pinoRele, HIGH);
    }
    else{
        digitalWrite(pinoRele, LOW);
    }

    delay(500);
}