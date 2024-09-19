#include <cstdlib>
#include <iostream>

using namespace std;

int divisores(int n)
{
    int i, acu;

    acu = 0;
    for (i = 1; i <= n; i++)
        if (n % i == 0)
            acu += 1;

    return acu;
}

int main(int argc, char *argv[])
{
    int n = 0;
    cout << "Ingresa un numero para obtener la cantidad de divisores: ";
    cin >> n;
    cout << "Cantidad de divisores de " << n << ": " << divisores(n) << endl;
}
