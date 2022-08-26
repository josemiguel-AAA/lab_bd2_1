#include <string>
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

struct Alumno3
{  
    string Nombre;
    string Apellidos;
    string Carrera;
    float mensualidad;

    friend ostream& operator<<(ostream& os, const Alumno3& a3) {
        os  << endl << "Nombre: " << a3.Nombre
            << endl << "Apellidos: " << a3.Apellidos
            << endl << "Carrera: " << a3.Carrera
            << endl << "Mensualidad: " << a3.mensualidad << endl;
        return os;
    }

};