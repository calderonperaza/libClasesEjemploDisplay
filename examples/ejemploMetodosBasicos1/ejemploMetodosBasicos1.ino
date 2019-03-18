#include <libClasesEjemploDisplay.h>
byte pines[]={2,3,4,5,6,7,8};
display d1;
display d2(pines); //constructor con arreglos

void setup() {
  // put your setup code here, to run once:
  d1.iniciar(2,3,4,5,6,7,8);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for(byte x=0; x<10; x++){
    //d1.mostrar(x);
    d2.mostrar(x);
    delay(600);
  }
}