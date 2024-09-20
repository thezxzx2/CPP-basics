#include <cstdlib>
#include <iostream>

using namespace std;

const float PI = 3.141592;

inline float VOLCILINDRO(float radio, float altura) // Funcion en linea
{
    return (PI * radio * radio * altura);
}

inline float AREATOTAL(float radio, float altura) // Funcion en linea
{
    return (2 * PI * radio * altura + PI * radio * radio);
}

int main(int argc, char *argv[])
{
    float radio, altura, volumen, areaTotal;
    do
    {
        cout << "Introduzca radio del cilindro positivo: ";
        cin >> radio;
        cout << "Introduzca altura del cilindro positivo: ";
        cin >> altura;
    } while ((radio <= 0) || (altura <= 0));

    volumen = VOLCILINDRO(radio, altura); // Llamada sustituye al codigo
    // La sentencia anterior es equivalente a
    // volumen = PI * radio * radio * altura;

    areaTotal = AREATOTAL(radio, altura); // Llamada sustituye al codigo
    // La sentencia naterior es equivalente a
    // areaTotal = 2 * PI * radio * altura + PI * radio * radio;
    cout << "El volumen del cilindro es: " << volumen << endl;
    cout << "El area total del cilindro es: " << areaTotal << endl;

    cin.get();
    return EXIT_SUCCESS;
}