#include <cstdlib>
#include <iostream>

using namespace std;

float f;

void leerReal(void);
void escribirReal();

int main(int argc, char *argv[])
{
    leerReal();
    escribirReal();

    cout << "extern1: " << f << endl;

    cin.get();
    return EXIT_SUCCESS;
}