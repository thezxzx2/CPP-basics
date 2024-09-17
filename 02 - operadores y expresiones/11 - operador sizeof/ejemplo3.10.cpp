#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "El tamano de variables de esta computadora son: \n";
    cout << "Entero: " << sizeof(int) << endl;
    cout << "Entero largo: " << sizeof(long int) << endl;
    cout << "Real: " << sizeof(float) << endl;
    cout << "Doble: " << sizeof(double) << endl;
    cout << "Long doble: " << sizeof(long double) << endl;
    cout << "Long doble: " << sizeof 20 << endl;

    cin.get();
    return EXIT_SUCCESS;
}