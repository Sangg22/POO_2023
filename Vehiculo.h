//Clase padre que almacenara todos los datos del vehiculo sin importar el tipo de este
//Santiago Isai González Arista- A01712184	
//03/12/23
#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
using namespace std;

class Vehiculo{
	
	//datos con protected por ser clase padre
	protected:
		string marca;
		string tipo;
		int anio;
	
	//constructores, setters y getters	
	public:
		Vehiculo();
		Vehiculo(string mar, string tip, int an);
		int getAnio();
		string getMarca();
		string getTipo();
		void setAnio(int an);
		void setMarca(string mar);
		void setTipo(string tip);	
		void imprimeVehiculo();
};

//constructor vacio
Vehiculo::Vehiculo(){
	marca = "";
	anio = 0;
	tipo = "";
}

//constructor con datos que se otorgaran
Vehiculo::Vehiculo(string mar, string tip, int an){
	marca = mar;
	tipo = tip;
	anio = an;
} 

//getters:
int Vehiculo::getAnio(){
	return anio;
}

string Vehiculo::getMarca(){
	return marca;
}

string Vehiculo::getTipo(){
	return tipo;
}

//setters:
void Vehiculo::setAnio(int an){
	anio = an;
}

void Vehiculo::setMarca(string mar){
	marca = mar;
}

void Vehiculo::setTipo(string tip){
	tipo = tip;
}

//impresion de datos de vehiculo
void Vehiculo::imprimeVehiculo(){
	cout << "anio: " << anio << endl;
	cout << "Marca: " << marca << endl;
	cout << "Tipo: " << tipo << endl;
}

#endif
