#include <cstdlib>
#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char *argv[])
{
    char nota;

    cout << "Introduzca calificacion (S, A, B, N, E): ";
    cin >> nota;

    nota = toupper(nota);

    switch (nota)
    {
    case 'E':
        cout << "Sobresaliente." << endl;
        break;
    case 'N':
        cout << "Notable." << endl;
        break;
    case 'B':
        cout << "Bien." << endl;
        break;
    case 'A':
        cout << "Aprobado." << endl;
        break;
    case 'S':
        cout << "Suspenso." << endl;
        break;
    default:
        cout << "No es posible esta nota" << endl;
    }

    cin.get();
    return EXIT_SUCCESS;
}