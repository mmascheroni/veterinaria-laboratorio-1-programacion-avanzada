#ifndef SOCIO_H
#define SOCIO_H

#include "DtFecha.h"
#include "Mascota.h"
#include "Consulta.h"
#include <string>


class Socio {
    private:
        const static int MAX_MASCOTAS = 10;
        const static int MAX_CONSULTAS = 20;

        std::string ci;
        std::string nombre;
        DtFecha fechaIngreso;
        Mascota* mascota;
        Mascota* mascotas[MAX_MASCOTAS];
        Consulta* consultas[MAX_CONSULTAS];
        int posMascotas, posConsultas;

    public:
        // Constructores
        /* Por Defecto */
        Socio();

        /* Comun */
        Socio(std::string ci, std::string nombre, DtFecha fechaIngreso, Mascota* mascota);

        /* Por Copia */
        Socio(const Socio& socio);

        // Getters
        std::string getCi() const;
        std::string getNombre() const;
        DtFecha getFechaIngreso() const;
        int getPosMascotas() const;
        int getPosConsultas() const;
        Mascota* getMascota();

        // Setters
        void setCi(std::string ci);
        void setNombre(std::string nombre);
        void setFechaIngreso(DtFecha fechaIngreso);
        void setPosMascotas(int pos);
        void setPosConsultas(int pos);
        void setMascota(Mascota* mascota);

        // Metodos
        void agregarMascota(Mascota* mascota);
        void agregarConsulta(Consulta* consulta);

        // Destructor
        ~Socio();
};

#endif
