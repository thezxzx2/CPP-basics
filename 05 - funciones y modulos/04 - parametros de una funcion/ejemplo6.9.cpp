#include <cstdlib>
#include <iostream>

using namespace std;

void intercambio(int *x, int *y)
{
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main(int argc, char *argv[])
{
    int x = 20, y = 30;

    cout << "Antes de la llamada x= " << x << " y= " << y << endl;
    intercambio(&x, &y);
    cout << "Despues de la llamada x= " << x << " y= " << y << endl;

    cin.get();
    return EXIT_SUCCESS;
}