#include "Gato.h"

// Constructores
/* Por defecto */
Gato::Gato() : Mascota(), tipoPelo(TipoPelo::CORTO) {}

/* Comun */
Gato::Gato(std::string nombre, Genero genero, float peso, TipoPelo tipoPelo)
    : Mascota(nombre, genero, peso), tipoPelo(tipoPelo) {}

/* Por Copia */
Gato::Gato(const Gato& gato)
    : Mascota(gato), tipoPelo(gato.tipoPelo) {}

// GETTERS
TipoPelo Gato::getTipoPelo() const {
    return this->tipoPelo;
}

// SETTERS
void Gato::setTipoPelo(TipoPelo tipoPelo) {
    this->tipoPelo = tipoPelo;
}

// Metodos
float Gato::obtenerRacionDiaria() {
    return 0.015 * peso;
}
// Destructor