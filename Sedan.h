#ifndef SEDAN_H
#define SEDAN_H
#include <iostream>
using namespace std;

#include "Vehiculo.h"

//clase hija de "vehiculo"
class Sedan : public Vehiculo {
	
	//constructores e impresion de datos
	public:
    	Sedan();
    	Sedan(string mar, int an);
    	void imprimeSedan();
};

//constructor vacio
Sedan::Sedan() : Vehiculo("", "sedan", 0) {
}

//constructor con datos que se otorgaran
Sedan::Sedan(string mar, int an) : Vehiculo(mar, "sedan", an) {
}

//impresion de datos
void Sedan::imprimeSedan() {
    cout << "Datos del sedan: " << endl;
    imprimeVehiculo();
}

#endif
