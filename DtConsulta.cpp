#include "DtConsulta.h"

// Constructor
/* Por Defecto */
DtConsulta::DtConsulta() {
    this->motivo = "";
    this->fechaConsulta = DtFecha();
}

/* Comun */
DtConsulta::DtConsulta(std::string motivo, DtFecha fechaConsulta) : motivo(motivo), fechaConsulta(fechaConsulta) {}

/* Por Copia */
DtConsulta::DtConsulta(const DtConsulta& dtConsulta) {
    this->motivo = dtConsulta.getMotivo();
    this->fechaConsulta = dtConsulta.getFechaConsulta();
}

// Getters
std::string DtConsulta::getMotivo() const {
    return this->motivo;
}

DtFecha DtConsulta::getFechaConsulta() const {
    return this->fechaConsulta;
}
