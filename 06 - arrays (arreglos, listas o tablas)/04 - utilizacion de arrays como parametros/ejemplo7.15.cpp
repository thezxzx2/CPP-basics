#include <cstdlib>
#include <iostream>
#include <math.h>

#define max 11

using namespace std;

void leer(float a[], int n);
void escribe(float a[], int n);
void suma(float a[], float b[], float c[], int n);

int main(int argc, char *argv[])
{
    int n;
    float a[max], b[max], c[max];

    n = 3;
    leer(a, n);
    leer(b, n);

    cout << "Vector a\n";
    escribe(a, n);

    cout << "Vector b\n";
    escribe(b, n);

    suma(a, b, c, n);

    cout << "Vector suma \n";
    escribe(c, n);

    cin.get();
    return EXIT_SUCCESS;
}

void suma(float a[], float b[], float c[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        c[i] = a[i] + b[i];
}

void escribe(float a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
}

void leer(float a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        cout << "Dame date posicion i = " << i + 1 << " ";
        cin >> a[i];
    }
}