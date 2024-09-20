#include <cstdlib>
#include <iostream>

using namespace std;

long int factorial(int n); // Prototipo de funcion

int main(int argc, char *argv[])
{
    int valor1, valor2, i; // Ambito funcion main

    do
    {
        cout << "Introduzca dos numeros positivos x < y: ";
        cin >> valor1 >> valor2;
    } while ((valor1 <= 0) || (valor2 <= 0));

    for (i = valor1; i <= valor2; i++)
        cout << i << " factorial " << factorial(i) << endl;

    cin.get();
    return EXIT_SUCCESS;
}

long int factorial(int n)
{
    long int f; // Ambito funcion
    f = 1.0;

    for (int i = 1; i <= n; i++) // Ambito de bloque for
        f *= i;

    return f;
}