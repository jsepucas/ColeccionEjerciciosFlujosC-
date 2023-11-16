#include <iostream>
#include <cmath>

namespace Geometria {
    class Cuadrado {
    private:
        double lado;

    public:
        Cuadrado(double l) : lado(l) {}

        double calcularArea() {
            return lado * lado;
        }

        double calcularPerimetro() {
            return 4 * lado;
        }
    };
}