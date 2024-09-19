#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *arv[])
{
    char car = 'A';

    do
    {
        cout << car << ' ';
        car++;
    } while (car <= 'Y');

    cin.get();
    return EXIT_SUCCESS;
}