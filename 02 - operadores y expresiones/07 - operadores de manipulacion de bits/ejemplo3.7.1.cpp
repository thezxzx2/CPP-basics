#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x = 9, y = 10, x_y_y, x_or_y, x_xor_y;

    x_y_y = x & y;
    x_or_y = x | y;
    x_xor_y = x ^ y;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "x_y_y " << x_y_y << endl;
    cout << "x_or_y " << x_or_y << endl;
    cout << "x_xor_y " << x_xor_y << endl;

    x = x << 2;
    y = y >> 2;
    cout << "x << 2 = " << x << endl;
    cout << "y >> 2 = " << y << endl;

    cin.get();
    return EXIT_SUCCESS;
}