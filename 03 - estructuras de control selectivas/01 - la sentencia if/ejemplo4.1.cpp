#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int numero1, numero2;

    cout << "Introduzca dos enteros:";
    cin >> numero1 >> numero2;

    if (numero1 % numero2 == 0)
        cout << numero1 << " es divisible por " << numero2 << endl;

    cin.get();
    return EXIT_SUCCESS;
}