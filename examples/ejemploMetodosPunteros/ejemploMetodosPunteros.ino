#include <libClasesEjemploDisplay.h>
#define boton 9
byte conta=0;
byte pines[]={2,3,4,5,6,7,8};
display d1(pines); //constructor donde pasamos un puntero, el nombre de un arreglo es un puntero

void setup() {
  pinMode(boton, INPUT);
  //Mostrando valores para probar el display
  for(byte x=0; x<16; x++){
      d1.mostrar(&x); //como recibe un puntero debe usarse el operador &
      delay(700);
    }
    d1.mostrar(&conta);
    
}

void loop() {
  if(digitalRead(boton)==HIGH){ // si el boton se ha presionado
    conta++; //aumenta el contador
    if(conta>9) conta=0;
    d1.mostrar(&conta);
    delay(400);
  }
  
}