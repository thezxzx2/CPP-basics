#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x = 10, y = 12, mayor, menor;
    bool z;

    z = x >= y ? true : false;
    mayor = x >= y ? x : y;
    menor = x >= y ? y : x;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "El mayor es = " << mayor << endl;
    cout << "El menor es = " << menor << endl;

    cin.get();
    return EXIT_SUCCESS;
}