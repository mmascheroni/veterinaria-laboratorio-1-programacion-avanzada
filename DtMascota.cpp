#include "DtMascota.h"

// Constructores
/* Por Defecto */
DtMascota::DtMascota() {
    this->nombre = "";
    this->genero = MACHO;
    this->peso = 0.0;
    this->racionDiaria = 0.0;
}

/* Comun */
DtMascota::DtMascota(std::string nombre, Genero genero, float peso, float racionDiaria) {
    this->nombre = nombre;
    this->genero = genero;
    this->peso = peso;
    this->racionDiaria = racionDiaria;
}

/* Por Copia */
DtMascota::DtMascota(const DtMascota& dtMascota) {
    this->nombre = dtMascota.getNombre();
    this->genero = dtMascota.getGenero();
    this->peso = dtMascota.getGenero();
    this->racionDiaria = dtMascota.getRacionDiaria();
}


// Getters
std::string DtMascota::DtMascota::getNombre() const {
    return this->nombre;
}

Genero DtMascota::getGenero() const {
    return this->genero;
}

float DtMascota::getPeso() const {
    return this->peso;
}

float DtMascota::getRacionDiaria() const {
    return this->racionDiaria;
}

// Setters
void DtMascota::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void DtMascota::setGenero(Genero genero) {
    this->genero = genero;
}

void DtMascota::setPeso(float peso) {
    this->peso = peso;
}

void DtMascota::setRacionDiaria(float racionDiaria) {
    this->racionDiaria = racionDiaria;
}


// Destructor