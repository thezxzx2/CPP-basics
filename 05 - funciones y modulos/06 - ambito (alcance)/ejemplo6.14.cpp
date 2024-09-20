#include <cstdlib>
#include <iostream>

using namespace std;

const float PI = 3.141592; // Ambito de programa

float longitud(float r)
{
    return PI * r; // El parametro r tiene ambito de funcion
}

float area(float r)
{
    return (PI * r * r); // El parametro r tiene ambito de funcion
}

int main(int argc, char *argv[])
{
    float radio; // Tiene ambito de funcion

    do
    {
        cout << "Introduzca radio positivo: ";
        cin >> radio;
    } while (radio <= 0);

    cout << "La longitud de la circunferencia es: ";
    cout << longitud(radio) << endl;
    cout << "El area del circulo es: " << area(radio) << endl;

    cin.get();
    return EXIT_SUCCESS;
}