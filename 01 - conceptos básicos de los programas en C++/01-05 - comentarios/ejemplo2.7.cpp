#include <iostream> // archivo cabecera donde se encuenta cout

using namespace std; // usa la consola como dispositivo estándar

int main(int argc, char *argv[])
{
    // Este programa sólo muestra en pantalla el mensaje
    // hola mundo cruel
    cout << "Hola mundo cruel\n"; // Visualiza el mensaje
    cin.get();                    // Archivo de ejecución retenido hasta pulsar una tecla
    return EXIT_SUCCESS;          // Retorna el control al sistema operativo
}