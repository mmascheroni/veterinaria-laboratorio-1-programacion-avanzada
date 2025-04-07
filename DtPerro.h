#ifndef DTPERRO_H
#define DTPERRO_H

#include "DtMascota.h"
#include "RazaPerro.h"
#include <string>


class DtPerro : public DtMascota {
    private:
        RazaPerro raza;
        bool vacunaCachorro;

    public:
        // Constructores
        /* Por Defecto */
        DtPerro();

        /* Comun */
        DtPerro(std::string nombre, Genero genero, float peso, float racionDiaria, RazaPerro raza, bool vacunaCachorro);

        /* Por Copia */
        DtPerro(const DtPerro& dtPerro);

        // Getters
        RazaPerro getRaza() const;
        bool getVacunaCachorro() const;
    
        // Setters
        void setRaza(RazaPerro raza);
        void setVacunaCachorro(bool vacunaCachorro);

        // Destructor
};

#endif
