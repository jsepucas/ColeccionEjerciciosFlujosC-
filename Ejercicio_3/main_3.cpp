#include <iostream>
#include "Clase_circulo.cpp"
#include "Clase_cuadrado.cpp"
#include "Clase_triangulo.cpp"

int main() {
    int eleccion;

    std::cout << "Elige una figura geometrica:\n";
    std::cout << "1. Circulo\n2. Cuadrado\n3. Triangulo\n";
    std::cin >> eleccion;

    switch (eleccion) {
        case 1: {
            double radio;
            std::cout << "Introduce el radio del circulo: ";
            std::cin >> radio;
            Geometria::Circulo circulo(radio);
            std::cout << "Area del circulo: " << circulo.calcularArea() << std::endl;
            std::cout << "Perimetro del circulo: " << circulo.calcularPerimetro() << std::endl;
            break;
        }
        case 2: {
            double lado;
            std::cout << "Introduce el lado del cuadrado: ";
            std::cin >> lado;
            Geometria::Cuadrado cuadrado(lado);
            std::cout << "Area del cuadrado: " << cuadrado.calcularArea() << std::endl;
            std::cout << "Perimetro del cuadrado: " << cuadrado.calcularPerimetro() << std::endl;
            break;
        }
        case 3: {
            double base, altura;
            std::cout << "Introduce la base del triangulo: ";
            std::cin >> base;
            std::cout << "Introduce la altura del triangulo: ";
            std::cin >> altura;
            Geometria::Triangulo triangulo(base, altura);
            std::cout << "Area del triangulo: " << triangulo.calcularArea() << std::endl;
            std::cout << "Perimetro del triangulo: " << triangulo.calcularPerimetro() << std::endl;
            break;
        }
        default:
            std::cout << "Opcion no valida." << std::endl;
    }

    return 0;
}