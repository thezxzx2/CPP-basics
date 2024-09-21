#include <iostream>

using namespace std;

void leerReal(void)
{
    extern float f; // Variable definida en otro archivo (extern2.cpp)
    cout << "Introduzca dato: ";
    cin >> f;
}

void escribirReal(void)
{
    extern float f; // Variable definida en otro archivo (extern2.cpp)
    cout << "extern2: " << f << endl;
}