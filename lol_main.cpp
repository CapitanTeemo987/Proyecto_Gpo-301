#include "Mid_class.h"
#include "Top_class.h"
#include "ADC_class.h"
#include "campeon.h"
#include "equipo.h" 
#include<iostream>

void Menu(){
    std::cout<<"1. Crear equipo"<<std::endl;
    std::cout<<"2. Agregar campeon Mid"<<std::endl;
    std::cout<<"3. Agregar campeon Top"<<std::endl;
    std::cout<<"4. Agregar campeon ADC"<<std::endl;
    std::cout<<"5. Mostrar equipo"<<std::endl;
    std::cout<<"6. Crear equipo de ejemplo"<<std::endl;
    std::cout<<"7. Salir"<<std::endl;
}


int main() {
    int opcion = 0;
    Equipo equipo1;
    bool EquipoCreado = false;
    bool CampeonMidCreado = false;
    bool CampeonTopCreado = false;
    bool CampeonADCCreado = false;

    while (true){
        
        Menu();
        std::cin>>opcion;

        if (opcion == 7){
            std::cout << "Saliendo..." << std::endl;
            break;
        }

        switch (opcion){
            case 1:{
                if (!EquipoCreado){
                    std::string nombre;
                    std::cout << "\nIngrese el nombre del equipo: ";
                    std::cin>>nombre;
                    equipo1.set_nombre(nombre);
                    EquipoCreado = true;
                }
                else{
                    std::cout << "Debes crear un equipo antes de agregar un campeon" << std::endl;
                }
                break;
            }
            case 2:{
                if (EquipoCreado){
                    if (!CampeonMidCreado){
                        std::string nombreMid;
                        int nivelMid;
                        int poderMid;
                        int manaMid;
                        std::string nombreHabilidadMid;
                        int costoManaMid;
                        int dañoMid;

                        std::cout << "Ingrese el nombre del campeon: "<<std::endl;
                        std::cin>>nombreMid;
                        std::cout << "Ingrese el nivel del campeon: "<<std::endl;
                        std::cin>>nivelMid;
                        std::cout << "Ingrese el poder del campeon: "<<std::endl;
                        std::cin>>poderMid;
                        std::cout << "Ingrese el mana del campeon: "<<std::endl;
                        std::cin>>manaMid;
                        std::cout << "Ingrese el nombre de la habilidad: "<<std::endl;
                        std::cout<<"Solo ingrese el nombre de la habilidad, no se aceptan espacios. Ejemplo: OrbeDeFuego"<<std::endl;
                        std::cin>>nombreHabilidadMid;
                        std::cout << "Ingrese el costo de mana de la habilidad: "<<std::endl;
                        std::cin>>costoManaMid;
                        std::cout << "Ingrese el dano de la habilidad: "<<std::endl;
                        std::cin>>dañoMid;
                        Habilidades habilidadMid(nombreHabilidadMid, costoManaMid, dañoMid);
                        Mid* campeonMid = new Mid(nombreMid, nivelMid, poderMid, manaMid, habilidadMid);
                        equipo1.AgregaCampeon(campeonMid);
                        CampeonMidCreado = true;
                        campeonMid->mostrarInfoMid();
                        
                    }
                    else{
                        std::cout << "El campeon Mid ya existe" << std::endl;
                    }
                }
                else{
                    std::cout << "El equipo no existe" << std::endl;
                }
                break;
            }
            case 3:{
                if (EquipoCreado){
                    if (!CampeonTopCreado){
                        std::string nombreTop;
                        int nivelTop;
                        int poderTop;
                        int resistenciaTop;
                        std::string nombreHabilidadTop;
                        int costoManaTop;
                        int dañoTop;

                        std::cout << "Ingrese el nombre del campeon: "<<std::endl;
                        std::cin>>nombreTop;
                        std::cout << "Ingrese el nivel del campeon: "<<std::endl;
                        std::cin>>nivelTop;
                        std::cout << "Ingrese el poder del campeon: "<<std::endl;
                        std::cin>>poderTop;
                        std::cout << "Ingrese la resistencia del campeon: "<<std::endl;
                        std::cin>>resistenciaTop;
                        std::cout << "Ingrese el nombre de la habilidad: "<<std::endl;
                        std::cout<<"Solo ingrese el nombre de la habilidad, no se aceptan espacios. Ejemplo: EscudoGigante"<<std::endl;
                        std::cin>>nombreHabilidadTop;
                        std::cout << "Ingrese el costo de mana de la habilidad: "<<std::endl;
                        std::cin>>costoManaTop;
                        std::cout << "Ingrese el dano de la habilidad: "<<std::endl;
                        std::cin>>dañoTop;
                        Habilidades habilidadTop(nombreHabilidadTop, costoManaTop, dañoTop);
                        Top* campeonTop = new Top(nombreTop, nivelTop, poderTop, resistenciaTop, habilidadTop);
                        equipo1.AgregaCampeon(campeonTop);
                        CampeonTopCreado = true;
                        campeonTop->mostrarInfoTop();
                    }
                    else{
                        std::cout << "El campeon Top ya existe" << std::endl;
                    }
                }
                else{
                    std::cout << "El equipo no existe" << std::endl;
                }
                break;
            }
            case 4:{
                if (EquipoCreado){
                    if (!CampeonADCCreado){
                        std::string nombreADC;
                        int nivelADC;
                        int poderADC;
                        int criticoADC;
                        std::string nombreHabilidadADC;
                        int costoManaADC;
                        int dañoADC;

                        std::cout << "Ingrese el nombre del campeon: "<<std::endl;
                        std::cin>>nombreADC;
                        std::cout << "Ingrese el nivel del campeon: "<<std::endl;
                        std::cin>>nivelADC;
                        std::cout << "Ingrese el poder del campeon: "<<std::endl;
                        std::cin>>poderADC;
                        std::cout << "Ingrese el critico del campeon: "<<std::endl;
                        std::cin>>criticoADC;
                        std::cout << "Ingrese el nombre de la habilidad: "<<std::endl;
                        std::cout<<"Solo ingrese el nombre de la habilidad, no se aceptan espacios. Ejemplo: FlechaExplosiva"<<std::endl;
                        std::cin>>nombreHabilidadADC;
                        std::cout << "Ingrese el costo de mana de la habilidad: "<<std::endl;
                        std::cin>>costoManaADC;
                        std::cout << "Ingrese el dano de la habilidad: "<<std::endl;
                        std::cin>>dañoADC;  
                        Habilidades habilidadADC(nombreHabilidadADC, costoManaADC, dañoADC);
                        ADC* campeonADC = new ADC(nombreADC, nivelADC, poderADC, criticoADC, habilidadADC);
                        equipo1.AgregaCampeon(campeonADC);
                        CampeonADCCreado = true;
                        campeonADC->mostrarInfoADC();
                    }
                    else{
                        std::cout << "El campeon ADC ya existe" << std::endl;
                    }
                }
                else{
                    std::cout << "El equipo no existe" << std::endl;
                }
                break;
            }
            case 5:{
                if (EquipoCreado){
                    equipo1.MostrarEquipo();
                }
                else{
                    std::cout << "El equipo no existe" << std::endl;
                }
                break;
            }
            case 6:{
                Habilidades habilidad;
                Habilidades habilidad1("Orbe de fuego", 50, 100);
                Mid campeonMid("Ahri", 5, 150, 300, habilidad1);
                Top campeonTop("Darius", 7, 200, 400, habilidad);
                ADC campeonADC("Jinx", 3, 120, 50, habilidad);
                
                Equipo equipo1("T1");
                equipo1.AgregaCampeon(&campeonMid);
                equipo1.AgregaCampeon(&campeonTop);
                equipo1.AgregaCampeon(&campeonADC);


                std::cout<<"\n";

                equipo1.MostrarEquipo();

                std::cout<<"\n"<<std::endl;

                campeonMid.mostrarInfoMid();
                campeonMid.mejorarNivel();

                campeonTop.mostrarInfoTop();
                campeonTop.mejorarNivel();

                campeonADC.mostrarInfoADC();
                campeonADC.mejorarNivel();
                break;
            }
        }
    }

    return 0;
}