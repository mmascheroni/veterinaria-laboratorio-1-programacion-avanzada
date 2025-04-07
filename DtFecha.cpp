#include "DtFecha.h"

// Constructores
/* Por Defecto */
DtFecha::DtFecha() {
    this->dia = 01;
    this->mes = 01;
    this->anio = 2000;
}

/* Comun */
DtFecha::DtFecha(int dia, int mes, int anio) {
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

/* Por Copia */
DtFecha::DtFecha(DtFecha* fecha) {
    this->dia = fecha->getDia();
    this->mes = fecha->getMes();
    this->anio = fecha->getAnio();
}

// GETTERS
int DtFecha::getDia() const {
    return this->dia;
}

int DtFecha::getMes() const {
    return this->mes;
}

int DtFecha::getAnio() const {
    return this->anio;
}