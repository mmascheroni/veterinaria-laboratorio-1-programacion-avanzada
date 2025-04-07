#include "Mascota.h"

// Constructor
/* Por Defecto */
Mascota::Mascota() {
    this->nombre = "";
    this->genero = MACHO;
    this->peso = 0.0;
}

/* Comun */
Mascota::Mascota(std::string nombre, Genero genero, float peso) : nombre(nombre), genero(genero), peso(peso) {}

/* Por Copia */
Mascota::Mascota(const Mascota& mascota) {
    this->nombre = mascota.getNombre();
    this->genero = mascota.getGenero();
    this->peso = mascota.getPeso();
}


// Getters
std::string Mascota::getNombre() const {
    return this->nombre;
}

Genero Mascota::getGenero() const {
    return this->genero;
}

float Mascota::getPeso() const {
    return this->peso;
}

// Setters
void Mascota::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Mascota::setGenero(Genero genero) {
    this->genero = genero;
}

void Mascota::setPeso(float peso) {
    this->peso = peso;
}

// Metodos
float Mascota::obtenerRacionDiaria() {
    return 0.0;
}

// Destructor
Mascota::~Mascota(){}