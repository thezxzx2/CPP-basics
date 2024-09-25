#include <cstdlib>
#include <iostream>

#define dias 31
#define horas 24
#define minutos 60

using namespace std;

int main(int argc, char *argv[])
{
    int i, j, k;
    float a[dias][horas][minutos], media;

    // Lectura de las temperaturas
    for (i = 0; i < dias; i++)
        for (j = 0; j < horas; j++)
            for (k = 0; k < minutos; k++)
                cin >> a[i][j][k];

    for (i = 0; i < dias; i++)
    {
        media = 0;
        for (j = 0; j < horas; j++)
            for (k = 0; k < minutos; k++)
                media += a[i][j][k];

        cout << "dia " << i + 1 << " " << media / (horas * minutos) << endl;
    }
}