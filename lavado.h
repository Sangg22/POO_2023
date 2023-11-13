#include <iostream>
using namespace std;

class Lavado{
	
	private:
		int precio;
	
	public:
		Lavado();
		void setPrecio(int pre);
		void imprimeLavado() const;
};

Lavado::Lavado() : precio(0) {}
void Lavado::setPrecio(int pre){
	precio = pre;
}

void Lavado::imprimeLavado() const{
	std::cout<<"El precio sera de: $"<<precio<<std::endl;
}
