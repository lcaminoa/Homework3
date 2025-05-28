#include "../Headers/Circulo.hpp"

void Circulo::setCentro(float newX, float newY) {
    centro.setPoint(newX, newY);
}

void Circulo::setRadio(float newRad) {
    radio = newRad;
}

Punto Circulo::getCentro() const {
    return centro;
}

float Circulo::getRadio() const {
    return radio;
}