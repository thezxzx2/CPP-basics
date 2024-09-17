#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int nota;

    cout << "Dame nota: ";
    cin >> nota;

    if (nota < 100)
        cout << "Baja" << endl;
    else
        cout << "Alta" << endl;

    cin.get();
    return EXIT_SUCCESS;
}