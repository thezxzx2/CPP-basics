#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int opcion;

    cout << "Introduzca opcion entre 0 y 3: ";
    cin >> opcion;

    switch (opcion)
    {
    case 0:
        cout << "Cero!" << endl;
        break;
    case 1:
        cout << "Uno!" << endl;
        break;
    case 2:
        cout << "Dos!" << endl;
        break;
    case 3:
        cout << "Tres!" << endl;
        break;
    default:
        cout << "Fuera de rango" << endl;
    }

    cin.get();
    return EXIT_SUCCESS;
}