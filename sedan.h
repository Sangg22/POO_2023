#ifndef SEDAN_H
#define SEDAN_H
#include <iostream>
using namespace std;

#include "vehiculo.h"

class Sedan : public Vehiculo {
public:
    Sedan();
    Sedan(string mar, int an);
    void imprimeSedan();
};

Sedan::Sedan() : Vehiculo("", "sedan", 0) {}

Sedan::Sedan(string mar, int an) : Vehiculo(mar, "sedan", an) {}

void Sedan::imprimeSedan() {
    cout << "Datos del sedan: " << endl;
    imprimeVehiculo();
}

#endif
