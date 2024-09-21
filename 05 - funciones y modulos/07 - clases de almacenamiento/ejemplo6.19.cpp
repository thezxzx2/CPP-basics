#include <cstdlib>
#include <iostream>

using namespace std;

long int funcionx();

int main(int argc, char *argv[])
{
    int n, i;

    cout << "Valor n de la funcionx?: ";
    cin >> n;

    cout << "Secuencia de funcionx: 0, 1, 2";
    for (i = 3; i <= n; i++)
        cout << ", " << funcionx();

    cout << endl;

    cin.get();
    return EXIT_SUCCESS;
}

long int funcionx()
{
    static int x = 0, y = 1, z = 2;
    int aux;

    aux = x + 2 * y + z;
    x = y;
    y = z;
    z = aux;
    return z;
}