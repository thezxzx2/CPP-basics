#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int c = 0;
    float suma = 0;
    int vmax;

    cout << "Cuantos terminos sumo de la serie? ";
    cin >> vmax;

    for (;;) // bucle que no termina nunca
    {
        if (c <= vmax)
        {
            c++;
            suma += 1 / (float)(c * c);
            cout << c << " " << suma << endl;
        }
        else
            break;
    }

    cin.get();
    return EXIT_SUCCESS;
}