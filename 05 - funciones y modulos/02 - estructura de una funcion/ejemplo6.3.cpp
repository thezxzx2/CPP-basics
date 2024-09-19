#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

float norma(float x, float y, float z)
{
    return sqrt(x * x + y * y + z * z);
}

int main(int argc, char *argv[])
{
    float x, y, z;

    cout << "Vector: (" << 3 << "," << 4 << "," << 5 << ")";
    cout << " Norma = " << norma(3, 4, 5) << endl; // Llamada a norma
    cout << "Introduzca las tres coordenadas de vector: ";
    cin >> x >> y >> z;
    cout << "Vector: (" << x << "," << y << "," << z << ")";
    cout << " Norma = " << norma(x, y, z) << endl; // Llamada a norma

    cin.get();
    return EXIT_SUCCESS;
}