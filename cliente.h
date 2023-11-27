#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
using namespace std;

class Cliente{
	
	private:
		string nombre;
		string numero;
		
	public:
		Cliente();
		Cliente(string nom, string num);
		string getNom();
		string getNum();
		void setNombre(string nom);
		void setNumero(string num);
		void imprimeCliente();
};

Cliente::Cliente(){
	nombre = "";
	numero = "";
}

Cliente::Cliente(string nom, string num){
	nombre = nom;
	numero = num;
} 

string Cliente::getNom(){
	return nombre;
}

string Cliente::getNum(){
	return numero;
}

void Cliente::setNombre(string nom){
	nombre = nom;
}

void Cliente::setNumero(string num){
	numero = num;
}

void Cliente::imprimeCliente(){
	cout<<"Datos del cliente: "<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Numero: "<<numero<<endl;
}


#endif
