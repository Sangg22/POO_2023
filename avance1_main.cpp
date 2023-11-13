#include <iostream>
#include "lavado.h"
#include "vehiculo.h"
#include "cliente.h"
using namespace std;

int main(){
	Vehiculo Vehiculo1;
	Cliente cliente1;
	Lavado lavado1;
	
	string marca;
	string tipo;
	int ano;
	string nombre;
	string numero;
	int precio;
	string secado;
	
	cout<<"Ingrese sus datos"<<endl;
	cout<<"Ingrese su nombre: ";
	cin>>nombre;
	cout<<"Ingrese su numero de celular: ";
	cin>>numero;
	
	cout<<"Ingrese datos del vehiculo"<<endl;
	cout<<"Ingrese la marca del vehiculo: ";
	cin>>marca;
	cout<<"Ingrese el tipo de vehiculo (camioneta, sedan o moto): ";
	cin>>tipo;
	cout<<"Ingrese el ano del vehiculo: ";
	cin>>ano;
	
	if (tipo == "sedan"){
		precio = 80;
	}
	else if (tipo == "camioneta"){
		precio = 110;
	}
	else if (tipo == "moto"){
		precio = 40;
	}
	else {
		cout<<"Tipo de auto no reconocido."<<endl;
	}
	
	lavado1.setPrecio(precio);
	
	cliente1.setNombre(nombre);
	cliente1.setNumero(numero);
	
	Vehiculo1.setAno(ano);
	Vehiculo1.setMarca(marca);
	Vehiculo1.setTipo(tipo);
	
	
	cliente1.imprimeCliente();
	Vehiculo1.imprimeVehiculo();
	lavado1.imprimeLavado();
	
	return 0;
}
