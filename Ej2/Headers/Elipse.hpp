#ifndef ELIPSE_HPP
#define ELIPSE_HPP
#include "Punto.hpp"

class Elipse {
private:
    Punto centro;
    float A, B;
public:

    /**
     * @brief Constructor que inicializa la elipse con centro y semiejes.
     * @param newX Coordenada X del centro.
     * @param newY Coordenada Y del centro.
     * @param newA Semieje mayor.
     * @param newB Semieje menor.
     */
    Elipse(float newX = 0, float newY = 0, float newA = 1, float newB = 1);

    /**
     * @brief Settea el centro de la elipse.
     * @param newX Nueva coordenada X.
     * @param newY Nueva coordenada Y.
     */
    void setCentro(float newX, float newY);

    /**
     * @brief Settea el semieje mayor.
     * @param newA Nuevo valor para el semieje mayor.
     */
    void setA(float newA);

    /**
     * @brief Settea el semieje menor.
     * @param newB Nuevo valor para el semieje menor.
     */
    void setB(float newB);

    /**
     * @brief Obtiene el centro de la elipse.
     * @return Punto que representa el centro.
     */
    Punto getCentro() const;

    /**
     * @brief Obtiene el semieje mayor.
     * @return Valor del semieje mayor.
     */
    float getA() const;

    /**
     * @brief Obtiene el semieje menor.
     * @return Valor del semieje menor.
     */
    float getB() const;

    /**
     * @brief Destructor default.
     */
    ~Elipse() = default;
};

#endif //ELIPSE_HPP