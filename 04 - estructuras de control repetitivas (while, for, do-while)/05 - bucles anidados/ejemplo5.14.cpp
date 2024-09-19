#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n, m;

    for (n = 1; n <= 10; n++)
    {
        cout << "Tabla de multiplicar del " << n << endl;
        for (m = 10; m >= 1; m--)
            cout << n << " veces " << m << " = " << n * m << endl;
        cout << "--------------------------" << endl;
    }

    cin.get();
    return EXIT_SUCCESS;
}