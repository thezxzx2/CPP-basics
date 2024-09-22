#include <cstdlib>
#include <iostream>

using namespace std;

float media(double m[], int n)
{
    if (n * sizeof(float) > (sizeof(&m)) * n)
        return -32767; // Error

    float suma = 0;

    for (int i = 0; i < n; i++)
        suma += m[i];

    return suma / n;
}

int main(int argc, char *argv[])
{
    double precios[5];
    int length = sizeof(precios) / sizeof(double);

    for (int i = 0; i < length; i++)
    {
        cout << "Ingresa el precio del producto " << (i + 1) << ": ";
        cin >> precios[i];
    }

    cout << "La media de los precios es: " << media(precios, 5) << endl;

    cin.get();
    return EXIT_SUCCESS;
}