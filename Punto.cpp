#include "../Headers/Punto.hpp"

void Punto::setX(float newX) {
        x = newX;
    }

void Punto::setY(float newY) {
    y = newY;
}

void Punto::setPoint(float newX, float newY) {
    x = newX;
    y = newY;
}

float Punto::getX() const {
    return x;
}

float Punto::getY() const {
    return y;
}