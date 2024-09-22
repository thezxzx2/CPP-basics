#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char ch1[] = {'L', 'u', 'i', 's', ' ', 'y', ' ', 'L', 'u', 'c', 'a', 's'}; // Declaracion de un array de 12 caracteres

    char ch2[] = {"Ejemplo"};
    char cadena1[] = "abcdef";
    string cadena2 = "abcdef";

    // Los arrays pueden inicializarse con una constante cadena. El array anterior tiene 7 elementos, ya que se almacena el caracter nulo \0

    cout << ch1 << endl;
    cout << ch2 << endl;
    cout << cadena1 << endl;
    cout << cadena2 << endl;

    cin.get();
    return EXIT_SUCCESS;
}