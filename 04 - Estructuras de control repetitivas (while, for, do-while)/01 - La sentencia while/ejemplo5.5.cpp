#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    const int centinela = -1;
    float nota, contador = 0, suma = 0;

    cout << "Introduzca la siguiente nota -1 centinela: ";
    cin >> nota;

    while (nota != centinela)
    {
        contador++;
        suma += nota;
        cout << "Introduzca la siguiente nota -1 centinela: ";
        cin >> nota;
    }

    if (contador > 0)
        cout << "Media = " << suma / contador << endl;
    else
        cout << "No hay notas" << endl;

    cin.get();
    return EXIT_SUCCESS;
}