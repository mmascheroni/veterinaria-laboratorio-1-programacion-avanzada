#include "Perro.h"

// Constructores
/* Por defecto */
Perro::Perro() : Mascota(), raza(RazaPerro::OTRO), vacunaCachorro(false) {}

/* Comun */
Perro::Perro(std::string nombre, Genero genero, float peso, RazaPerro raza, bool vacuna)
    : Mascota(nombre, genero, peso), raza(raza), vacunaCachorro(vacuna) {}

/* Por Copia */
Perro::Perro(const Perro& perro)
    : Mascota(perro), raza(perro.raza), vacunaCachorro(perro.vacunaCachorro) {}

RazaPerro Perro::getRaza() const { 
    return raza; 
}

bool Perro::getVacunaCachorro() const {
    return vacunaCachorro; 
}

void Perro::setRaza(RazaPerro raza) { 
    this->raza = raza; 
}

void Perro::setVacunaCachorro(bool vacunaCachorro) { 
    this->vacunaCachorro = vacunaCachorro; 
}

float Perro::obtenerRacionDiaria() {
    return 0.0;
}