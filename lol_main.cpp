#include "Mid_class.h"
#include "Top_class.h"
#include "ADC_class.h"
#include "campeon.h"
#include "equipo.h" 
#include<iostream>
using namespace std;


int main() {
    Habilidades habilidad;
    Habilidades habilidad1("Orbe de fuego", 50, 100);
    Mid campeonMid("Ahri", 5, 150, 300, habilidad1);
    Top campeonTop("Darius", 7, 200, 400, habilidad);
    ADC campeonADC("Jinx", 3, 120, 50, habilidad);
    
    Equipo equipo1("T1");
    equipo1.AgregaCampeon(&campeonMid);
    equipo1.AgregaCampeon(&campeonTop);
    equipo1.AgregaCampeon(&campeonADC);


    cout<<"\n";

    equipo1.MostrarEquipo();

    cout<<"\n"<<endl;

    campeonMid.mostrarInfoMid();
    campeonMid.mejorarNivel();

    campeonTop.mostrarInfoTop();
    campeonTop.mejorarNivel();

    campeonADC.mostrarInfoADC();
    campeonADC.mejorarNivel();

    return 0;
}
