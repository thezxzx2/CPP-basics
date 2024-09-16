#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int m = 10, n;

    n = ++m; // Primero se incrementa m y lkuego se asigna a n
    cout << "m = " << m << " n = " << n << endl;
    n = m++; // Primer se asigna a n y luego se incrementa m
    cout << "m = " << m << " n = " << n << endl;
    cout << "m = " << m++ << endl;
    cout << "m = " << ++m << endl;
    n = 5;
    m = ++n * --n; // ++n pone n a 6, luego --n pone n a 5, luego m = 25
    cout << "n = " << n << " m = " << m << endl;

    cin.get();
    return EXIT_SUCCESS;
}