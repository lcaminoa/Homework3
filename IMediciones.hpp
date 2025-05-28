#ifndef IMEDICIONES_HPP
#define IMEDICIONES_HPP

#include <iostream>
#include <fstream>

class IMediciones {
public:

    /**
     * @brief Serializa el objeto a un flujo de salida.
     * @param out Flujo de salida (archivo binario).
     */
    virtual void serializar(std::ofstream& out) const = 0;

    /**
     * @brief Deserializa el objeto desde un flujo de entrada.
     * @param in Flujo de entrada (archivo binario).
     */
    virtual void deserializar(std::ifstream& in) = 0;

    /**
     * @brief Destructor virtual default.
     */
    virtual ~IMediciones() = default;
};

#endif //IMEDICIONES_HPP