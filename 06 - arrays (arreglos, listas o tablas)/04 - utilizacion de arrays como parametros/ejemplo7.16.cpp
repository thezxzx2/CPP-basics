#include <cstdlib>
#include <iostream>
#include <math.h> // Libreria de funcioens matematicas

#define max 10

void resta(float a[max], float b[max], float c[max]);
void cero(float c[max]);
void escribir(float v[max]);

int main(int argc, char *argv[])
{
    float a[max], b[max], c[max];

    cero(a);
    cero(b);
    cero(c);

    for (int i = 0; i < max; i++)
    {
        a[i] = 1 + rand() % 100;
        b[i] = 1 + rand() % 100;
    }

    resta(a, b, c);

    std::cout << "Vector a: \n";
    escribir(a);

    std::cout << "Vector b: \n";
    escribir(b);

    std::cout << "Resta de vectores: \n";
    escribir(c);
}

void cero(float c[max])
{
    int i;

    for (i = 0; i < max; i++)
        c[i] = 0;
}

void resta(float a[max], float b[max], float c[max])
{
    // El vector c es la diferencia de a y b; c = a - b
    int i;

    for (i = 0; i < max; i++)
        c[i] = a[i] - b[i];
}

void escribir(float vector[max])
{
    int i;
    for (i = 0; i < max; i++)
        std::cout << vector[i] << " ";

    std::cout << std::endl;
}