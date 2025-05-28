#ifndef PROCESADORFIGURA_HPP
#define PROCESADORFIGURA_HPP

#include <iostream>
#include <cmath>
#include "Rectangulo.hpp"
#include "Circulo.hpp"
#include "Elipse.hpp"

/**
 * @brief Clase plantilla para procesar figuras y calcular su área.
 * @tparam T Tipo de figura.
 */
template <typename T>
class ProcesadorFigura {
public:
    /**
     * @brief Método default para tipos no especializados.
     * @param figura Objeto de tipo T.
     */
    void area(T&) {
        std::cout << "No puede calcularse el área de esta figura." << std::endl;
    }
};

/**
 * @brief Especialización de ProcesadorFigura para Punto.
 */
template <>
class ProcesadorFigura<Punto> {
public:
    /**
     * @brief Calcula el área de un punto (siempre 0).
     * @param p Punto.
     * @return Área (0).
     */
    static float area(const Punto&) {
        return 0.0;
    }
};

/**
 * @brief Especialización de ProcesadorFigura para Circulo.
 */
template <>
class ProcesadorFigura<Circulo> {
public:
    /**
     * @brief Calcula el área de un círculo.
     * @param c Círculo.
     * @return Área del círculo.
     */
    static float area(const Circulo& c) {
        return M_PI * c.getRadio() * c.getRadio();
    }
};

/**
 * @brief Especialización de ProcesadorFigura para Elipse.
 */
template <>
class ProcesadorFigura<Elipse> {
public:
    /**
     * @brief Calcula el área de una elipse.
     * @param e Elipse.
     * @return Área de la elipse.
     */
    static float area(const Elipse& e) {
        return M_PI * e.getA() * e.getB();
    }
};

/**
 * @brief Especialización de ProcesadorFigura para Rectangulo.
 */
template<>
class ProcesadorFigura<Rectangulo> {
public:
    /**
     * @brief Calcula el área de un rectángulo.
     * @param r Rectángulo.
     * @return Área del rectángulo.
     */
    static float area(const Rectangulo& r) {
        return r.getAncho() * r.getLargo();
    }
};

#endif //PROCESADORFIGURA_HPP