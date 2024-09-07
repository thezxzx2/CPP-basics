#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    char Nombre, Apellido;

    cout << "Introduzca la inicial de su nombre y primer apellido: ";
    cin >> Nombre >> Apellido;
    cout << "Hola, " << Nombre << "." << Apellido << ".\n";
    cin.get();

    return EXIT_SUCCESS;
}