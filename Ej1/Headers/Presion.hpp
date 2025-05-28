#ifndef PRESION_HPP
#define PRESION_HPP

#include "MedicionBase.hpp"

class Presion : public MedicionBase {
public:
    float presionEstatica, presionDinamica;

    /**
     * @brief Constructor con parámetros.
     * @param p Presión estática.
     * @param q Presión dinámica.
     * @param t Tiempo de la medición.
     */
    Presion(float p, float q, float t);

    /**
     * @brief Constructor de copia. Para crear un objeto Presion a partir de otro.
     * @param other Otro objeto Presion.
     */
    Presion(const Presion& other);

    /**
     * @brief Imprime la presión.
     */
    void imprimir() const override;

    /**
     * @brief Serializa la presión.
     * @param out Flujo de salida.
     */
    void serializar(std::ofstream& out) const override;

    /**
     * @brief Deserializa la presión.
     * @param in Flujo de entrada.
     */
    void deserializar(std::ifstream& in) override;
};

#endif //PRESION_HPP