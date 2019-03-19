#include <libClasesEjemploDisplay.h>
byte pines[]={2,3,4,5,6,7,8};

display d1(pines); //constructor que recibe un arreglo por REFERENCIA

void setup() {
  }

void loop() {
  
  for(byte x=0; x<10; x++){
    d1.mostrar(x);
    delay(600);
  }
}
