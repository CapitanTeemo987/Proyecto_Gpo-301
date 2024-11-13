#ifndef Mid_class_h
#define Mid_class_h

#include <iostream>
#include <string>
#include "campeon.h"
using namespace std;

// Clase Mid
class Mid : public campeon{
private:
    int mana; // atributo especial

public:
    // Constructor
    Mid(string, int, int , int);

    // Setters
    void set_mana(int);

    // Getters
    int get_mana();
    
    // Método para mostrar información
    void mostrarInfoMid();

    // Método para mejorar el nivel
    void mejorarNivel();
};

Mid::Mid(string nom, int niv, int pod, int m): campeon(nom, niv, pod){
    mana = m;
}

void Mid::set_mana(int m){
    mana = m;
}

int Mid::get_mana(){
    return mana;
}

void Mid::mostrarInfoMid(){
    campeon::mostrarInfo();
    cout << ", Mana: " << get_mana() << endl;
}

void Mid::mejorarNivel(){
    campeon::mejorarNivel();
    mana += 20;
}


#endif


