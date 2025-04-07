#ifndef DTGATO_H
#define DTGATO_H

#include "DtMascota.h"
#include "TipoPelo.h"
#include <string>


class DtGato : public DtMascota {
    private:
        TipoPelo tipoPelo;

    public:
        // Constructores
        /* Por Defecto */
        DtGato();

        /* Comun */
        DtGato(std::string nombre, Genero genero, float peso, float racionDiaria, TipoPelo tipoPelo);

        /* Por Copia */
        DtGato(const DtGato& dtGato);

        // Getters
        TipoPelo getTipoPelo() const;
    
        // Setters
        void setTipoPelo(TipoPelo tipoPelo);

        // Destructor
};

#endif
