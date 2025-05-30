#ifndef CONSTRUCTORJSON_HPP
#define CONSTRUCTORJSON_HPP
#include "GeneradorParcial.hpp"
#include <sstream>
#include <type_traits>

class ConstructorJSON {
public:
    static void imprimirJSON(const GeneradorParcial& g);
};

#endif //CONSTRUCTORJSON_HPP