#include <stdio.h>
#include <iostream> 
#include <string>
#include <cstdio> 

#include "DtFecha.h"
#include "DtMascota.h"
#include "DtConsulta.h"
#include "Mascota.h"
#include "Socio.h"

using namespace std;

void menuBienvenida();

string solicitarCI();

string solicitarNombre();

DtFecha solicitarFechaIngreso();

Genero solicitarGenero();

float solicitarPeso();

float solicitarRacionDiaria();

void registrarSocio(string ci, string nombre, DtFecha*
fechaIngreso, DtMascota* dtMascota);

void agregarMascota(string ci, DtMascota dtMascota);

void ingresarConsulta(string motivo, string ci, DtFecha
fechaConsulta);

DtConsulta  verConsultasAntesDeFecha(DtFecha fecha, string
ciSocio, int& cantConsultas);

void eliminarSocio(string ci);

DtMascota obtenerMascotas(string ci, int& cantMascotas);


int main(){
    printf("hola mundo");
    return 0;
}

void registrarSocio(string ci, string nombre, DtFecha*
fechaIngreso, DtMascota* dtMascota) {
    Mascota* mascota = new Mascota(dtMascota->getNombre(), dtMascota->getGenero(),dtMascota->getPeso());

    Socio* socio = new Socio(ci, nombre, *fechaIngreso, mascota);
}



void menuBienvenida() {
    int opcion = 0;

    while ( opcion != 0 ) {
        printf("Bienvenido!\n");

        printf("Elija una opcion: \n");

        printf("1) Registrar Socio\n");
        printf("2) Agregar Mascota\n");
        printf("3) Ingresar Consulta\n\n");
        printf("...\n");
        printf("0) Salir\n");
        printf("Opcion: ");
        scanf(" %d", &opcion);

        switch (opcion) {
            case 1:
                printf("Función registrarSocio implementada:\n");

                // Socio
                string ci = solicitarCI();
                string nombre = solicitarNombre();
                DtFecha fechaTemp = solicitarFecha();
                DtFecha* fechaIngreso = new DtFecha(fechaTemp);

                // DtMascota
                string nombreMascota = solicitarNombre();
                Genero genero = solicitarGenero();
                float peso = solicitarPeso();
                float racionDiaria = solicitarRacionDiaria();

                DtMascota* dtMascota = new DtMascota(nombreMascota, genero, peso, racionDiaria;)

                registrarSocio(ci, nombre, fechaIngreso, dtMascota);

                break;
            case 2:
                printf("Función agregarMascota aún no implementada.\n");
                break;
            case 3:
                printf("Función ingresarConsulta aún no implementada.\n");
                break;
            case 4:
                printf("Función verConsultasAntesDeFecha aún no implementada.\n");
                break;
            case 5:
                printf("Función eliminarSocio aún no implementada.\n");
                break;
            case 6:
                printf("Función obtenerMascotas aún no implementada.\n");
                break;
            case 0:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción inválida. Intente nuevamente.\n");
                break;
        }
    }
    
}


string solicitarCI() {
    string ci;

    cout << "Ingrese por favor el CI: ";
    cin >> ci;

    return ci;

    return ci;
}


string solicitarNombre() {
    string nombre;

    cout << "Ingrese por favor el Cnombre: ";
    cin >> nombre;

    return nombre;

    return nombre;
}

DtFecha solicitarFecha() {
    int dia, mes, anio;

    std::cout << "Ingrese el dia: ";
    std::cin >> dia;

    std::cout << "Ingrese el mes: ";
    std::cin >> mes;

    std::cout << "Ingrese el anio: ";
    std::cin >> anio;

    DtFecha fecha(dia, mes, anio);
    return fecha;
}

Genero solicitarGenero() {
    int genero = 0;

    while (genero != 1 && genero != 2) {
        cout << "Escoga la opcion correcta del genero: \n";
        cout << "1 - MACHO\n";
        cout << "2 - HEMBRA\n";
        cout << "Opcion: ";
        cin >> genero;

        if (genero != 1 && genero != 2) {
            cout << "¡Escoga una opción válida por favor!\n";
        }
    }

    return static_cast<Genero>(genero);
}

float solicitarPeso() {
    float peso;

    cout << "Ingrese el peso por favor: \n";
    cin >> peso;

    return peso;
}

float solicitarRacionDiaria() {
    float racionDiaria;

    cout << "Ingrese la racion diaria por favor: \n";
    cin >> racionDiaria;

    return racionDiaria;
}