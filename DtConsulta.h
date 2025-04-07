#ifndef DTCONSULTA_H
#define DTCONSULTA_H

#include "DtFecha.h" 
#include <string>


class DtConsulta {
    private:
        std::string motivo;
        DtFecha fechaConsulta;

    public:
        // Constructor
        /* Por Defecto */
        DtConsulta();

        /* Comun */
        DtConsulta(std::string motivo, DtFecha fechaConsulta);

        /* Por Copia */
        DtConsulta(const DtConsulta& dtConsulta);

        // Getters
        std::string getMotivo() const;
        DtFecha getFechaConsulta() const;

};

#endif
