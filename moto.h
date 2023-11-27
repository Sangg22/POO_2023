#ifndef MOTO_H
#define MOTO_H
#include <iostream>
using namespace std;

#include "vehiculo.h"

class Moto : public Vehiculo {
public:
    Moto();
    Moto(string mar, int an);
    void imprimeMoto();
};

Moto::Moto() : Vehiculo("", "moto", 0) {}

Moto::Moto(string mar, int an) : Vehiculo(mar, "moto", an) {}

void Moto::imprimeMoto() {
    cout << "Datos de la moto: " << endl;
    imprimeVehiculo();
}

#endif
