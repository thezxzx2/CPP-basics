#include <cstdlib>
#include <iostream>

using namespace std;

void referencia(int &x) // Parametro por referencia
{
    x += 2;
}

int main(int argc, char *argv[])
{
    int x = 20;

    cout << "Antes de la llamada x= " << x << endl;
    referencia(x); // Llamada con nombre de variable
    cout << "Despues de la llamada x= " << x << endl;

    cin.get();
    return EXIT_SUCCESS;
}