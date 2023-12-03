#ifndef CAMIONETA_H
#define CAMIONETA_H
#include <iostream>
using namespace std;

#include "Vehiculo.h"

//clase hija de "vehiculo"
class Camioneta : public Vehiculo {
	public:
    	Camioneta();
    	Camioneta(string mar, int an);
    	void imprimeCamioneta();
};

//datos iniciales de camioneta
Camioneta::Camioneta() : Vehiculo("", "camioneta", 0) {
}

//datos que se le daran
Camioneta::Camioneta(string mar, int an) : Vehiculo(mar, "camioneta", an) {
}

//imprimir datos de la camioneta
void Camioneta::imprimeCamioneta() {
    cout << "Datos de la camioneta: " << endl;
    imprimeVehiculo();
}

#endif
