#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int num = 10;

    while (num <= 100)
    {
        cout << num << " ";
        num += 10;
    }

    cout << endl
         << endl;

    for (num = 10; num <= 100; num += 10)
        cout << num << " ";

    cout << endl
         << endl;

    num = 10;
    do
    {
        cout << num << " ";
        num += 10;
    } while (num <= 100);

    cin.get();
    return EXIT_SUCCESS;
}