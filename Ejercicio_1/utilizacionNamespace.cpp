#include <iostream>
#include <cmath>

namespace Matematicas {

    double suma(int a, int b) {
        return a + b;
    }

    double resta(int a, int b) {
        return a - b;
    }

    double multiplicacion(int a, int b) {
        return a * b;
    }

    double division(int a, int b) {
        if (b == 0) {
            std::cerr << "Error: Division por cero." << std::endl;
            return 0;
        }
        return a / b;
    }

    double cuadrado(int a) {
        return a * a;
    }

    double raiz(int a) {
        if (a < 0) {
            std::cerr << "Error: Raiz cuadrada de un numero negativo." << std::endl;
            return -1;
        }
        return sqrt(a);
    }
}

int main() {
    int opcion;
    double numero1, numero2;

    std::cout << "Elige una operación:\n";
    std::cout << "1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Cuadrado\n6. Raiz\n";
    std::cin >> opcion;

    switch(opcion) {
        case 1:
        case 2:
        case 3:
            std::cout << "Introduce dos numeros: ";
            std::cin >> numero1 >> numero2;
            break;
        case 4:
            std::cout << "Introduce dos numeros (el segundo no debe ser 0): ";
            std::cin >> numero1 >> numero2;
            if (numero2 == 0) {
                std::cerr << "Error: Division por cero." << std::endl;
                return 1;
            }
            break;
        case 5:
        case 6:
            std::cout << "Introduce un numero: ";
            std::cin >> numero1;
            if (opcion == 6 && numero1 < 0) {
                std::cerr << "Error: Ra1z cuadrada de un numero negativo." << std::endl;
                return 1;
            }
            break;
        default:
            std::cout << "Opcion no válida." << std::endl;
            return 1;
    }

    double resultado;
    switch(opcion) {
        case 1: resultado = Matematicas::suma(numero1, numero2); break;
        case 2: resultado = Matematicas::resta(numero1, numero2); break;
        case 3: resultado = Matematicas::multiplicacion(numero1, numero2); break;
        case 4: resultado = Matematicas::division(numero1, numero2); break;
        case 5: resultado = Matematicas::cuadrado(numero1); break;
        case 6: resultado = Matematicas::raiz(numero1); break;
    }

    std::cout << "Resultado: " << resultado << std::endl;

    return 0;
}