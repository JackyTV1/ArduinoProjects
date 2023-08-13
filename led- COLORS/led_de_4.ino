

void setup() 
{
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
}

void loop() {
    // Verde
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    delay(500);
    // Azul
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    delay(500);
    // Rojo
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    delay(500);
    //Violeta
    
    
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    delay(500);
    //Amarillo
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    delay(500);
    //Azul Marino 
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    delay(500);
    //Blanco 
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    delay(500);
    // Negro - No presenta ningún color
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    delay(500);
}

