#ifndef PERRO_H
#define PERRO_H

#include "Mascota.h"
#include "RazaPerro.h"
#include <string>


class Perro : public Mascota {
    private:
        RazaPerro raza;
        bool vacunaCachorro;

    public:
        // Constructores
        /* Por Defecto */
        Perro();

        /* Comun */
        Perro(std::string nombre, Genero genero, float peso,RazaPerro raza, bool vacunaCachorro);

        /* Por Copia */
        Perro(const Perro& perro);

        // Getters
        RazaPerro getRaza() const;
        bool getVacunaCachorro() const;

        // Setters
        void setRaza(RazaPerro raza);
        void setVacunaCachorro(bool vacuna);

        // Metodos
        float obtenerRacionDiaria() override;

        // Destructor
};

#endif
