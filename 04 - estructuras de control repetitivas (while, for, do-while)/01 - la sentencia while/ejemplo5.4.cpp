#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argvp[])
{
    int suma = 0, n = 11;

    while (n <= 50)
    {
        suma += n;
        n++;
    }

    cout << suma << endl;

    cin.get();
    return EXIT_SUCCESS;
}