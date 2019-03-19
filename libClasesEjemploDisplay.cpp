/* Archivo CPP incluye la definicion de todos los metodos
definidos en el archivo de .H
*/

#include "arduino.h"
#include "libClasesEjemploDisplay.h"

/* IMPLEMENTACION DE LOS metodos
AHORA SE IMPLEMENTAN POR REFERENCIA

*/

#include "arduino.h"
#include "libClasesEjemploDisplay.h"
//El constructor recibe un arreglo pasado por referencia con alias
//debe ir entre parentesis el identificador atepuesto el amperson alias
//luego debe ir el tamaño del arreblo entre corchetes
display::display(byte (&arreglo)[7]){
    for(byte x=0; x<sizeof(pinDisplay); x++){
      pinDisplay[x]=arreglo[x];
      pinMode(pinDisplay[x],OUTPUT);
    }
}

//el parametro num es pasado por referencia
void display::mostrar(byte &num){
	for(int x=0; x<sizeof(pinDisplay); x++){
      digitalWrite(pinDisplay[x],LOW);
    }
  if(num==0){
    digitalWrite(pinDisplay[0],HIGH); // A 
    digitalWrite(pinDisplay[1],HIGH); // B 
    digitalWrite(pinDisplay[2],HIGH); // C 
    digitalWrite(pinDisplay[3],HIGH); // D 
    digitalWrite(pinDisplay[4],HIGH); // E 
    digitalWrite(pinDisplay[5],HIGH); // F 
    
  }
  if(num==1){
   
    digitalWrite(pinDisplay[1],HIGH); // B 
    digitalWrite(pinDisplay[2],HIGH); // C 
    
  }
  if(num==2){
    digitalWrite(pinDisplay[0],HIGH); // A 
    digitalWrite(pinDisplay[1],HIGH); // B 
    digitalWrite(pinDisplay[3],HIGH); // D 
    digitalWrite(pinDisplay[4],HIGH); // E 
    digitalWrite(pinDisplay[6],HIGH); // G 
  }
  if(num==3){
    digitalWrite(pinDisplay[0],HIGH); // A 
    digitalWrite(pinDisplay[1],HIGH); // B 
    digitalWrite(pinDisplay[2],HIGH); // C 
    digitalWrite(pinDisplay[3],HIGH); // D 
   digitalWrite(pinDisplay[6],HIGH); // G 
  }
  if(num==4){
    
    digitalWrite(pinDisplay[1],HIGH); // B 
    digitalWrite(pinDisplay[2],HIGH); // C 
     
    digitalWrite(pinDisplay[5],HIGH); // F 
    digitalWrite(pinDisplay[6],HIGH); // G 
  }
  if(num==5){
    digitalWrite(pinDisplay[0],HIGH); // A 
     
    digitalWrite(pinDisplay[2],HIGH); // C 
    digitalWrite(pinDisplay[3],HIGH); // D 
    
    digitalWrite(pinDisplay[5],HIGH); // F 
    digitalWrite(pinDisplay[6],HIGH); // G 
  }
  if(num==6){
    digitalWrite(pinDisplay[0],HIGH); // A 
    
    digitalWrite(pinDisplay[2],HIGH); // C 
    digitalWrite(pinDisplay[3],HIGH); // D 
    digitalWrite(pinDisplay[4],HIGH); // E 
    digitalWrite(pinDisplay[5],HIGH); // F 
    digitalWrite(pinDisplay[6],HIGH); // G 
  }
  if(num==7){
    digitalWrite(pinDisplay[0],HIGH); // A 
    digitalWrite(pinDisplay[1],HIGH); // B 
    digitalWrite(pinDisplay[2],HIGH); // C 
    
  }
  if(num==8){
    digitalWrite(pinDisplay[0],HIGH); // A 
    digitalWrite(pinDisplay[1],HIGH); // B 
    digitalWrite(pinDisplay[2],HIGH); // C 
    digitalWrite(pinDisplay[3],HIGH); // D 
    digitalWrite(pinDisplay[4],HIGH); // E 
    digitalWrite(pinDisplay[5],HIGH); // F 
    digitalWrite(pinDisplay[6],HIGH); // G 
  }
  if(num==9){
    digitalWrite(pinDisplay[0],HIGH); // A 
    digitalWrite(pinDisplay[1],HIGH); // B 
    digitalWrite(pinDisplay[2],HIGH); // C 
    digitalWrite(pinDisplay[3],HIGH); // D 
    digitalWrite(pinDisplay[5],HIGH); // F 
    digitalWrite(pinDisplay[6],HIGH); // G 
  }
  if(num==10){
    digitalWrite(pinDisplay[0],HIGH); // A 
    digitalWrite(pinDisplay[1],HIGH); // B 
    digitalWrite(pinDisplay[2],HIGH); // C 
    digitalWrite(pinDisplay[4],HIGH); // E 
    digitalWrite(pinDisplay[5],HIGH); // F 
    digitalWrite(pinDisplay[6],HIGH); // G 
  }
  if(num==11){
    digitalWrite(pinDisplay[2],HIGH); // C 
    digitalWrite(pinDisplay[3],HIGH); // D 
    digitalWrite(pinDisplay[4],HIGH); // E 
    digitalWrite(pinDisplay[5],HIGH); // F 
    digitalWrite(pinDisplay[6],HIGH); // G 
  }
  if(num==12){
    digitalWrite(pinDisplay[0],HIGH); // A 
    
    
    digitalWrite(pinDisplay[3],HIGH); // D 
    digitalWrite(pinDisplay[4],HIGH); // E 
    digitalWrite(pinDisplay[5],HIGH); // F 
    
  }
  if(num==13){
    
    digitalWrite(pinDisplay[1],HIGH); // B 
    digitalWrite(pinDisplay[2],HIGH); // C 
    digitalWrite(pinDisplay[3],HIGH); // D 
    digitalWrite(pinDisplay[4],HIGH); // E 
     
    digitalWrite(pinDisplay[6],HIGH); // G 
  }

  if(num==14){
    digitalWrite(pinDisplay[0],HIGH); // A 
    digitalWrite(pinDisplay[3],HIGH); // D 
    digitalWrite(pinDisplay[4],HIGH); // E 
    digitalWrite(pinDisplay[5],HIGH); // F 
    digitalWrite(pinDisplay[6],HIGH); // G 
  }
  if(num==15){
    digitalWrite(pinDisplay[0],HIGH); // A 
    digitalWrite(pinDisplay[4],HIGH); // E 
    digitalWrite(pinDisplay[5],HIGH); // F 
    digitalWrite(pinDisplay[6],HIGH); // G 
  }
  
}
