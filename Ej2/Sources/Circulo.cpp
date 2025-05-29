#include "../Headers/Circulo.hpp"

Circulo::Circulo(float newX = 0, float newY = 0, float newRad = 1) : centro(newX, newY), radio(newRad) {}

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