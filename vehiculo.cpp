#include <iostream>
#include <string>
using namespace std;

class Vehiculo{
	protected:
		string numeroPlaca;
		string color;
		string marca;
		int velocimetro
	public:
		Vehiculo(string, string, string, int);
		void mostrardatos();
		void cambiarVelocidad();
};

Vehiculo :: Vehiculo(string n, string c, string m, int v){
	numeroPlaca = n;
	color = c;
	marca = m;
	velocimetro = v;	
} 

void Vehiculo :: mostrardatos(){
	cout<<"El vehículo tiene el numero de placa: "<<numeroPlaca<<endl;
	cout<<"Es de color "<<color<<" de la marca "<<marca;
	cout<<" y en el velocimetro marca "<<velocimetro<<"km/h"<<endl;
}

class Automovil : public Vehiculo{
	private:
		int cantidadPuertas;
		int cantidadPasajeros;
	public:
		Automovil(string, string, string, int, int, int);
		void mostrarAutomovil();
		//void subirPasajeros();
		//void bajarPasajeros();
}; 

Automovil :: Automovil(string n, string c, string m, int v, int cp, int cpa) : Vehiculo(n, c, m, v){
	cantidadPuertas = cp;
	cantidadPasajeros = cpa;
}

void Automovil :: mostrarAutomovil(){
	mostrardatos();
	cout<<"es un Automovil con "<<cantidadPuertas<<"puertas";
	cout<<" y con:  "<<cantidadPasajeros<<" Pasajeros."<<endl;
} 

class Camion : public Vehiculo{
	private:
		string carga[]
		int ncarga;
	public:
		Camion(string, string, string, int, string);
		void mostrarCamion();
		//void cambiarCarga()
}; 

Camion :: Camion(string n, string c, string m, int v, string ca[], int nca ) : Vehiculo(n, c, m, v){
	ncarga = nca;
	for(int i=0; i<nca; i++){
		carga[i] = ca[i];
	}
}

void Automovil :: mostrarAutomovil(){
	mostrardatos();
	cout<<"es un Automovil con "<<cantidadPuertas<<"puertas";
	cout<<" y con:  "<<cantidadPasajeros<<" Pasajeros."<<endl;
} 