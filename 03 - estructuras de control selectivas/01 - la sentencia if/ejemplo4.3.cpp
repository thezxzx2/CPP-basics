#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n1, n2, n3, mayor;

    cout << "Introduzca tres numeros: ";
    cin >> n1 >> n2 >> n3;

    mayor = n1;
    if (mayor < n2)
        mayor = n2;
    if (mayor < n3)
        mayor = n3;

    cout << "El mayor es: " << mayor << endl;

    cin.get();
    return EXIT_SUCCESS;
}