#include <iostream>

using namespace std;

class Lavado{
	
	//datos privados del lavado
	private:
		int precio;
	
	//constructores y setter
	public:
		Lavado();
		Lavado(int pre);
		void setPrecio(int pre);
		void imprimeLavado() const;
};

//constructor vacio
Lavado::Lavado() {
	precio = 0;
}

//constructor con los datos que tendra
Lavado::Lavado(int pre){
	precio = pre;
}

//setter de precio
void Lavado::setPrecio(int pre){
	precio = pre;
}

//impresion de dato
void Lavado::imprimeLavado() const{
	cout << "El precio del lavado sera de: $" << precio << endl;
}
