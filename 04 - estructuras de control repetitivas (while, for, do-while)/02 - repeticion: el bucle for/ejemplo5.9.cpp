#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    float n;

    cout << "n      raiz(n)" << endl;
    for (n = 16; n >= 1; n -= 2.5)
        cout << n << '\t' << sqrt(n) << endl;

    cin.get();
    return EXIT_SUCCESS;
}