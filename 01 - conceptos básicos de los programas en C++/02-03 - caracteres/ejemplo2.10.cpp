#include <cstdlib>
#include <iostream>

using namespace std;

char dato;
unsigned char dato1;

int main(int argc, char *argv[])
{
    cout << "char          unsigned char " << endl;
    cout << "ASCII  CHAR   ASCII    CHAR" << endl;

    for (int i = 115; i < 130; i++)
    {
        dato = i;
        dato1 = i;
        cout << (int)dato << "     " << dato << "      ";
        cout << (int)dato1 << "     " << dato1 << endl;
    }

    cin.get();
    return EXIT_SUCCESS;
}