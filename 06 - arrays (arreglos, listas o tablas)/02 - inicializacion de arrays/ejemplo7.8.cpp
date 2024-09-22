#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    char cadena[6];
    strcpy(cadena, "abcde");

    cout << cadena << endl;

    // char cadena[6] = "abcde";
    // cout << cadena << endl;

    // char cadena[6];
    // cadena = "abcde"; // Error

    cin.get();
    return EXIT_SUCCESS;
}