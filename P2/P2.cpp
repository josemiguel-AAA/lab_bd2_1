#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Alumno2.h"

using namespace std;

class FixedRecord2
{
    string nombre;
public:
    explicit FixedRecord2(string _nombre) : nombre(_nombre){}
};
