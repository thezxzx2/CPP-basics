#include <cstdlib>
#include <iostream>

using namespace std;

int min(int x, int y)
{
    if (x < y)
        return x;

    return y;
}

int main(int argc, char *argv[])
{
    int m, n;

    do
    {
        cout << "Introduzca dos numeros. Si primero es cero fin: ";
        cin >> m >> n;

        if (m != 0)
            cout << "El menor es: " << min(m, n) << endl; // Llamada a min
    } while (m != 0);
}