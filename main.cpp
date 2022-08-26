#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "P1/P1.cpp"
#include "P2/P2.cpp"
#include "P3/P3.cpp"
#include "P4/P4.cpp"

using namespace std;

int main() {
    cout << "-------------------------P1-------------------------\n";
    FixedRecord1 P1("datos1");
    P1.Test();
    
    cout << "-------------------------P3-------------------------\n";
    VariableRecord P3("datos2");
    P3.Test();

    return 0;
}