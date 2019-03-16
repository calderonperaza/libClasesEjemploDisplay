#include <libClasesEjemploDisplay.h>

display d1;

void setup() {
  // put your setup code here, to run once:
  d1.iniciar(2,3,4,5,6,7,8);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(byte x=0; x<10; x++){
    d1.mostrar(x);
    delay(600);
  }
}