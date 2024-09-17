#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float nota;
    cout << "Dame nota: ";
    cin >> nota;

    if ((nota < 0.0) || (nota > 10))
        cout << "Error en nota" << endl;
    else if (nota < 5.0)
        cout << "Suspenso" << endl;
    else if (nota < 6.5)
        cout << "Aprobado" << endl;
    else if (nota < 8.5)
        cout << "Notable" << endl;
    else if (nota < 10)
        cout << "Sobresaliente" << endl;
    else
        cout << "Matricula de honor" << endl;

    cin.get();
    return EXIT_SUCCESS;
}