#ifndef Top_class_h
#define Top_class_h

#include <iostream>
#include <string>
#include "campeon.h"
using namespace std;


class Top : public campeon{
private:
    int resistencia; // atributo especial

public:
    // Constructor
    Top(string, int, int, int);

    // Setters
    void set_resistencia(int);
    
    // Getters
    int get_resistencia();
    
    // Método para mostrar información
    void mostrarInfoTop();
    
    // Método para mejorar el nivel
    void mejorarNivel();
};

Top::Top(string nom, int niv, int pod, int res): campeon(nom, niv, pod){
    resistencia = res;
}

void Top::set_resistencia(int res){
    resistencia = res;
}

int Top::get_resistencia(){
    return resistencia;
}

void Top::mostrarInfoTop(){
    campeon::mostrarInfo();
    cout << ", Resistencia: " << get_resistencia() << endl;
}

void Top::mejorarNivel(){
    campeon::mejorarNivel();
    resistencia += 10;
}

#endif
