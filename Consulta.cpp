#include "Consulta.h"

// Constructor
/* Por Defecto */
Consulta::Consulta() {
    this->motivo = "";
    this->fechaConsulta = new DtFecha();
}

/* Comun */
Consulta::Consulta(std::string motivo, DtFecha fechaConsulta) : motivo(motivo), fechaConsulta(fechaConsulta) {}

/* Por Copia */
Consulta::Consulta(Consulta* consulta) {
    this->motivo = consulta->getMotivo();
    this->fechaConsulta = consulta->getFechaConsulta();
}


// Getters
std::string Consulta::getMotivo() const {
    return this->motivo;
}

DtFecha Consulta::getFechaConsulta() const {
    return this->fechaConsulta;
}

// Setters
void Consulta::setMotivo(std::string motivo) {
    this->motivo = motivo;
}

void Consulta::setFechaConsulta(DtFecha fechaConsulta) {
    this->fechaConsulta = fechaConsulta;
}