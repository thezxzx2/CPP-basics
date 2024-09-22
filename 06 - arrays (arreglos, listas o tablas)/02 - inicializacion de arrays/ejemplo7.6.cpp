#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int num[5] = {10, 20, 30, 40, 50}; // Declara e inicializa un array de 5 enteros

    float x[] = {1.0, 22.0, 3.5}; // Declara e inicializa un array de 3 reales

    // Se pueden asignar constantes simbolicas como valores numericos
    const int ENE = 31, FEB = 28, MAR = 31, ABR = 30, MAY = 31, JUN = 30, JUL = 31, AGO = 31, SEP = 30, OCT = 31, NOV = 30, DIC = 31;

    int meses[12] = {ENE, FEB, MAR, ABR, MAY, JUN, JUL, AGO, SEP, OCT, NOV, DIC};

    for (int i = 0; i < sizeof(meses) / sizeof(meses[0]); i++)
        cout << meses[i] << endl;

    cin.get();
    return EXIT_SUCCESS;
}