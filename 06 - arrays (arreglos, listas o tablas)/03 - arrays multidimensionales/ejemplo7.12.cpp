#include <cstdlib>
#include <iostream>

#define filas 5

using namespace std;

int main(int argc, char *argv[])
{
    int i, j, suma, a[filas][filas];

    for (i = 0; i < filas; i++)
        for (j = 0; j < filas; j++)
            cin >> a[i][j];

    cout << "--------------------------------------" << endl;

    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < filas; j++)
            if (!(i == j))
            {
                suma += a[i][j];
                cout << a[i][j] << " ";
            }
            else
                continue;

        cout << endl;
    }

    cout << "Suma: " << suma << endl;

    cin.get();
    return EXIT_SUCCESS;
}