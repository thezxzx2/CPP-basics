#include <cstdlib>
#include <iostream>

using namespace std;

void pasoPorValor(int x);

int main(int argc, char *argv[])
{
    int x = 20;

    cout << "Antes de la llamada a pasoPorValor " << x << endl;
    pasoPorValor(x);
    cout << "Despues de la llamada a pasoPorValor " << x << endl;

    cin.get();
    return EXIT_SUCCESS;
}

void pasoPorValor(int x)
{
    cout << "Dentro de pasoPorValor " << x << endl;
    x *= 2;
    cout << "Despues de x *= 2 y dentro de pasoPorvalor " << x << endl;
}