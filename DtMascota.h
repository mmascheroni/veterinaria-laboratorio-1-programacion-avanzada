#ifndef DTMASCOTA_H
#define DTMASCOTA_H

#include "Genero.h"
#include <string>


class DtMascota {
    private:
        std::string nombre;
        Genero genero;
        float peso;
        float racionDiaria;

    public:
        // Constructores
        /* Por Defecto */
        DtMascota();

        /* Comun */
        DtMascota(std::string nombre, Genero genero, float peso, float racionDiaria);

        /* Por Copia */
        DtMascota(const DtMascota& dtMascota);

        // Getters
        std::string getNombre() const;
        Genero getGenero() const;
        float getPeso() const;
        float getRacionDiaria() const;

        // Setters
        void setNombre(std::string nombre);
        void setGenero(Genero genero);
        void setPeso(float peso);
        void setRacionDiaria(float racionDiaria);

        // Destructor
};

#endif
