#ifndef GENERADORPARCIAL_HPP
#define GENERADORPARCIAL_HPP

#include <vector>
#include <string>
#include <iostream>

class GeneradorParcial {
private:
    std::vector<double> doubles;
    std::vector<std::string> strings;
    std::vector<std::vector<int>> listas;

public:
    template <typename T>
    void agregar(const T& dato) {
        if constexpr (std::is_same<T, double>::value) {
            doubles.push_back(dato);
        }
        else if constexpr (std::is_same<T, std::string>::value) {
            strings.push_back(dato);
        }
        else if constexpr (std::is_same<T, std::vector<int>>::value) {
            listas.push_back(dato);
        }
        else {
            std::cerr << "Tipo no soportado.\n";
        }
    }

    // Getters
    const std::vector<double>& getDoubles() const {
        return doubles;
    }
    const std::vector<std::string>& getStrings() const {
        return strings;
    }
    const std::vector<std::vector<int>>& getListas() const {
        return listas;
    }
};

#endif // GENERADORPARCIAL_HPP