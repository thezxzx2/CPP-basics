#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n1, n2;

    cout << "Introduzca dos numeros: ";
    cin >> n1 >> n2;

    n1 > n2
        ? cout << n1 << " > " << n2 << endl
        : cout << n1 << " <= " << n2 << endl;

    cin.get();
    return EXIT_SUCCESS;
}