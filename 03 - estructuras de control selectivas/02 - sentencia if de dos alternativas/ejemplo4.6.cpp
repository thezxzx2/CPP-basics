#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float salarioBruto, impuestos, salarioNeto;

    cout << "Introduzca salario bruto e impuestos ";
    cin >> salarioBruto >> impuestos;

    if (salarioBruto > 600) // Restar impuestos
        salarioNeto = salarioBruto - impuestos;
    else // No restar impuestos
        salarioNeto = salarioBruto;

    cout << salarioNeto << " " << salarioBruto << endl; // Visualizacion

    cin.get();
    return EXIT_SUCCESS;
}