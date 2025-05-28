#ifndef POSICION_HPP
#define POSICION_HPP

#include "MedicionBase.hpp"

class Posicion : public MedicionBase {
public:
    float latitud, longitud, altitud;

    /**
     * @brief Constructor con parámetros.
     * @param lat Latitud.
     * @param lon Longitud.
     * @param alt Altitud.
     * @param t Tiempo de la medición.
     */
    Posicion(float lat, float lon, float alt, float t);

    /**
     * @brief Constructor de copia. Para crear un objeto Posicion a partir de otro.
     * @param other Otro objeto Posicion.
     */
    Posicion(const Posicion& other);

    /**
     * @brief Imprime la posición.
     */
    void imprimir() const override;

    /**
     * @brief Serializa la posición.
     * @param out Flujo de salida.
     */
    void serializar(std::ofstream& out) const override;

    /**
     * @brief Deserializa la posición.
     * @param in Flujo de entrada.
     */
    void deserializar(std::ifstream& in) override;
};

#endif //POSICION_HPP