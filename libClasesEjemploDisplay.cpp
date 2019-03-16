/* Archivo CPP incluye la definicion de todos los metodos
definidos en el archivo de .H
*/

#include "Arduino.h"
#include "libClasesEjemploDisplay.h"

void display::mostrar(byte num){
	if(sizeof(pinDisplay)==0){
		return;
	}else if(sizeof(pinDisplay)/sizeof(pinDisplay[0])!=7){
		return;
	}
	
	for(int x=0; x<7; x++){
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

void display::iniciar(byte a, byte b, byte c, byte d, byte e,byte f, byte g){
	pinDisplay[0]=a;
	pinDisplay[1]=b;
	pinDisplay[2]=c;
	pinDisplay[3]=d;
	pinDisplay[4]=e;
	pinDisplay[5]=f;
	pinDisplay[6]=g;
	
}