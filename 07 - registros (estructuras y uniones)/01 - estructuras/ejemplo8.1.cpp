#include <cstdlib>
#include <iostream>

using namespace std;

struct libro // Nombre de la estructura
{
    char titulo[30];
    char autor[25];
    char editorial[30];
    int anyo;
    float precio;
    char fechaCompra[8];
} l1, l2, l3; // l1, l2, l3 son variables de tipo libro

struct complejo
{
    float real;
    float imaginaria;
} c1 = {23.2, 10.1};

libro l4, l5, l6; // l4, l5, l6 son variables de tipo libro

int main(int argc, char *argv[])
{
    l1 = l2 = l3;

    libro l7 = {
        "Programación en C",
        "Joyanes. Luis",
        "McGrawHill",
        2002,
        20,
        "02/6/05",
    };

    cout << "Titulo: " << l7.titulo << endl;
    cout << "Autor: " << l7.autor << endl;
    cout << "Editorial: " << l7.editorial << endl;
    cout << "Año: " << l7.anyo << endl;
    cout << "Precio: " << l7.precio << endl;
    cout << "Fecha compra: " << l7.fechaCompra << endl;

    cin.get();
    return EXIT_SUCCESS;
}