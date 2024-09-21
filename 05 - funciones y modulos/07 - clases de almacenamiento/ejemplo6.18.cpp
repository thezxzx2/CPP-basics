#include <cstdlib>
#include <iostream>

using namespace std;

float potenciaS(float a, int n)
{
    static float f = 1.0;

    f *= a;
    return f;
}

float potencia(float a, int n)
{
    float f = 1.0;

    for (int i = 1; i <= n; i++)
        f *= a;

    return f;
}

int main(int argc, char *argv[])
{
    float a;
    int n;

    cout << "Valor de a: ";
    cin >> a;

    do
    {
        cout << "Valor de n: ";
        cin >> n;
    } while (n <= 0);

    for (int i = 1; i <= n; i++)
        cout << a << " elevado a " << i << " = " << potenciaS(a, i) << endl;

    cin.get();
    return EXIT_SUCCESS;
}