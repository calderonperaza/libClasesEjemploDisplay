/* ARCHIVO HEADER O .H 
Este archivo contendra la estructura de todas las clases de la libreria
*/

#ifndef libClasesEjemploDisplay_h   // Definicion de la biblioteca de clases
#define libClasesEjemploDisplay_h   // lleva el ifndef para no incluirse dos veces
#include "arduino.h" // 

class display{  //Se define la clase display recuerden ; al cierre de la llave
    private:
			byte *pinDisplay; //puntero que apunta a un arreglo de byte
			const byte pinesMAX=7; //necesitamos la variable para saber el final
    public:
		
		void mostrar(byte *);
		display(byte *);
		
		
};

#endif