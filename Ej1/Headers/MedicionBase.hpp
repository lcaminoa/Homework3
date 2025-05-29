#ifndef MEDICIONBASE_HPP
#define MEDICIONBASE_HPP
#include <memory>
#include "IMediciones.hpp"

class MedicionBase : public IMediciones {
protected:
    std::unique_ptr<float> tiempoMedicion;
public:

    /**
     * @brief Constructor con tiempo.
     * @param t Tiempo de la medición.
     */
    MedicionBase(float t);

    /**
     * @brief Constructor de copia. Para crear un objeto MedicionBase a partir de otro.
     * @param other Otro objeto MedicionBase.
     */
    MedicionBase(const MedicionBase& other);

    /**
     * @brief Obtiene el tiempo de la medición.
     * @return Tiempo de la medición.
     */
    float getTiempo() const;

    /**
     * @brief Destructor virtual default.
     */
    virtual ~MedicionBase() = default;

    /**
     * @brief Imprime la medición (método abstracto).
     */
    virtual void imprimir() const = 0;
};

#endif //MEDICIONBASE_HPP