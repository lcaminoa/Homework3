#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include "Punto.hpp"

class Circulo {
private:
    Punto centro;
    float radio;
public:

    /**
     * @brief Constructor que inicializa el círculo con centro y radio.
     * @param newX Coordenada X del centro.
     * @param newY Coordenada Y del centro.
     * @param newRad Radio del círculo.
     */
    Circulo(float newX = 0, float newY = 0, float newRad = 1) : centro(newX, newY), radio(newRad) {}

    /**
     * @brief Settea el centro del círculo.
     * @param newX Nueva coordenada X.
     * @param newY Nueva coordenada Y.
     */
    void setCentro(float newX, float newY);

    /**
     * @brief Settea el radio del círculo.
     * @param newRad Nuevo radio.
     */
    void setRadio(float newRad);

    /**
     * @brief Obtiene el centro del círculo.
     * @return Punto que representa el centro.
     */
    Punto getCentro() const;

    /**
     * @brief Obtiene el radio del círculo.
     * @return Valor del radio.
     */
    float getRadio() const;

    /**
     * @brief Destructor default.
     */
    ~Circulo() = default;
};

#endif //CIRCULO_HPP