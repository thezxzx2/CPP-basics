#include <cstdlib>
#include <iostream>

using namespace std;

float areaR(float, float); // Prototipo. Nombres parametros omitidos
float entrada();           // Prototipo sin parametros

int main(int argc, char *argv[])
{
    float base, altura;

    cout << "Base del rectangulo: ";
    base = entrada();
    cout << "Altura del rectangulo: ";
    altura = entrada();
    cout << "Area rectangulo: " << areaR(base, altura) << endl;

    cin.get();
    return EXIT_SUCCESS;
}

float entrada()
{
    float m;

    do
    {
        cout << "Numero positivo: ";
        cin >> m;
    } while (m <= 0.0);

    return m;
}

float areaR(float b, float a) // Se declaran los nombres de parametros
{
    return (b * a);
}