#include <cstdlib>
#include <iostream>

#define pi 3.141592

using namespace std;

int main(int argc, char *argv[])
{
    float radio, longitud, area;

    cin >> radio;
    longitud = 2 * pi * radio;
    area = pi * radio * radio;

    cout << "radio = " << radio << endl;
    cout << "longitud = " << longitud << endl;
    cout << "area = " << area << endl;

    cin.get();
    return EXIT_SUCCESS;
}