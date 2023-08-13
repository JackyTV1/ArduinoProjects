// pin donde se conectan los leds

int pinLed1 = 2;
int pinLed2 = 3;
int pinLed3 = 4;

//pin analogo de entrada para el LDR

int pinLDR = 0;
//Variable donde se almacena el valor del LDR

int valorLDR = 0;
void setup ()                                                                                                                         
{
  //configuramos como salidas los pines donde se conectan los led
  pinMode(pinLed1, OUTPUT);
  pinMode (pinLed2, OUTPUT);
   pinMode (pinLed3, OUTPUT);

   //cONFIGURAR EL PUERTO SERIAL
   Serial.begin(9600);
}

void loop()
{
  //Apagar todos los leds siempre q se inicia el ciclo
  
  digitalWrite(pinLed1,LOW);
  digitalWrite(pinLed2,LOW);
  digitalWrite(pinLed3,LOW);

  //guardamos el valor leid;o de ADC en una variable
  //El valor leido por el ADC(votaje) aumenta de manera directamente proporcional
  //con respecto  la luz
  valorLDR=analogRead(pinLDR);
  Serial.println(valorLDR);
  

  //encender los led ara ADC

  if(valorLDR>256)
  {digitalWrite(pinLed1,HIGH);
  }
  if(valorLDR>512)
{digitalWrite (pinLed2,HIGH);
}
  if(valorLDR>768)
{digitalWrite (pinLed3,HIGH);
}

//ESPERA UNOS MILISEGUNDOS ANTES DE ACTUALIZR
delay(200);
}
  
  


