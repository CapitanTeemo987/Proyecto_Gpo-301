#include "Mid_class.h"
#include "Top_class.h"
#include "ADC_class.h"
#include "campeon.h"
#include "equipo.h" 
#include<iostream>

void Menu(){
    std::cout<<"\n";
    std::cout<<"1. Crear equipo"<<std::endl;
    std::cout<<"2. Agregar campeon Mid"<<std::endl;
    std::cout<<"3. Agregar campeon Top"<<std::endl;
    std::cout<<"4. Agregar campeon ADC"<<std::endl;
    std::cout<<"5. Mostrar equipo"<<std::endl;
    std::cout<<"6. Crear equipo de ejemplo"<<std::endl;
    std::cout<<"7. Mejorar nivel de campeones"<<std::endl;
    std::cout<<"8. Salir"<<std::endl;
    std::cout<<"\n";
}


int main() {
    int opcion = 0;
    int opcionLinea = 0;
    Equipo equipo1;
    bool EquipoCreado = false; // Variable para verificar si el equipo está creado
    bool CampeonMidCreado = false; // Variable para verificar si el campeón Mid está creado
    bool CampeonTopCreado = false; // Variable para verificar si el campeón Top está creado
    bool CampeonADCCreado = false; // Variable para verificar si el campeón ADC está creado
    
    Mid* campeonMid = nullptr; // Puntero para el campeón Mid
    Top* campeonTop = nullptr; // Puntero para el campeón Top
    ADC* campeonADC = nullptr; // Puntero para el campeón ADC


    while (true){
        
        Menu();
        std::cin>>opcion;

        if (opcion == 8){
            std::cout << "Saliendo..." << std::endl;
            break;
        }

        switch (opcion){
            case 1:{
                if (!EquipoCreado){
                    std::string nombre;
                    std::cout << "\nIngrese el nombre del equipo: " << std::endl;
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

                        std::cout << "\nIngrese el nombre del campeon: "<<std::endl;
                        std::cin>>nombreMid;
                        std::cout << "\nIngrese el nivel del campeon: "<<std::endl;
                        std::cin>>nivelMid;
                        std::cout << "\nIngrese el poder del campeon: "<<std::endl;
                        std::cin>>poderMid;
                        std::cout << "\nIngrese el mana del campeon: "<<std::endl;
                        std::cin>>manaMid;
                        std::cout << "\nIngrese el nombre de la habilidad: "<<std::endl;
                        std::cout<<"Solo ingrese el nombre de la habilidad, no se aceptan espacios. Ejemplo: OrbeDeFuego"<<std::endl;
                        std::cin>>nombreHabilidadMid;
                        std::cout << "\nIngrese el costo de mana de la habilidad: "<<std::endl;
                        std::cin>>costoManaMid;
                        std::cout << "\nIngrese el dano de la habilidad: "<<std::endl;
                        std::cin>>dañoMid;
                        Habilidades habilidadMid(nombreHabilidadMid, costoManaMid, dañoMid);
                        campeonMid = new Mid(nombreMid, nivelMid, poderMid, manaMid, habilidadMid);
                        equipo1.AgregaCampeon(campeonMid);
                        CampeonMidCreado = true;
                        std::cout<<"\n";
                        campeonMid->mostrarInfoMid();
                        std::cout<<"\n";
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

                        std::cout << "\nIngrese el nombre del campeon: "<<std::endl;
                        std::cin>>nombreTop;
                        std::cout << "\nIngrese el nivel del campeon: "<<std::endl;
                        std::cin>>nivelTop;
                        std::cout << "\nIngrese el poder del campeon: "<<std::endl;
                        std::cin>>poderTop;
                        std::cout << "\nIngrese la resistencia del campeon: "<<std::endl;
                        std::cin>>resistenciaTop;
                        std::cout << "\nIngrese el nombre de la habilidad: "<<std::endl;
                        std::cout<<"Solo ingrese el nombre de la habilidad, no se aceptan espacios. Ejemplo: EscudoGigante"<<std::endl;
                        std::cin>>nombreHabilidadTop;
                        std::cout << "\nIngrese el costo de mana de la habilidad: "<<std::endl;
                        std::cin>>costoManaTop;
                        std::cout << "\nIngrese el dano de la habilidad: "<<std::endl;
                        std::cin>>dañoTop;
                        Habilidades habilidadTop(nombreHabilidadTop, costoManaTop, dañoTop);
                        campeonTop = new Top(nombreTop, nivelTop, poderTop, resistenciaTop, habilidadTop);
                        equipo1.AgregaCampeon(campeonTop);
                        CampeonTopCreado = true;
                        std::cout<<"\n";
                        campeonTop->mostrarInfoTop();
                        std::cout<<"\n";
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

                        std::cout << "\nIngrese el nombre del campeon: "<<std::endl;
                        std::cin>>nombreADC;
                        std::cout << "\nIngrese el nivel del campeon: "<<std::endl;
                        std::cin>>nivelADC;
                        std::cout << "\nIngrese el poder del campeon: "<<std::endl;
                        std::cin>>poderADC;
                        std::cout << "\nIngrese el critico del campeon: "<<std::endl;
                        std::cin>>criticoADC;
                        std::cout << "\nIngrese el nombre de la habilidad: "<<std::endl;
                        std::cout<<"Solo ingrese el nombre de la habilidad, no se aceptan espacios. Ejemplo: FlechaExplosiva"<<std::endl;
                        std::cin>>nombreHabilidadADC;
                        std::cout << "\nIngrese el costo de mana de la habilidad: "<<std::endl;
                        std::cin>>costoManaADC;
                        std::cout << "\nIngrese el dano de la habilidad: "<<std::endl;
                        std::cin>>dañoADC;  
                        Habilidades habilidadADC(nombreHabilidadADC, costoManaADC, dañoADC);
                        campeonADC = new ADC(nombreADC, nivelADC, poderADC, criticoADC, habilidadADC);
                        equipo1.AgregaCampeon(campeonADC);
                        CampeonADCCreado = true;
                        std::cout<<"\n";
                        campeonADC->mostrarInfoADC();
                        std::cout<<"\n";
                    }
                    else{
                        std::cout << "\nEl campeon ADC ya existe" << std::endl;
                    }
                }
                else{
                    std::cout << "\nEl equipo no existe" << std::endl;
                }
                break;
            }
            case 5:{
                if (EquipoCreado){
                    equipo1.MostrarEquipo();
                }
                else{
                    std::cout << "\nEl equipo no existe" << std::endl;
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
            case 7:{
                if (EquipoCreado){
                    std::cout<<"Seleccione la linea del campeon que desea mejorar: "<<std::endl;
                    std::cout<<"1. Mid"<<std::endl;
                    std::cout<<"2. Top"<<std::endl;
                    std::cout<<"3. ADC"<<std::endl;
                    std::cout<<"4. Todos los campeones"<<std::endl;
                    std::cin>>opcionLinea;

                    switch (opcionLinea){
                        case 1:{
                            if(CampeonMidCreado && campeonMid != nullptr){ // Verifica si el campeón Mid está creado y no es nullptr
                                campeonMid->mejorarNivel(); // Mejora el nivel del campeón Mid
                                campeonMid->mostrarInfoMid(); // Muestra la información del campeón Mid
                            }
                            else{
                                std::cout<<"El campeon Mid no existe"<<std::endl;
                            }
                            break;
                        }
                        case 2:{
                            if(CampeonTopCreado){ // Verifica si el campeón Top está creado
                                campeonTop->mejorarNivel(); // Mejora el nivel del campeón Top
                                campeonTop->mostrarInfoTop(); // Muestra la información del campeón Top
                            }
                            else{
                                std::cout<<"El campeon Top no existe"<<std::endl;
                            }
                            break;
                        }
                        case 3:{
                            if(CampeonADCCreado){ // Verifica si el campeón ADC está creado
                                campeonADC->mejorarNivel(); // Mejora el nivel del campeón ADC
                                campeonADC->mostrarInfoADC(); // Muestra la información del campeón ADC
                            }
                            else{
                                std::cout<<"El campeon ADC no existe"<<std::endl;
                            }
                            break;
                        }
                        case 4:{
                            if(CampeonMidCreado && CampeonTopCreado && CampeonADCCreado){ // Verifica si los campeones están creados
                                campeonMid->mejorarNivel(); // Mejora el nivel del campeón Mid
                                campeonMid->mostrarInfoMid(); // Muestra la información del campeón Mid
                                campeonTop->mejorarNivel(); // Mejora el nivel del campeón Top
                                campeonTop->mostrarInfoTop(); // Muestra la información del campeón Top
                                campeonADC->mejorarNivel(); // Mejora el nivel del campeón ADC
                                campeonADC->mostrarInfoADC(); // Muestra la información del campeón ADC
                            }
                            else{
                                std::cout<<"No se puede mejorar el nivel de los campeones"<<std::endl;
                            }
                            break;
                        }
                    }
                }
                else{
                    std::cout<<"No hay campeones en el equipo\n"<<std::endl;
                }
                break;
            }
        }
    }

    return 0;
}