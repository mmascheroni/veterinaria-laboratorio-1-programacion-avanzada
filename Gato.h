#ifndef GATO_H
#define GATO_H

#include "Mascota.h"
#include "TipoPelo.h"
#include <string>


class Gato : public Mascota {
    private:
        TipoPelo tipoPelo;

    public:
        // Constructores
        /* Por Defecto */
        Gato();

        /* Comun */
        Gato(std::string nombre, Genero genero, float peso,TipoPelo tipoPelo);

        /* Por Copia */
        Gato(const Gato& gato);

        // Getters
        TipoPelo getTipoPelo() const;

        // Setters
        void setTipoPelo(TipoPelo pelo);

        // Metodos
        float obtenerRacionDiaria() override;

        // Destructor
};

#endif
