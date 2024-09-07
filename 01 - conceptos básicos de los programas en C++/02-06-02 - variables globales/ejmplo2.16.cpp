#include <iostream>

using namespace std;

int suma = 0; // Puede usarse en todas las funciones. Ámbito de programa. suma es una variabl global

void f()
{
    // puede usar suma por ser global, pero ni i ni j por ser locales
    suma = suma + 30; // efecto lateral sobre suma. Debe evitarse
}

int main(int argc, char *argv[])
{
    int j = 3; // Solo puede usarse en la función main
               // variable local

    for (int i = 1; i <= 10; i++)
        suma = suma + i; // La variable i solo puede usarse dentro del bucle for.
                         // i tiene ámbito de bloque
                         // i es variable local del bucle for

    suma = suma + j; // Puede usar suma por ser global y j por ser local
    f();
    cout << suma;

    cin.get();

    return EXIT_SUCCESS;
}