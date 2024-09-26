#include <cstdlib>
#include <iostream>

using namespace std;

struct Complejo
{
    float real;
    float imaginaria;
};

struct Persona
{
    char nombre[30];
    int edad;
    float altura;
    float peso;
};

int main(int argc, char *argv[])
{
    cout << "sizeof(Complejo): " << sizeof(Complejo) << endl;
    cout << "sizeof(Persona): " << sizeof(Persona) << endl;

    cin.get();
    return EXIT_SUCCESS;
}