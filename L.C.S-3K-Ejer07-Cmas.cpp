// L.C.S-3K-Ejer07-Cmas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>
#include <string>
//#include "pilaleneal.h"

int main()
{
    const int capacidad = 10;
    std::vector<int>elementos(capacidad);
    int cima = -1;
    std::cout << "Tecla elemento de la pila (termina con -1)\n";
    int x = 0;
    const int CLAVE = -1;
    while (x != CLAVE)
    {
        std::string entrada;
        std::cin >> entrada;
        try {
            x = std::stoi(entrada);//Convertimos de cadena a entero(string to int)
            if (cima < capacidad - 1) {
                cima++;
                elementos[cima] = x;

            }
            else {
                std::cout << "Pila Llena\n";
                break;
            }
        }
        catch (const std::invalid_argument&) {
            std::cout << "Elementos de la pila\n";
        }

    }
    if (cima >= 0) {
        //std::cout << cima << " ";
        std::cout << "Elementos de la Pila\n";
        while (cima >= 0) {
            x = elementos[cima];
            cima--;
            std::cout << x << " ";
        }
    }
    else {
        std::cout << "Pila vacia\n";
    }

    return 0;
}