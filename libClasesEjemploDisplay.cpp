/* Archivo CPP incluye la definicion de todos los metodos
definidos en el archivo de .H
*/

#include "arduino.h"
#include "libClasesEjemploDisplay.h"


display::display(byte *ptrArreglo){
  pinDisplay=ptrArreglo;
  
  //para saber el final del arreglo, voy desplazando el puntero
  //hasta que el contenido al que apunta tiene NULL ahi es donde termina el arreglo
  for(byte x=0; *(pinDisplay+x)!=NULL; x++){
    /*Serial.print("forma de arreglo pines[x]=");
    Serial.println(pinDisplay[x]);
    Serial.print("forma de puntero *(pines+x)=");
    Serial.println(*(pinDisplay+x));*/
    pinMode(*(pinDisplay+x),OUTPUT);
    digitalWrite(*(pinDisplay+x),LOW);
  }    
}



void display::mostrar(byte *num){
  //para saber el final del arreglo, voy desplazando el puntero
  //hasta que el mismo apunta a NULL ahi es donde termina el arreglo
  for(byte x=0; *(pinDisplay+x)!=NULL; x++){
    //accediendo como puntero
      digitalWrite(*(pinDisplay+x),LOW);
    }

  if(*num==0){
    //Accediendo como puntero
    digitalWrite(*pinDisplay,HIGH);     // A 
    digitalWrite(*(pinDisplay+1),HIGH); // B 
    digitalWrite(*(pinDisplay+2),HIGH); // C 
    digitalWrite(*(pinDisplay+3),HIGH); // D 
    digitalWrite(*(pinDisplay+4),HIGH); // E 
    digitalWrite(*(pinDisplay+5),HIGH); // F 
        
  }
  if(*num==1){
    // siempre como puntero
    digitalWrite(*(pinDisplay+1),HIGH); // B 
    digitalWrite(*(pinDisplay+2),HIGH); // C 
    
    
  }
  if(*num==2){
    //Accediendo como si fuera un arreglo
    // tambien se puede asi, ojo
    digitalWrite(pinDisplay[0],HIGH); // A 
    digitalWrite(pinDisplay[1],HIGH); // B 
    digitalWrite(pinDisplay[3],HIGH); // D 
    digitalWrite(pinDisplay[4],HIGH); // E 
    digitalWrite(pinDisplay[6],HIGH); // G 
  }
  if(*num==3){
    digitalWrite(pinDisplay[0],HIGH); // A 
    digitalWrite(pinDisplay[1],HIGH); // B 
    digitalWrite(pinDisplay[2],HIGH); // C 
    digitalWrite(pinDisplay[3],HIGH); // D 
   digitalWrite(pinDisplay[6],HIGH); // G 
  }
  if(*num==4){
    
    digitalWrite(pinDisplay[1],HIGH); // B 
    digitalWrite(pinDisplay[2],HIGH); // C 
     
    digitalWrite(pinDisplay[5],HIGH); // F 
    digitalWrite(pinDisplay[6],HIGH); // G 
  }
  if(*num==5){
    digitalWrite(pinDisplay[0],HIGH); // A 
     
    digitalWrite(pinDisplay[2],HIGH); // C 
    digitalWrite(pinDisplay[3],HIGH); // D 
    
    digitalWrite(pinDisplay[5],HIGH); // F 
    digitalWrite(pinDisplay[6],HIGH); // G 
  }
  if(*num==6){
    digitalWrite(pinDisplay[0],HIGH); // A 
    
    digitalWrite(pinDisplay[2],HIGH); // C 
    digitalWrite(pinDisplay[3],HIGH); // D 
    digitalWrite(pinDisplay[4],HIGH); // E 
    digitalWrite(pinDisplay[5],HIGH); // F 
    digitalWrite(pinDisplay[6],HIGH); // G 
  }
  if(*num==7){
    digitalWrite(pinDisplay[0],HIGH); // A 
    digitalWrite(pinDisplay[1],HIGH); // B 
    digitalWrite(pinDisplay[2],HIGH); // C 
    
  }
  if(*num==8){
    digitalWrite(*pinDisplay,HIGH);     // A 
    digitalWrite(*(pinDisplay+1),HIGH); // B 
    digitalWrite(*(pinDisplay+2),HIGH); // C 
    digitalWrite(*(pinDisplay+3),HIGH); // D 
    digitalWrite(*(pinDisplay+4),HIGH); // E 
    digitalWrite(*(pinDisplay+5),HIGH); // F 
    digitalWrite(*(pinDisplay+6),HIGH); // G 
  }
  if(*num==9){
    digitalWrite(pinDisplay[0],HIGH); // A 
    digitalWrite(pinDisplay[1],HIGH); // B 
    digitalWrite(pinDisplay[2],HIGH); // C 
    digitalWrite(pinDisplay[3],HIGH); // D 
    digitalWrite(pinDisplay[5],HIGH); // F 
    digitalWrite(pinDisplay[6],HIGH); // G 
  }
  if(*num==10){
    digitalWrite(pinDisplay[0],HIGH); // A 
    digitalWrite(pinDisplay[1],HIGH); // B 
    digitalWrite(pinDisplay[2],HIGH); // C 
    digitalWrite(pinDisplay[4],HIGH); // E 
    digitalWrite(pinDisplay[5],HIGH); // F 
    digitalWrite(pinDisplay[6],HIGH); // G 
  }
  if(*num==11){
    digitalWrite(pinDisplay[2],HIGH); // C 
    digitalWrite(pinDisplay[3],HIGH); // D 
    digitalWrite(pinDisplay[4],HIGH); // E 
    digitalWrite(pinDisplay[5],HIGH); // F 
    digitalWrite(pinDisplay[6],HIGH); // G 
  }
  if(*num==12){
    digitalWrite(pinDisplay[0],HIGH); // A 
    
    
    digitalWrite(pinDisplay[3],HIGH); // D 
    digitalWrite(pinDisplay[4],HIGH); // E 
    digitalWrite(pinDisplay[5],HIGH); // F 
    
  }
  if(*num==13){
    
    digitalWrite(pinDisplay[1],HIGH); // B 
    digitalWrite(pinDisplay[2],HIGH); // C 
    digitalWrite(pinDisplay[3],HIGH); // D 
    digitalWrite(pinDisplay[4],HIGH); // E 
     
    digitalWrite(pinDisplay[6],HIGH); // G 
  }

  if(*num==14){
    digitalWrite(pinDisplay[0],HIGH); // A 
    digitalWrite(pinDisplay[3],HIGH); // D 
    digitalWrite(pinDisplay[4],HIGH); // E 
    digitalWrite(pinDisplay[5],HIGH); // F 
    digitalWrite(pinDisplay[6],HIGH); // G 
  }
  if(*num==15){
    digitalWrite(pinDisplay[0],HIGH); // A 
    digitalWrite(pinDisplay[4],HIGH); // E 
    digitalWrite(pinDisplay[5],HIGH); // F 
    digitalWrite(pinDisplay[6],HIGH); // G 
  }
  
}


