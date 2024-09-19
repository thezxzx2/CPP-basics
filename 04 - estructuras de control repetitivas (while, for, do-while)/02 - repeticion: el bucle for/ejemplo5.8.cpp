#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "n      n*n     n*n*n" << endl;
    for (int n = 1; n <= 5; n++)
        cout << n << '\t' << n * n << '\t' << n * n * n << endl;

    cin.get();
    return EXIT_SUCCESS;
}