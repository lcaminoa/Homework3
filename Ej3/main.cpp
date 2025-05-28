#include "GeneradorParcial.hpp"
#include "ConstructorJSON.hpp"
#include <string>
#include <vector>

int main() {
    GeneradorParcial generador;

    // Agregar doubles
    generador.agregar(1.3);
    generador.agregar(2.1);
    generador.agregar(3.2);

    // Agregar strings
    generador.agregar(std::string("Hola"));
    generador.agregar(std::string("Mundo"));

    // Agregar listas de enteros
    generador.agregar(std::vector<int>{1, 2});
    generador.agregar(std::vector<int>{3, 4});

    // Mostrar JSON generado
    ConstructorJSON::imprimirJSON(generador);

    return 0;
}