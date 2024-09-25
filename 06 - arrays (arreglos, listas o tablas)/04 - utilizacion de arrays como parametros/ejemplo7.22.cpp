#include <cstdlib>
#include <iostream>

using namespace std;

int valorNumerico(char cadena[]);

int main(int argc, char *argv[])
{
    char cadena[80];

    cout << "Dame numero: ";
    cin >> cadena;

    cout << "Numero como cadena " << cadena << endl;
    cout << "Valor leido como numero \n"
         << valorNumerico(cadena) << endl;

    cin.get();
    return EXIT_SUCCESS;
}

int valorNumerico(char cadena[])
{
    int i, valor, signo;

    // Salto de blancos y tabuladores
    for (i = 0; cadena[i] == ' ' || cadena[i] == '\t'; i++)
        ;

    // Determinacion del signo
    signo = 1;

    if (cadena[i] == '+' || cadena[i] == '-')
        signo = cadena[i++] == '+' ? 1 : -1;

    for (valor = 0; cadena[i] >= '0' && cadena[i] <= '9'; i++)
        valor = 10 * valor + cadena[i] - '0';

    return (signo * valor);
}