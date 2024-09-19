#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int numero, i, factorial;

    do
    {
        cout << "Dame numero entero: ";
        cin >> numero;
    } while (numero <= 0);

    for (factorial = 1, i = 1; i <= numero; i++)
        factorial *= i;

    cout << factorial << endl;

    factorial = 1;
    i = 1;

    while (i < numero)
    {
        i++;
        factorial *= i;
    }

    cout << factorial << endl;

    factorial = 1;
    i = 0;

    do
    {
        i++;
        factorial *= i;
    } while (i < numero);

    cout << factorial << endl;

    cin.get();
    return EXIT_SUCCESS;
}