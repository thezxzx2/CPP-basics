#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argvp[])
{
    char car;
    bool digitoLeido = false;

    while (!digitoLeido)
    {
        cout << "Introduzca un caracter digito para salir del bucle: ";
        cin >> car;
        digitoLeido = (('0' <= car) && (car <= '9'));
    }

    cout << car << " es el digito leido" << endl;

    cin.get();
    return EXIT_SUCCESS;
}