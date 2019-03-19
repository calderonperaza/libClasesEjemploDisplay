#include <libClasesEjemploDisplay.h>
byte pines[]={2,3,4,5,6,7,8};
display d1; //constructor vacio
display d2(2,3,4,5,6,7,8); //pasando los pines en el constructor
display d3(pines); //constructor que recibe un arreglo

void setup() {
  // put your setup code here, to run once:
  d1.iniciar(2,3,4,5,6,7,8); //debe invocarse para que se configure el display
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for(byte x=0; x<10; x++){
    d1.mostrar(x);
    d2.mostrar(x);
    d3.mostrar(x);
    delay(600);
  }
}