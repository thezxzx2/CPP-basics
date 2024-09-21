#include <cstdlib>
#include <iostream>

using namespace std;

int sobrecarga(int);
int sobrecarga(int, int);
float sobrecarga(float, float);
float sobrecarga(float, float, float);

int main(int argc, char *argv[])
{
    int x = 4, y = 5;
    float a = 6.0, b = 7.0, c = 9.0;

    cout << "El cuadrado de " << x << " es: " << sobrecarga(x);
    cout << "\nEl producto de " << x << " por " << y << " es: " << sobrecarga(x, y);
    cout << "\nLa suma de " << a << " y " << b << " es: " << sobrecarga(a, b);
    cout << "\nLa suma de " << a << " y " << b << " y " << c << " es: " << sobrecarga(a, b, c) << endl;

    cin.get();
    return EXIT_SUCCESS;
}

// sobrecarga, calcula el cuadrado de un valor
int sobrecarga(int valor)
{
    return (valor * valor);
}

// sobrecarga, multiplica dos valores enteros
int sobrecarga(int valor1, int valor2)
{
    return (valor1 * valor2);
}

// sobrecarga, calcula la suma de dos valores reales
float sobrecarga(float valor1, float valor2)
{
    return (valor1 + valor2);
}

// sobrecarga, calcula la media de tres valores reales
float sobrecarga(float valor1, float valor2, float valor3)
{
    return (valor1 + valor2 + valor3);
}