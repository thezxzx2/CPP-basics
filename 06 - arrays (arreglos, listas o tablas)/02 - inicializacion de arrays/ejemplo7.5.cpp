#include <cstdlib>
#include <iostream>

#define max 50

using namespace std;

int main(int argc, char *argv[])
{
    int a[max];

    for (int i = 0; i < max; i++)
        a[i] = 10 * i;

    for (int i = 0; i < max; i++)
        cout << a[i] << endl;

    cin.get();
    return EXIT_SUCCESS;
}
