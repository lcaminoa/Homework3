#ifndef RECTANGULO_HPP
#define RECTANGULO_HPP

#include "Punto.hpp"

class Rectangulo {
private:
    Punto vertInfIzq;
    float ancho, largo;
public:

    /**
     * @brief Constructor que inicializa el rectángulo con vértice inferior izquierdo, ancho y largo.
     * @param newX Coordenada X del vértice inferior izquierdo.
     * @param newY Coordenada Y del vértice inferior izquierdo.
     * @param newAncho Ancho del rectángulo.
     * @param newLargo Largo del rectángulo.
     */
    Rectangulo(float newX = 0, float newY = 0, float newAncho = 1, float newLargo = 1);

    /**
     * @brief Settea el vértice inferior izquierdo.
     * @param newX Nueva coordenada X.
     * @param newY Nueva coordenada Y.
     */
    void setVertInfInzq(float newX, float newY);

    /**
     * @brief Settea el ancho del rectángulo.
     * @param newAncho Nuevo ancho.
     */
    void setAncho(float newAncho);

    /**
     * @brief Settea el largo del rectángulo.
     * @param newLargo Nuevo largo.
     */
    void setLargo(float newLargo);

    /**
     * @brief Obtiene el vértice inferior izquierdo.
     * @return Punto que representa el vértice inferior izquierdo.
     */
    Punto getVertInfInzq() const;

    /**
     * @brief Obtiene el ancho del rectángulo.
     * @return Valor del ancho.
     */
    float getAncho() const;

    /**
     * @brief Obtiene el largo del rectángulo.
     * @return Valor del largo.
     */
    float getLargo() const;

    /**
     * @brief Destructor default.
     */
    ~Rectangulo() = default;
};

#endif //RECTANGULO_HPP