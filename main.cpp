#include "../Headers/Posicion.hpp"
#include "../Headers/Presion.hpp"
#include "../Headers/SaveFlightData.hpp"

int main() {
    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3f);
    Presion presion(101.3f, 5.8f, 6.1f);

    SaveFlightData data(posicion, presion);

    std::cout << "Original:\n";
    data.imprimir();

    // Serializar
    std::ofstream out("data.bin", std::ios::binary);
    data.serializar(out);
    out.close();

    // Deserializar
    SaveFlightData data2(Posicion(0, 0, 0, 0), Presion(0, 0, 0));
    std::ifstream in("data.bin", std::ios::binary);
    data2.deserializar(in);
    in.close();

    std::cout << "Deserializado:\n";
    data2.imprimir();

    return 0;
}