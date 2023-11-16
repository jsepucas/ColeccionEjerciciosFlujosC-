#include <iostream>
#include <cmath>
#include "circulo.cpp"
#include "triangulo.cpp"
#include "hexagono.cpp"
#include "cuadrado.cpp"
#include "rectangulo.cpp"

using namespace std;

int main() {
    int opcion;
    double radio, base, altura, lado, largo, ancho;

    cout << "Selecciona la figura para calcular su area:" << endl;
    cout << "1. Circulo" << endl;
    cout << "2. Triangulo" << endl;
    cout << "3. Hexagono" << endl;
    cout << "4. Cuadrado" << endl;
    cout << "5. Rectangulo" << endl;
    cout << "Introduce tu opcion: ";
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "Introduce el radio del circulo: ";
            cin >> radio;
            cout << "Area del circulo: " << Geometria::area_circulo(radio) << endl;
            break;
        case 2:
            cout << "Introduce la base del triangulo: ";
            cin >> base;
            cout << "Introduce la altura del triangulo: ";
            cin >> altura;
            cout << "Area del triangulo: " << Geometria::area_triangulo(base, altura) << endl;
            break;
        case 3:
            cout << "Introduce el lado del hexagono: ";
            cin >> lado;
            cout << "Area del hexagono: " << Geometria::area_hexagono(lado) << endl;
            break;
        case 4:
            cout << "Introduce el lado del cuadrado: ";
            cin >> lado;
            cout << "Area del cuadrado: " << Geometria::area_cuadrado(lado) << endl;
            break;
        case 5:
            cout << "Introduce el largo del rectangulo: ";
            cin >> largo;
            cout << "Introduce el ancho del rectangulo: ";
            cin >> ancho;
            cout << "Area del rectangulo: " << Geometria::area_rectangulo(largo, ancho) << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}
