#include "ConstructorJSON.hpp"
#include <iostream>

void ConstructorJSON::imprimirJSON(const GeneradorParcial& g) {
    std::ostringstream out;
    out << "{";

    // vec_doubles
    out << " \"vec_doubles\" : [";
    const auto& doubles = g.getDoubles();
    for (size_t i = 0; i < doubles.size(); ++i) {
        out << doubles[i];
        if (i + 1 < doubles.size()) {
            out << ", ";
        }
    }
    out << "],\n";

    // palabras
    out << "  \"palabras\" : [";
    const auto& strings = g.getStrings();
    for (size_t i = 0; i < strings.size(); ++i) {
        out << "\"" << strings[i] << "\"";
        if (i + 1 < strings.size()) {
            out << ", ";
        }
    }
    out << "],\n";

    // listas
    out << "  \"listas\" : [\n";
    const auto& listas = g.getListas();
    for (size_t i = 0; i < listas.size(); ++i) {
        out << "\t[";
        for (size_t j = 0; j < listas[i].size(); ++j) {
            out << listas[i][j];
            if (j + 1 < listas[i].size()) {
                out << ", ";
            }
        }
        out << "]";
        if (i + 1 < listas.size()) {
            out << ", ";
        }
        out << "\n";
    }
    out << "\t]\n";
    out << "}\n";

    std::cout << out.str();
}