#include "../Headers/Elipse.hpp"

Elipse::Elipse(float newX, float newY, float newA, float newB) : centro(newX, newY), A(newA), B(newB) {}

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