#include <cstdlib>
#include <iostream> // Contiene <ctype.h>

using namespace std;

int main(int argc, char *argv[])
{
    char resp;

    do
    {
        cout << "Introduzca S = Si N = No? ";
        cin >> resp;
        resp = toupper(resp);
    } while ((resp != 'S') && (resp != 'N'));

    cout << "Respuesta leida " << resp << endl;

    cin.get();
    return EXIT_SUCCESS;
}