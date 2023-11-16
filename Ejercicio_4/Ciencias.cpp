#include <iostream>

namespace Ciencia {
    namespace Fisica {
        const double VELOCIDAD_DE_LA_LUZ = 299792458; // en metros por segundo

        double energiaDeMasa(double masa) {
            return masa * VELOCIDAD_DE_LA_LUZ * VELOCIDAD_DE_LA_LUZ;
        }
    }

    namespace Quimica {
        const double NUMERO_DE_AVOGADRO = 6.02214076e23; // mol^-1

        double molesDeParticulas(double particulas) {
            return particulas / NUMERO_DE_AVOGADRO;
        }
    }

    namespace Biologia {
        double indiceMasaCorporal(double peso, double altura) {
            return peso / (altura * altura);
        }
    }
}

int main() {
    int eleccion;

    std::cout << "Elige una disciplina cientifica:\n";
    std::cout << "1. Fisica\n2. Quimica\n3. Biologia\n";
    std::cin >> eleccion;

    switch (eleccion) {
        case 1: {
            double masa;
            std::cout << "Introduce la masa en kilogramos: ";
            std::cin >> masa;
            double energia = Ciencia::Fisica::energiaDeMasa(masa);
            std::cout << "Energia de una masa de " << masa << " kg: " << energia << " Joules" << std::endl;
            break;
        }
        case 2: {
            double particulas;
            std::cout << "Introduce el numero de particulas: ";
            std::cin >> particulas;
            double moles = Ciencia::Quimica::molesDeParticulas(particulas);
            std::cout << particulas << " particulas corresponden a " << moles << " moles" << std::endl;
            break;
        }
        case 3: {
            double peso, altura;
            std::cout << "Introduce el peso en kilogramos: ";
            std::cin >> peso;
            std::cout << "Introduce la altura en metros: ";
            std::cin >> altura;
            double imc = Ciencia::Biologia::indiceMasaCorporal(peso, altura);
            std::cout << "El indice de masa corporal es: " << imc << std::endl;
            break;
        }
        default:
            std::cout << "Opcion no valida." << std::endl;
    }

    return 0;
}