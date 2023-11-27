#ifndef REGISTROCLIENTE_H
#define REGISTROCLIENTE_H
#include <iostream>
#include <vector>
#include "cliente.h"

using namespace std;

class RegistroClientes {
private:
    vector<Cliente> clientes;

public:
	RegistroClientes();
    void agregarCliente(Cliente& clienteNuevo) {
        clientes.push_back(clienteNuevo);
    }

    void mostrarClientes() {
        cout << "Lista de clientes:" << endl;
        for (int i = 0; i < clientes.size(); i++) {
            std::cout << "Nombre: " << clientes[i].getNom() << ", Numero: " << clientes[i].getNum() << std::endl;
        }
    }
};

RegistroClientes::RegistroClientes(){	
}
#endif
