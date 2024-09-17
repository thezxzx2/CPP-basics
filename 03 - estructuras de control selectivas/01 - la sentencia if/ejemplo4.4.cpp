#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float dato;

    cout << "Introduzca un numero: ";
    cin >> dato;

    if (dato < 0)
        dato = -dato; // Cambio de signo

    cout << "Valor absoluto siempre positivo " << dato << endl;

    cin.get();
    return EXIT_SUCCESS;
}