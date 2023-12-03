//Clase que servira para agregar clientes a una lista de los mismos
//Santiago Isai González Arista- A01712184	
//03/12/23
#ifndef REGISTROCLIENTE_H
#define REGISTROCLIENTE_H
#include <iostream>
#include <vector>
#include "Cliente.h"

using namespace std;

class RegistroCliente {
	
	private:
		//creacion de vector para agregar clientes
    	vector<Cliente> clientes;

	public:
		//constructor vacio
		RegistroCliente();
    
    	//funcion para agregar clientes con push_back
		void agregarCliente(Cliente& clienteNuevo) {
        	clientes.push_back(clienteNuevo);
    	}
		
		//funcion para mostrar lista de clientes
    	void mostrarClientes() {
        	cout << "Lista de clientes:" << endl;
        	for (int i = 0; i < clientes.size(); i++) {
            	std::cout << "Nombre: " << clientes[i].getNom() << ", Numero: " << clientes[i].getNum() << std::endl;
        	}
    	}
};

//constructor vacio
RegistroCliente::RegistroCliente(){	
}
#endif
