#include <stdio.h>
#include <iostream> 
#include <string>
#include <cstdio> 

#include "DtFecha.h"
#include "DtMascota.h"
#include "DtConsulta.h"
#include "Mascota.h"
#include "Socio.h"
#include "Perro.h"  
#include "Gato.h"     
#include "RazaPerro.h" 
#include "DtPerro.h"  
#include "DtGato.h" 
#include "TipoPelo.h"

using namespace std;

void menuBienvenida();

string solicitarCI();

string solicitarNombre();

DtFecha solicitarFecha();

Genero solicitarGenero();

float solicitarPeso();

float solicitarRacionDiaria();

RazaPerro solicitarRazaPerro();

bool solicitarVacunaCachorro();

TipoPelo solicitarTipoPelo();

Socio* registrarSocio(string ci, string nombre, DtFecha*
fechaIngreso, DtMascota* dtMascota);

void agregarMascota(string ci, DtMascota dtMascota);

void ingresarConsulta(string motivo, string ci, DtFecha
fechaConsulta);

DtConsulta  verConsultasAntesDeFecha(DtFecha fecha, string
ciSocio, int& cantConsultas);

void eliminarSocio(string ci);

DtMascota obtenerMascotas(string ci, int& cantMascotas);

void mostrarSocios(Socio* socios[], int cantidad);


int main(){
    menuBienvenida();
    return 0;
}

void menuBienvenida() {
    int opcion, posicionSocios = 0;
    Socio* socios[20];

    while ( opcion != 0 ) {
        printf("Bienvenido!\n");

        printf("Elija una opcion: \n");

        printf("1) Registrar Socio\n");
        printf("2) Agregar Mascota\n");
        printf("3) Ingresar Consulta\n\n");
        printf("4) Mostrar Socios Registados\n");
        printf("...\n");
        printf("0) Salir\n");
        printf("Opcion: ");
        scanf(" %d", &opcion);

        switch (opcion) {
            case 1: {
                printf("Función registrarSocio implementada:\n");

                printf("DATOS DEL SOCIO: \n\n");
                // Socio
                string ci = solicitarCI();
                string nombre = solicitarNombre();
                DtFecha fechaTemp = solicitarFecha();
                DtFecha* fechaIngreso = new DtFecha(fechaTemp);

                printf("DATOS DE LA MASCOTA: \n");
                // DtMascota
                string nombreMascota = solicitarNombre();
                Genero genero = solicitarGenero();
                float peso = solicitarPeso();
                float racionDiaria = solicitarRacionDiaria();

                DtMascota* dtMascota = new DtMascota(nombreMascota, genero, peso, racionDiaria);

                socios[posicionSocios] = registrarSocio(ci, nombre, fechaIngreso, dtMascota);
                posicionSocios += 1;

                break;
            }
            case 2:
                printf("Función agregarMascota aún no implementada.\n");
                break;
            case 3:
                printf("Función ingresarConsulta aún no implementada.\n");
                break;
            case 4:
                printf("Función mostrarSocios.\n");
                mostrarSocios(socios, posicionSocios);
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

Socio* registrarSocio(string ci, string nombre, DtFecha*
fechaIngreso, DtMascota* dtMascota) {
    int opcionMascota;
    Socio* socio;

    // Mascota* mascota = new Mascota(dtMascota->getNombre(), dtMascota->getGenero(),dtMascota->getPeso());

    while (opcionMascota != 1 && opcionMascota != 2) {
        cout << "Ingrese por favor el tipo de mascota: " << endl;
        cout << "1) Perro " << endl;
        cout << "2) Gato " << endl;
        cout << "Escoga el numero de la opcion deseada: " << endl;
        cin >> opcionMascota;
    }

    if ( opcionMascota == 1 ) {
        RazaPerro raza = solicitarRazaPerro();
        bool vacunaCachorro = solicitarVacunaCachorro();

        DtPerro* dtPerro = new DtPerro(dtMascota->getNombre(), dtMascota->getGenero(), dtMascota->getPeso(), dtMascota->getRacionDiaria(), raza, vacunaCachorro);

        Perro* perro = new Perro(dtPerro->getNombre(), dtPerro->getGenero(), dtPerro->getPeso(), dtPerro->getRaza(), dtPerro->getVacunaCachorro());

        socio = new Socio(ci, nombre, *fechaIngreso, perro);
    } else {
        TipoPelo tipoPelo = solicitarTipoPelo();

        DtGato* dtGato = new DtGato(dtMascota->getNombre(), dtMascota->getGenero(), dtMascota->getPeso(), dtMascota->getRacionDiaria(), tipoPelo);

        Gato* gato = new Gato(dtGato->getNombre(), dtGato->getGenero(), dtGato->getPeso(), dtGato->getTipoPelo());

        socio = new Socio(ci, nombre, *fechaIngreso, gato);
    }


    return socio;
}



string solicitarCI() {
    string ci;

    cout << "Ingrese por favor el CI: ";
    cin >> ci;


    return ci;
}


string solicitarNombre() {
    string nombre;

    cout << "Ingrese por favor el nombre: ";
    cin >> nombre;

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

    if (genero == 1) {
        return MACHO;
    } else {
        return HEMBRA;
    }
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


RazaPerro solicitarRazaPerro() {
    int raza;

    while (raza < 1 || raza > 7) {
        cout << "Escoga la raza de su perro, por favor: \n";
        cout << "1 - Labrador\n";
        cout << "2 - Ovejero\n";
        cout << "3- Bulldog\n";
        cout << "4 - Pitbull\n";
        cout << "5 - Collie\n";
        cout << "6 - Pekines\n";
        cout << "7 - Otro\n";
        cout << "ingrese el numero correspondiente a la raza: ";
        cin >> raza;

        if (raza < 1 || raza > 7) {
            cout << "¡Escoga una opción válida por favor!\n";
        }
    }

    if (raza == 1) {
        return RazaPerro::LABRADOR;
    } else if (raza == 2) {
        return RazaPerro::OVEJERO;
    } else if (raza == 3) {
        return RazaPerro::BULLDOG;
    } else if (raza == 4) {
        return RazaPerro::PITBULL;
    } else if (raza == 5) {
        return RazaPerro::COLLIE;
    } else if ( raza == 6 ) {
        return RazaPerro::PEKINES;
    } else {
        return RazaPerro::OTRO;
    }

}

bool solicitarVacunaCachorro() {
    int opcion;

    while (opcion < 1 || opcion > 2) {
        cout << "Su perro tiene la vacuna de cachorro: \n";
        cout << "1 - Si\n";
        cout << "2 - No\n";
        cout << "ingrese el numero correspondiente a la opcion deseada: ";
        cin >> opcion;

        if (opcion < 1 || opcion > 2) {
            cout << "¡Escoga una opción válida por favor!\n";
        }
    }

    if (opcion == 1) {
        return true;
    } else {
        return false;
    }
}

TipoPelo solicitarTipoPelo() {
    int opcion;

    while (opcion < 1 || opcion > 3) {
        cout << "Que tipo de pelo tiene su gato: \n";
        cout << "1 - Corto\n";
        cout << "2 - Mediano\n";
        cout << "3 - Largo\n";
        cout << "ingrese el numero correspondiente a la opcion deseada: ";
        cin >> opcion;

        if (opcion < 1 || opcion > 3) {
            cout << "¡Escoga una opción válida por favor!\n";
        }
    }

    if (opcion == 1) {
        return TipoPelo::CORTO;
    } else if (opcion == 2) {
        return TipoPelo::MEDIANO;
    } else {
        return TipoPelo::LARGO;
    }
}


void mostrarSocios(Socio* socios[], int cantidad) {
    cout << "\n----- Lista de Socios -----\n";

    for (int i = 0; i < cantidad; i++) {
        if (socios[i] != nullptr) {
            cout << "Socio " << (i + 1) << ":\n";
            cout << "  CI: " << socios[i]->getCi() << "\n";
            cout << "  Nombre: " << socios[i]->getNombre() << "\n";

            DtFecha fecha = socios[i]->getFechaIngreso();
            cout << "  Fecha de ingreso: " << fecha.getDia() << "/" 
                << fecha.getMes() << "/" << fecha.getAnio() << "\n";
            
            // Acceder a la mascota del socio
            Mascota* mascota = socios[i]->getMascota();
            if (mascota != nullptr) {
                cout << "  Mascota:\n";
                cout << "    Nombre: " << mascota->getNombre() << "\n";
                cout << "    Género: " << (mascota->getGenero() == MACHO ? "Macho" : "Hembra") << "\n";
                cout << "    Peso: " << mascota->getPeso() << " kg\n";

                
                if (dynamic_cast<Perro*>(mascota)) {
                    Perro* perro = dynamic_cast<Perro*>(mascota);
                    cout << "    Tipo: Perro\n";
                    cout << "    Raza: " << (perro->getRaza()) << "\n";
                    cout << "    Vacuna Cachorro: " << (perro->getVacunaCachorro() ? "Sí" : "No") << "\n";
                    
                } else if (dynamic_cast<Gato*>(mascota)) {
                    Gato* gato = dynamic_cast<Gato*>(mascota);
                    cout << "    Tipo: Gato\n";
                    cout << "    Tipo de pelo: " << gato->getTipoPelo() << "\n";
                    
                }
            } else {
                cout << "  No tiene mascota registrada.\n";
            }

            cout << "-----------------------------\n";
        }
    }
}

