#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int ejemplo1[2][3] = {1, 2, 3, 4, 5, 6};
    int ejemplo2[2][3] = {{1, 2, 3}, {4, 5, 6}};
    float ejemplo3[3][4] = {0.0}; // Inicializar a cero

    int rows = sizeof(ejemplo3) / sizeof(ejemplo3[0]);
    int cols = sizeof(ejemplo3[0]) / sizeof(ejemplo3[0][0]);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cout << "El valor en la posicion [" << i << "][" << j << "]" << " es: " << ejemplo3[i][j] << endl;

    // cout << "Filas: " << fila << " Columnas: " << col << endl;

    cin.get();
    return EXIT_SUCCESS;
}