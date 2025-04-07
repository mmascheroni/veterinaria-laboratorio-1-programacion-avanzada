#include "DtGato.h"

// Constructores
/* Por Defecto */
DtGato::DtGato() : DtMascota(), tipoPelo(TipoPelo::CORTO) {}

/* Comun */
DtGato::DtGato(std::string nombre, Genero genero, float peso, float racionDiaria, TipoPelo tipoPelo) : DtMascota(nombre, genero, peso, racionDiaria), tipoPelo(tipoPelo) {}

/* Por Copia */
DtGato::DtGato(const DtGato& DtGato) : DtMascota(DtGato), tipoPelo(DtGato.tipoPelo) {}

// Getters
TipoPelo DtGato::getTipoPelo() const {
    return this->tipoPelo;
}

// Setters
void DtGato::setTipoPelo(TipoPelo tipoPelo) {
    this->tipoPelo = tipoPelo;
}


// Destructor