#include "../Headers/Presion.hpp"

Presion::Presion(float p, float q, float t)
    : MedicionBase(t), presionEstatica(p), presionDinamica(q) {}

Presion::Presion(const Presion& other)
    : MedicionBase(other), presionEstatica(other.presionEstatica), presionDinamica(other.presionDinamica) {}

void Presion::imprimir() const {
    std::cout << "Presión estática: " << presionEstatica << ", Presión dinámica: " << presionDinamica << ", tiempo: " << getTiempo() << '\n';
}

void Presion::serializar(std::ofstream& out) const {
    out.write(reinterpret_cast<const char*>(&presionEstatica), sizeof(presionEstatica));
    out.write(reinterpret_cast<const char*>(&presionDinamica), sizeof(presionDinamica));
    out.write(reinterpret_cast<const char*>(tiempoMedicion.get()), sizeof(float)); // Uso .get() para que me dé un raw pointer al tiempo
}

void Presion::deserializar(std::ifstream& in) {
    in.read(reinterpret_cast<char*>(&presionEstatica), sizeof(presionEstatica));
    in.read(reinterpret_cast<char*>(&presionDinamica), sizeof(presionDinamica));
    tiempoMedicion = std::make_unique<float>();
    in.read(reinterpret_cast<char*>(tiempoMedicion.get()), sizeof(float));
}