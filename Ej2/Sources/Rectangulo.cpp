#include "../Headers/Rectangulo.hpp"

Rectangulo::Rectangulo(float newX, float newY, float newAncho, float newLargo)
    : vertInfIzq(newX, newY), ancho(newAncho), largo(newLargo) {}

void Rectangulo::setVertInfInzq(float newX, float newY) {
    vertInfIzq.setPoint(newX, newY);
}

void Rectangulo::setAncho(float newAncho) {
    ancho = newAncho;
}

void Rectangulo::setLargo(float newLargo) {
    largo = newLargo;
}

Punto Rectangulo::getVertInfInzq() const {
    return vertInfIzq;
}

float Rectangulo::getAncho() const {
    return ancho;
}

float Rectangulo::getLargo() const {
    return largo;
}