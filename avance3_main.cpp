#include <iostream>
#include <vector>
#include "lavado.h"
#include "Registrocliente.h"
#include "sedan.h"
#include "camioneta.h"
#include "moto.h"
using namespace std;

int main(){
	RegistroClientes registro1;
	
	while(true){
		Vehiculo vehiculo1;
		Cliente cliente1;
		Lavado lavado1;
		Sedan sedan1;
		Camioneta camioneta1;
		Moto moto1;
		
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
			precio = 80;}
		else if (tipo == "camioneta"){
			precio = 110;}
		else if (tipo == "moto"){
			precio = 40;}
		else {
			cout<<"Tipo de auto no reconocido."<<endl;
		}
		lavado1.setPrecio(precio);
		
		cliente1.setNombre(nombre);
		cliente1.setNumero(numero);
		
		vehiculo1.setAno(ano);
		vehiculo1.setMarca(marca);
		vehiculo1.setTipo(tipo);
		
		sedan1.setAno(ano);
		sedan1.setMarca(marca);
		sedan1.setTipo(tipo);
		
		camioneta1.setAno(ano);
		camioneta1.setMarca(marca);
		camioneta1.setTipo(tipo);
		
		moto1.setAno(ano);
		moto1.setMarca(marca);
		moto1.setTipo(tipo);
		
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
		
		cliente1.imprimeCliente();
		lavado1.imprimeLavado();
		registro1.mostrarClientes();
		
		char respuesta;
        cout << "¿Desea ingresar otro cliente? (s/n): ";
        cin >> respuesta;
        if (respuesta != 's' && respuesta != 'S') {
            break; 
        }
}
return 0;

}
