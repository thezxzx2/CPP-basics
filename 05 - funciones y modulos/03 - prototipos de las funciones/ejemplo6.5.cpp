#include <cstdlib>
#include <iostream>

using namespace std;

double media(double x1, double x2); // Declaracion de media. Prototipo

int main(int argc, char *argv[])
{
    double med, numero1, numero2;

    cout << "Introduzca dos numeros: ";
    cin >> numero1 >> numero2;

    med = media(numero1, numero2); // Llamada a la funcion
    cout << "La media es: " << med << endl;

    cin.get();
    return EXIT_SUCCESS;
}

double media(double x1, double x2) // Definicion de media
{
    return (x1 + x2) / 2;
}
