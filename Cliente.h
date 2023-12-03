//Clase para almacenar todos los datos de un cliente
//Santiago Isai González Arista- A01712184	
//03/12/23
#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
using namespace std;

class Cliente{
	
	//datos privados del cliente
	private:
		string nombre;
		string numero;
	
	//constructores, getters y setters	
	public:
		Cliente();
		Cliente(string nom, string num);
		string getNom();
		string getNum();
		void setNombre(string nom);
		void setNumero(string num);
		void imprimeCliente();
};

//constructor vacio con datos vacios
Cliente::Cliente(){
	nombre = "";
	numero = "";
}

//datos que se le daran
Cliente::Cliente(string nom, string num){
	nombre = nom;
	numero = num;
} 

//getters:
string Cliente::getNom(){
	return nombre;
}

string Cliente::getNum(){
	return numero;
}

//setters:
void Cliente::setNombre(string nom){
	nombre = nom;
}

void Cliente::setNumero(string num){
	numero = num;
}

//impresion de datos
void Cliente::imprimeCliente(){
	cout << "Datos del cliente: " << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Numero: " << numero << endl;
}

#endif
