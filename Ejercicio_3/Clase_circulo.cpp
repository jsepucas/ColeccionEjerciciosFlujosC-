#include <iostream>
#include <cmath>

namespace Geometria {
    class Circulo {
    private:
        double radio;

    public:
        Circulo(double r) : radio(r) {}

        double calcularArea() {
            return M_PI * radio * radio;
        }

        double calcularPerimetro() {
            return 2 * M_PI * radio;
        }
    };
}