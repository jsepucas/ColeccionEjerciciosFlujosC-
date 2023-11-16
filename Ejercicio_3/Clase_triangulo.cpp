#include <iostream>
#include <cmath>

namespace Geometria {

    class Triangulo {
    private:
        double base;
        double altura;

    public:
        Triangulo(double b, double h) : base(b), altura(h) {}

        double calcularArea() {
            return (base * altura) / 2;
        }

        // Asumiendo un triángulo rectángulo para simplificar el cálculo del perímetro
        double calcularPerimetro() {
            return base + altura + sqrt(base * base + altura * altura);
        }
    };
}
