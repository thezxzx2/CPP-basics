#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float numero;

    cout << "Introduzca un numero: ";
    cin >> numero;

    // Comparar numero con diez
    if (numero > 10)
        cout << numero << " es mayor que 10" << endl;

    cin.get();
    return EXIT_SUCCESS;
}