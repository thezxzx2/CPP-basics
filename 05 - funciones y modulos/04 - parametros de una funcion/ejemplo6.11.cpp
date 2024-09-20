#include <cstdlib>
#include <iostream>

using namespace std;

void asteriscos(int fila, int col = 3, char c = '*')
{
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < col; j++)
            cout << c;
        cout << endl;
    }
}

int main(int argc, char *argv[])
{
    asteriscos(4); // Correcto, dos parametros por omision
    cout << endl;
    asteriscos(4, 6); // Correcto, un parametro por omision
    cout << endl;
    asteriscos(4, 6, '@');

    // asteriscos(); // Llamada incorrecta, primer parametro obligatorio
    // asteriscos(4, , '@'); // Llamada incorrecta

    cin.get();
    return EXIT_SUCCESS;
}