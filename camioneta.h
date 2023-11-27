#ifndef CAMIONETA_H
#define CAMIONETA_H
#include <iostream>
using namespace std;

#include "vehiculo.h"

class Camioneta : public Vehiculo {
public:
    Camioneta();
    Camioneta(string mar, int an);
    void imprimeCamioneta();
};

Camioneta::Camioneta() : Vehiculo("", "camioneta", 0) {}

Camioneta::Camioneta(string mar, int an) : Vehiculo(mar, "camioneta", an) {}

void Camioneta::imprimeCamioneta() {
    cout << "Datos de la camioneta: " << endl;
    imprimeVehiculo();
}

#endif
