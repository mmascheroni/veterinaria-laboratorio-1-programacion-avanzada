#ifndef MASCOTA_H
#define MASCOTA_H

#include "Genero.h"
#include <string>


class Mascota {
    private:
        std::string nombre;
        Genero genero;
        float peso;

    public:
        // Constructor
        /* Por Defecto */
        Mascota();

        /* Comun */
        Mascota(std::string nombre, Genero genero, float peso);

        /* Por Copia */
        Mascota(const Mascota& mascota);

        // Getters
        std::string getNombre() const;
        Genero getGenero() const;
        float getPeso() const;

        // Setters
        void setNombre(std::string nombre);
        void setGenero(Genero genero);
        void setPeso(float peso);

        // Metodos
        virtual float obtenerRacionDiaria();

        // Destructor
};

#endif
