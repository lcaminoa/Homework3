#ifndef SAVEFLIGHTDATA_HPP
#define SAVEFLIGHTDATA_HPP
#include "Presion.hpp"
#include "Posicion.hpp"

class SaveFlightData {
public:
    Posicion posicion;
    Presion presion;

    /**
     * @brief Constructor que inicializa los datos de vuelo.
     * @param p Objeto Posicion.
     * @param q Objeto Presion.
     */
    SaveFlightData(const Posicion& p, const Presion& q);

    /**
     * @brief Serializa los datos de vuelo a un archivo binario.
     * @param out Flujo de salida de archivo.
     */
    void serializar(std::ofstream& out) const;

    /**
     * @brief Deserializa los datos de vuelo desde un archivo binario.
     * @param in Flujo de entrada de archivo.
     */
    void deserializar(std::ifstream& in);

    /**
     * @brief Imprime los datos de vuelo por consola.
     */
    void imprimir() const;

    /**
     * @brief Destructor default.
     */
    ~SaveFlightData() = default;
};

#endif //SAVEFLIGHTDATA_HPP