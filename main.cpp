//Devon M. Rivera Moran
//801229324

//Preprocesador y Librerias
#include <iostream>
#include <cstdlib>

int main() {
using namespace std;

//Generador de numeros aleatorios
srand(time(0));

int numeroAleatorio1 = rand() % (100 - 0 + 1) + 0;
int numeroAleatorio2 = rand() % (100 - 0 + 1) + 0;
int numeroAleatorio3 = rand() % (100 - 0 + 1) + 0;

//Salida de datos generados
cout << numeroAleatorio1 << '-' << numeroAleatorio2 << '-' << numeroAleatorio3 << endl;

    //Condiciones para ordenar los numeros de mayor a menor
    //y salida de datos ordenados
    if (numeroAleatorio1 >= numeroAleatorio2 && numeroAleatorio2 >= numeroAleatorio3)
    {
        cout <<numeroAleatorio1 << '-'<< numeroAleatorio2 << '-' << numeroAleatorio3 << endl;
    }

    else if (numeroAleatorio3 >= numeroAleatorio2 && numeroAleatorio2 >= numeroAleatorio1)
    {
        cout <<numeroAleatorio3 << '-'<< numeroAleatorio2 << '-' << numeroAleatorio1 << endl;
    }
    
    else if (numeroAleatorio1 >= numeroAleatorio3 && numeroAleatorio3 >= numeroAleatorio2)
    {
        cout <<numeroAleatorio1 << '-'<< numeroAleatorio3 << '-' << numeroAleatorio2 << endl;
    }

    else if (numeroAleatorio2 >= numeroAleatorio3 && numeroAleatorio3 >= numeroAleatorio1)
    {
        cout <<numeroAleatorio2 << '-'<< numeroAleatorio3 << '-' <<  numeroAleatorio1 << endl;
    }

    else if (numeroAleatorio2 >= numeroAleatorio1 && numeroAleatorio1 >= numeroAleatorio3)
    {
        cout <<numeroAleatorio2 << '-'<< numeroAleatorio1 << '-' << numeroAleatorio3 << endl;
    }

    else if (numeroAleatorio3 >= numeroAleatorio1 && numeroAleatorio1 >= numeroAleatorio2)
    {
        cout <<numeroAleatorio3 << '-'<< numeroAleatorio1 << '-' << numeroAleatorio2 << endl;
    }

return 0;

}
