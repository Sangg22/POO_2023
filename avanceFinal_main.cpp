//Programa .cpp en el que se llevara a cabo todos los procesos
//Santiago Isai González Arista- A01712184	
//03/12/23
#include <iostream>
#include <vector>
#include "Lavado.h"
#include "RegistroCliente.h"
#include "Sedan.h"
#include "Camioneta.h"
#include "Moto.h"
using namespace std;

int main(){
	RegistroCliente registro1;
	
	//ciclo while para agregar mas clientes
	while(true){
		string marca;
		string tipo;
		int anio;
		string nombre;
		string numero;
		int precio;
		string secado;
		
		//solicitar datos del usuario
		cout << "*****Autolavado*****" << endl;
		cout << "Ingrese sus datos" << endl;
		cout << "Ingrese su nombre: ";
		cin >> nombre;
		cout << "Ingrese su numero de celular: ";
		cin >> numero;
		
		//solicitas datos del vehiculo
		cout << "Ingrese datos del vehiculo" << endl;
		cout << "Ingrese la marca del vehiculo: ";
		cin >> marca;
		cout << "Ingrese el tipo de vehiculo (camioneta, sedan o moto): ";
		cin >> tipo;
		cout << "Ingrese el anio del vehiculo: ";
		cin >> anio;
		
		//condicionales para definir precio
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
			cout << "Tipo de auto no reconocido." << endl;
		}
		
		//creacion de objetos
		Lavado lavado1(precio);
		Cliente cliente1(nombre,numero);
		Vehiculo vehiculo1(marca,tipo,anio);
		Sedan sedan1(marca,anio);
		Camioneta camioneta1(marca,anio);
		Moto moto1(marca,anio);

		//tipo de vehiculo
		if(tipo == "sedan"){
		sedan1.imprimeSedan();
		}
		else if(tipo == "camioneta"){
		camioneta1.imprimeCamioneta();
		}
		else if(tipo == "moto"){
		moto1.imprimeMoto();
		}
		
		registro1.agregarCliente(cliente1);
		
		//imprimir todos los datos
		cliente1.imprimeCliente();
		lavado1.imprimeLavado();
		registro1.mostrarClientes();
		
		//condicional para agregar mas clientes
		char respuesta;
        cout << "¿Desea ingresar otro cliente? (s/n): ";
        cin >> respuesta;
        if (respuesta != 's' && respuesta != 'S') {
            break; 
        }
	}
return 0;
}
