#include "../Headers/Posicion.hpp"

Posicion::Posicion(float lat, float lon, float alt, float t)
    : MedicionBase(t), latitud(lat), longitud(lon), altitud(alt) {}

Posicion::Posicion(const Posicion& other)
    : MedicionBase(other), latitud(other.latitud), longitud(other.longitud), altitud(other.altitud) {}

void Posicion::imprimir() const {
    std::cout << "Posición => lat: " << latitud
              << ", lon: " << longitud
              << ", alt: " << altitud
              << ", tiempo: " << getTiempo() << '\n';
}

void Posicion::serializar(std::ofstream& out) const {
    out.write(reinterpret_cast<const char*>(&latitud), sizeof(latitud));
    out.write(reinterpret_cast<const char*>(&longitud), sizeof(longitud));
    out.write(reinterpret_cast<const char*>(&altitud), sizeof(altitud));
    out.write(reinterpret_cast<const char*>(tiempoMedicion.get()), sizeof(float)); // Uso .get() para que me dé un raw pointer al tiempo
}

void Posicion::deserializar(std::ifstream& in) {
    in.read(reinterpret_cast<char*>(&latitud), sizeof(latitud));
    in.read(reinterpret_cast<char*>(&longitud), sizeof(longitud));
    in.read(reinterpret_cast<char*>(&altitud), sizeof(altitud));
    tiempoMedicion = std::make_unique<float>();
    in.read(reinterpret_cast<char*>(tiempoMedicion.get()), sizeof(float));
}