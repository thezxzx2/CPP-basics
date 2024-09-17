#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char c = 'Z' + 1; // Asigna a c el siguiente caracter de 'Z'

    cout << 'A' << " " << (int)'A' << endl;            // Caracter y numero ASCII
    cout << '0' << " " << (int)'0' << endl;            // Caracter y numero ASCII
    cout << 'a' << " " << (int)'a' << endl;            // Caracter y numero ASCII
    cout << 'c' << " " << (int)c << endl;              // Caracter y numero ASCII
    cout << 'Z' + 1 << " " << (char)('Z' + 1) << endl; // Numero ASCII y caracter

    cin.get();
    return EXIT_SUCCESS;
}