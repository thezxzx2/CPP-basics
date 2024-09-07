#include <iostream>

namespace geo
{
    const double PI = 3.141592;
    double longcircun(double radio)
    {
        return 2 * PI * radio;
    }
}

using namespace std;
using namespace geo;

int main(int argc, char *argv[])
{
    std::cout << "¡Hola mundo cruel!" << std::endl; // Operador de resolución de ámbito de alcance
    cout << longcircun(16) << endl;                 // No funciona al omitir using namespace geo;
    cout << geo::longcircun(20) << endl;
}