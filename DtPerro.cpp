#include "DtPerro.h"

// Constructores
/* Por Defecto */
DtPerro::DtPerro() : DtMascota(), raza(RazaPerro::OTRO), vacunaCachorro(false){}

/* Comun */
DtPerro::DtPerro(std::string nombre, Genero genero, float peso, float racionDiaria, RazaPerro raza, bool vacunaCachorro) : DtMascota(nombre, genero, peso, racionDiaria), raza(raza), vacunaCachorro(vacunaCachorro) {}

/* Por Copia */
DtPerro::DtPerro(const DtPerro& dtPerro) : DtMascota(dtPerro), raza(dtPerro.raza), vacunaCachorro(dtPerro.vacunaCachorro) {}

// Getters
RazaPerro DtPerro::getRaza() const {
    return this->raza;
}

bool DtPerro::getVacunaCachorro() const {
    return this->vacunaCachorro;
}

// Setters
void DtPerro::setRaza(RazaPerro raza) {
    this->raza = raza;
}

void DtPerro::setVacunaCachorro(bool vacunaCachorro) {
    this->vacunaCachorro = vacunaCachorro;
}

// Destructor