#include "../Headers/Elipse.hpp"

void Elipse::setCentro(float newX, float newY) {
    centro.setPoint(newX, newY);
}

void Elipse::setA(float newA) {
    A = newA;
}

void Elipse::setB(float newB) {
    B = newB;
}

Punto Elipse::getCentro() const {
    return centro;
}

float Elipse::getA() const {
    return A;
}

float Elipse::getB() const {
    return B;
}