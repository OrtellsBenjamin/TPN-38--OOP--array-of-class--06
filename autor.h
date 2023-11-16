#ifndef autor_h
#define autor_h

#include <string>
using namespace std;

class Cautor {
private:
    string nombre;
    string apellido;
    string nacionalidad;
    string mejorobra;
    int aniopublicacion;
    int edadpublicacion;

public:
    Cautor(string nom, string ap, string nac, string mo, int anio, int edad);
    Cautor();

    string getnombre();
    string getapellido();
    string getnacionalidad();
    string getmejorobra();
    int getaniopublicacion();
    int getedadpublicacion();
};

Cautor::Cautor() {
}

Cautor::Cautor(string nom, string ap, string nac, string mo, int anio, int edad) {
    nombre = nom;
    apellido = ap;
    nacionalidad = nac;
    mejorobra = mo;
    aniopublicacion = anio;
    edadpublicacion = edad;
}

string Cautor::getnombre() {
    return nombre;
}

string Cautor::getapellido() {
    return apellido;
}

string Cautor::getnacionalidad() {
    return nacionalidad;
}

string Cautor::getmejorobra() {
    return mejorobra;
}

int Cautor::getaniopublicacion() {
    return aniopublicacion;
}

int Cautor::getedadpublicacion() {
    return edadpublicacion;
}

#endif

