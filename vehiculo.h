#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
using namespace std;

class Vehiculo{
	
	private:
		string marca;
		string tipo;
		int ano;
		
	public:
		Vehiculo(){
		};
		Vehiculo(string mar, string tip, int an);
		int getAno();
		string getMarca();
		string getTipo();
		void setAno(int an);
		void setMarca(string mar);
		void setTipo(string tip);	
		void imprimeVehiculo();
};

int Vehiculo::getAno(){
	return ano;
}

string Vehiculo::getMarca(){
	return marca;
}

string Vehiculo::getTipo(){
	return tipo;
}

void Vehiculo::setAno(int an){
	ano = an;
}

void Vehiculo::setMarca(string mar){
	marca = mar;
}

void Vehiculo::setTipo(string tip){
	tipo = tip;
}

void Vehiculo::imprimeVehiculo(){
	cout<<"Ano: "<<ano<<endl;
	cout<<"Marca: "<<marca<<endl;
	cout<<"Tipo: "<<tipo<<endl;
}

#endif
