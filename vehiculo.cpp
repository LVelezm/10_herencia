#include <iostream>
#include <string>
using namespace std;

class Vehiculo {
protected:
    string numeroPlaca;
    string color;
    string marca;
    int velocimetro;
public:
    Vehiculo(string, string, string, int);
    void mostrardatos();
    void cambiarVelocidad(int);
};

Vehiculo::Vehiculo(string n, string c, string m, int v) {
    numeroPlaca = n;
    color = c;
    marca = m;
    velocimetro = v;
}

void Vehiculo::mostrardatos() {
	cout <<endl; 
    cout << "El vehiculo tiene el numero de placa: " << numeroPlaca << endl;
    cout << "Es de color " << color << " de la marca " << marca;
    cout << " y en el velocimetro marca " << velocimetro << " km/h" << endl;
}

void Vehiculo::cambiarVelocidad(int nuevaVelocidad) {
    velocimetro = nuevaVelocidad;
}

class Automovil : public Vehiculo {
private:
    int cantidadPuertas;
    int cantidadPasajeros;
public:
    Automovil(string, string, string, int, int, int);
    void mostrarAutomovil();
};

Automovil::Automovil(string n, string c, string m, int v, int cp, int cpa) : Vehiculo(n, c, m, v) {
    cantidadPuertas = cp;
    cantidadPasajeros = cpa;
}

void Automovil::mostrarAutomovil() {
    mostrardatos();
    cout << "Es un Automovil con " << cantidadPuertas << " puertas";
    cout << " y con " << cantidadPasajeros << " pasajeros." << endl;
}

class Camion : public Vehiculo {
private:
    string* carga;
    int ncarga;
public:
    Camion(string, string, string, int, string[], int);
    void mostrarCamion();
};

Camion::Camion(string n, string c, string m, int v, string ca[], int nca) : Vehiculo(n, c, m, v) {
    ncarga = nca;
    carga = new string[ncarga];
    for (int i = 0; i < ncarga; i++) {
        carga[i] = ca[i];
    }
}

void Camion::mostrarCamion() {
    mostrardatos();
    cout << "Es un Camion que lleva " << ncarga << " cargas: ";
    for (int i = 0; i < ncarga; i++) {
        cout << carga[i];
        if (i < ncarga - 1) cout << ", ";
    }
    cout << "." << endl;
}

int main() {
    Automovil auto1("ABC123", "Rojo", "Toyota", 60, 4, 5);
    auto1.mostrarAutomovil();

    string cargas[] = {"Arena", "Cemento", "Grava"};
    Camion camion1("XYZ789", "Azul", "Volvo", 80, cargas, 3);
    camion1.mostrarCamion();

    return 0;
}
