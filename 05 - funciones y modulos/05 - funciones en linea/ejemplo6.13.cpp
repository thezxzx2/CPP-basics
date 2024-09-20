#include <cstdlib>
#include <iostream>

using namespace std;

#define fesp(x) (x * x + 2 * x - 1)

int main(int argc, char *argvp[])
{
    float x;
    for (x = 0.0; x <= 6.5; x += 0.3)
        cout << x << " " << fesp(x) << endl;

    cin.get();
    return EXIT_SUCCESS;
}