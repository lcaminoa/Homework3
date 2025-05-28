#include "../Headers/MedicionBase.hpp"

MedicionBase::MedicionBase(float t)
    : tiempoMedicion(std::make_unique<float>(t)) {}

MedicionBase::MedicionBase(const MedicionBase& other)
    : tiempoMedicion(std::make_unique<float>(*other.tiempoMedicion)) {}

float MedicionBase::getTiempo() const {
    return *tiempoMedicion;
}