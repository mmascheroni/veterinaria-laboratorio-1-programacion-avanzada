#ifndef DTFECHA_H
#define DTFECHA_H


class DtFecha {
    private:
        int dia, mes, anio;

    public:
        // Constructores
        /* Por Defecto */
        DtFecha();

        /* Comun */
        DtFecha(int dia, int mes, int anio);

        /* Por Copia */
        DtFecha(DtFecha* fecha);

        // GETTERS
        int getDia() const;
        int getMes() const;
        int getAnio() const;
};

#endif