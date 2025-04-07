#include "Socio.h"

#include <iostream>



// Constructores
/* Por Defecto */
Socio::Socio() {
    this->ci = "";
    this->nombre = "";
    this->fechaIngreso = DtFecha();
    this->mascota = nullptr;
    this->posMascotas = 0;
    this->posConsultas = 0;

    // Se inicializan los arreglos con nullptr
    for (int i = 0; i < MAX_MASCOTAS; i++) {
        this->mascotas[i] = nullptr;
    }

    for (int i = 0; i < MAX_CONSULTAS; i++) {
        this->consultas[i] = nullptr;
    }
}

/* Comun */
Socio::Socio(std::string ci, std::string nombre, DtFecha fechaIngreso, Mascota* mascota) : ci(ci), nombre(nombre), fechaIngreso(fechaIngreso), mascota(mascota), posMascotas(1), posConsultas(0) {

    // Se inicializan los arreglos con nullptr
    for (int i = 0; i < MAX_MASCOTAS; i++) {
        this->mascotas[i] = nullptr;
    }

    for (int i = 0; i < MAX_CONSULTAS; i++) {
        this->consultas[i] = nullptr;
    }

     // Se agrega la mascota al primer lugar del arreglo de mascotas
    if (mascota != nullptr) {
        this->mascotas[0] = mascota;
    }
}

/* Por Copia */
Socio::Socio(const Socio& socio) {
    this->ci = socio.getCi();
    this->nombre = socio.getNombre();
    this->fechaIngreso = socio.getFechaIngreso();

    if (socio.mascota != nullptr)
        this->mascota = new Mascota(*socio.mascota);
    else
        this->mascota = nullptr;

    this->posMascotas = socio.getPosMascotas();
    this->posConsultas = socio.getPosConsultas();

    for (int i = 0; i < MAX_MASCOTAS; i++) {
        if (socio.mascotas[i] != nullptr)
            this->mascotas[i] = new Mascota(*socio.mascotas[i]);
        else
            this->mascotas[i] = nullptr;
    }

    for (int i = 0; i < MAX_CONSULTAS; i++) {
        if (socio.consultas[i] != nullptr)
            this->consultas[i] = new Consulta(*socio.consultas[i]);
        else
            this->consultas[i] = nullptr;
    }
}


// Getters
std::string Socio::getCi() const {
    return this->ci;
}

std::string Socio::getNombre() const {
    return this->nombre;
}

DtFecha Socio::getFechaIngreso() const {
    return this->fechaIngreso;
}

int Socio::getPosMascotas() const {
    return this->posMascotas;
}

int Socio::getPosConsultas() const {
    return this->posConsultas;
}

Mascota* Socio::getMascota() {
    return this->mascota;
}

// Setters
void Socio::setCi(std::string ci) {
    this->ci = ci;
}

void Socio::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Socio::setFechaIngreso(DtFecha fechaIngreso) {
    this->fechaIngreso = fechaIngreso;
}


void Socio::setPosMascotas(int pos) {
    this->posMascotas = pos;
}

void Socio::setPosConsultas(int pos) {
    this->posConsultas = pos;
}

void Socio::setMascota(Mascota* mascota) {
    this->mascota = mascota;
}


// Metodos
void Socio::agregarMascota(Mascota* mascota) {
    if (this->posMascotas < Socio::MAX_MASCOTAS) {
        mascotas[this->posMascotas] = mascota;
        this->posMascotas += 1;
    } else {
        std::cout << "El socio " << this->nombre << " ya ha alcanzo el limite de mascotas" << std::endl;
    }
}

void Socio::agregarConsulta(Consulta* consulta) {
    if (this->posConsultas < Socio::MAX_CONSULTAS) {
        consultas[this->posConsultas] = consulta;
        this->posConsultas += 1;
    } else {
        std::cout << "El socio " << this->nombre << " ya ha alcanzo el limite de consultas" << std::endl;
    }
}

// Destructor
Socio::~Socio() {
    // delete this->mascota; --> Ya se elimina al eliminar los valores del arreglo

    for (int i = 0; i < posMascotas; i++) {
        delete this->mascotas[i];
    }

    for (int i = 0; i < posConsultas; i++) {
        delete this->consultas[i];
    }
}