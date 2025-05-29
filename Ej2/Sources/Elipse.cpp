#include "../Headers/Elipse.hpp"

Elipse::Elipse(float newX = 0, float newY = 0, float newA = 1, float newB = 1) : centro(newX, newY), A(newA), B(newB) {}

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