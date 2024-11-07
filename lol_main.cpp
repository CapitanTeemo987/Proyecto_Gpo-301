#include "lol_class.h"
#include<iostream>
using namespace std;


int main() {

    Mid campeonMid("Ahri", 5, 150, 300);
    Top campeonTop("Darius", 7, 200, 400);
    ADC campeonADC("Jinx", 3, 120, 50);

    campeonMid.mostrarInfo();
    campeonMid.mejorarNivel();

    campeonTop.mostrarInfo();
    campeonTop.mejorarNivel();

    campeonADC.mostrarInfo();
    campeonADC.mejorarNivel();

    return 0;
}