#include "Mid_class.h"
#include "Top_class.h"
#include "ADC_class.h"
#include "campeon.h"
#include<iostream>
using namespace std;


int main() {

    Mid campeonMid("Ahri", 5, 150, 300);
    Top campeonTop("Darius", 7, 200, 400);
    ADC campeonADC("Jinx", 3, 120, 50);

    cout<<"\n";

    campeonMid.mostrarInfoMid();
    campeonMid.mejorarNivel();

    campeonTop.mostrarInfoTop();
    campeonTop.mejorarNivel();

    campeonADC.mostrarInfoADC();
    campeonADC.mejorarNivel();

    return 0;
}