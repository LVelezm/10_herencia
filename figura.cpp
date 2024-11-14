#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Figura {
protected:
    string color;
public:
    Figura(string c) : color(c) {}
    void mostrarFigura() {
        cout << "Color de la figura: " << color << endl;
    }
};

class Circulo : public Figura {
private:
    double radio;
public:
    Circulo(string c, double r) : Figura(c), radio(r) {}

    double calcularArea() {
        return M_PI * radio * radio;
    }

    double calcularPerimetro() {
        return 2 * M_PI * radio;
    }

    void mostrarCirculo() {
        mostrarFigura();
        cout << "Tipo: Circulo" << endl;
        cout << "Radio: " << radio << endl;
        cout << "Area: " << calcularArea() << endl;
        cout << "Perimetro: " << calcularPerimetro() << endl;
    }
};

class Rectangulo : public Figura {
private:
    double base;
    double altura;
public:
    Rectangulo(string c, double b, double h) : Figura(c), base(b), altura(h) {}

    double calcularArea() {
        return base * altura;
    }

    double calcularPerimetro() {
        return 2 * (base + altura);
    }

    void mostrarRectangulo() {
        mostrarFigura();
        cout << "Tipo: Rectangulo" << endl;
        cout << "Base: " << base << ", Altura: " << altura << endl;
        cout << "Area: " << calcularArea() << endl;
        cout << "Perimetro: " << calcularPerimetro() << endl;
    }
};

class Triangulo : public Figura {
private:
    double base;
    double altura;
    string tipo;
public:
    Triangulo(string c, double b, double h, string t) : Figura(c), base(b), altura(h), tipo(t) {}

    double calcularArea() {
        return (base * altura) / 2;
    }

    void mostrarTriangulo() {
        mostrarFigura();
        cout << "Tipo: Triangulo (" << tipo << ")" << endl;
        cout << "Base: " << base << ", Altura: " << altura << endl;
        cout << "Area: " << calcularArea() << endl;
    }
};

int main() {
    Circulo c("Rojo", 5.0);
    c.mostrarCirculo();

    Rectangulo r("Azul", 4.0, 6.0);
    r.mostrarRectangulo();

    Triangulo t("Verde", 3.0, 5.0, "Isosceles");
    t.mostrarTriangulo();

    return 0;
}

