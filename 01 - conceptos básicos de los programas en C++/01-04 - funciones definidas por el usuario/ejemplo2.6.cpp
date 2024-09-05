#include <cstdlib>
#include <iostream>

using namespace std;

// Prototipo
float suma(float a, float b);

int main(int argc, char *argv[])
{
    float numero1, numero2, sumadDeNumeros;

    numero1 = 2;
    numero2 = 3;

    sumadDeNumeros = suma(numero1, numero2);

    cout << "La suma de " << numero1 << " y " << numero2 << endl;
    cout << "es: " << sumadDeNumeros << endl;
    cin.get();
    return EXIT_SUCCESS;
}

float suma(float a, float b)
{
    return a + b;
}