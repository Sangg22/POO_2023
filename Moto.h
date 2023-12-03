#ifndef MOTO_H
#define MOTO_H
#include <iostream>
using namespace std;

#include "Vehiculo.h"

//clase hija de "vehiculo"
class Moto : public Vehiculo {
	
	//datos de lo que tendra la moto
	public:
    	Moto();
    	Moto(string mar, int an);
    	void imprimeMoto();
};

//constructor vacio
Moto::Moto() : Vehiculo("", "moto", 0) {
}

//constructor con datos que tendra
Moto::Moto(string mar, int an) : Vehiculo(mar, "moto", an) {
}

//imprimir datos
void Moto::imprimeMoto() {
    cout << "Datos de la moto: " << endl;
    imprimeVehiculo();
}

#endif
