#ifndef PUNTO_HPP
#define PUNTO_HPP

class Punto {
private:
    float x, y;
public:

    /**
     * @brief Constructor que inicializa el punto con las coordenadas dadas.
     * @param newX Coordenada X.
     * @param newY Coordenada Y.
     */
    Punto(float newX = 0, float newY = 0) : x(newX), y(newY) {}

    /**
     * @brief Settea la coordenada X.
     * @param newX Nuevo valor para X.
     */
    void setX(float newX);

    /**
     * @brief Settea la coordenada Y.
     * @param newY Nuevo valor para Y.
     */
    void setY(float newY);

    /**
     * @brief Settea ambas coordenadas del punto.
     * @param newX Nuevo valor para X.
     * @param newY Nuevo valor para Y.
     */
    void setPoint(float newX, float newY);

    /**
     * @brief Obtiene la coordenada X.
     * @return Valor de X.
     */
    float getX() const;

    /**
     * @brief Obtiene la coordenada Y.
     * @return Valor de Y.
     */
    float getY() const;

    /**
     * @brief Destructor default.
     */
    ~Punto() = default;
};

#endif // PUNTO_HPP