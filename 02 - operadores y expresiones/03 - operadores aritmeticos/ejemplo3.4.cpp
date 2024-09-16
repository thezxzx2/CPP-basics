#include <cstdlib>
#include <iostream>

#define SEGUNDO 60
#define DIA 24
#define SEMANA 7
using namespace std;

int main(int argc, char *argv[])
{
    int semanas, dias, horas, minutos, segundos, acu;

    cout << "Introduzca segundo ";
    cin >> acu;
    segundos = acu % SEGUNDO;
    acu = acu / SEGUNDO;
    minutos = acu % SEGUNDO;
    acu = acu / SEGUNDO;
    horas = acu % DIA;
    acu = acu / DIA;
    dias = acu % SEMANA;
    semanas = acu / SEMANA;

    cout << "Segundos en semanas dias horas minutos y segundos " << endl;
    cout << "Numero de semanas " << semanas << endl;
    cout << "Numero de dias " << dias << endl;
    cout << "Numero de horas " << horas << endl;
    cout << "Numero de minutos " << minutos << endl;
    cout << "Numero de segundos " << segundos << endl;

    cin.get();
    return EXIT_SUCCESS;
}