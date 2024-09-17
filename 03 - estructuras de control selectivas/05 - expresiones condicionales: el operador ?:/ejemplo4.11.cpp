#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n1, n2, mayor;

    cout << "Introduzca dos numeros: ";
    cin >> n1 >> n2;

    mayor = (n1 > n2) ? n1 : n2;

    cout << "El mayor es: " << mayor << endl;

    cin.get();
    return EXIT_SUCCESS;
}