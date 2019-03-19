/* ARCHIVO HEADER O .H 
Este archivo contendra la estructura de todas las clases de la libreria
*/

#ifndef libClasesEjemploDisplay_h   // Definicion de la biblioteca de clases
#define libClasesEjemploDisplay_h   // lleva el ifndef para no incluirse dos veces
#include "arduino.h" // 

class display{  //Se define la clase display recuerden ; al cierre de la llave
    private:
		byte pinDisplay[7];
	
    public:
		void mostrar(byte);
		void iniciar(byte a, byte b, byte c, byte d, byte e,byte f, byte g);
		display();
		display(byte a, byte b, byte c, byte d, byte e,byte f, byte g);
		display(byte []);
		
};

#endif