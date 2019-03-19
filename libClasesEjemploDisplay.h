/* ARCHIVO HEADER O .H 
Archivo .H con todos los metodos por referencia
*/

#ifndef libClasesEjemploDisplay_h   // Definicion de la biblioteca de clases
#define libClasesEjemploDisplay_h   // lleva el ifndef para no incluirse dos veces
#include "arduino.h" // 

class display{  
    private:
			byte pinDisplay[7];

    public:
			void mostrar(byte &);
			display(byte (&arreglo)[7]);

};

#endif