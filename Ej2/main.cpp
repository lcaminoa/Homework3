#include "./Headers/Punto.hpp"
#include "./Headers/Circulo.hpp"
#include "./Headers/Elipse.hpp"
#include "./Headers/Rectangulo.hpp"
#include "./Headers/ProcesadorFigura.hpp"

#include <iostream>
#include <string>

class FiguraRara {};

int main() {
    Circulo c(4, 2, 5);
    Elipse e(5, 6, 8, 3);
    Rectangulo r(2, 1, 8, 9);
    Punto p(1, 1);
    FiguraRara f;

    std::cout << "Área del círculo: " << ProcesadorFigura<Circulo>::area(c) << std::endl;
    std::cout << "Área de la elipse: " << ProcesadorFigura<Elipse>::area(e) << std::endl;
    std::cout << "Área del rectángulo: " << ProcesadorFigura<Rectangulo>::area(r) << std::endl;
    std::cout << "Área del punto: " << ProcesadorFigura<Punto>::area(p) << std::endl;


    // Caso sin especialización, usa el método default
    ProcesadorFigura<FiguraRara> pf;
    pf.area(f);

    // Lo mismo pero con un string
    std::string s = "texto";
    ProcesadorFigura<std::string> pf2;
    pf2.area(s);

    return 0;
}