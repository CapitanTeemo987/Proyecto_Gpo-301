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
    Mid(string, int, int , int, Habilidades);

    // Setters
    void set_mana(int);

    // Getters
    int get_mana();
    
    // Método para mostrar información
    void mostrarInfoMid();

    // Método para mejorar el nivel
    void mejorarNivel();
};




/*
 * Constructor que inicializa un campeón con valores específicos
 * nom - Nombre del campeón
 * niv - Nivel inicial
 * pod - Poder inicial
 * m - Mana inicial
 * hab - Habilidad asignada
 */
Mid::Mid(string nom, int niv, int pod, int m, Habilidades hab): campeon(nom, niv, pod, hab){
    mana = m;
}

// Setter para modificar el valor de mana
void Mid::set_mana(int m){
    mana = m;
}

// Getter para obtener el valor de mana
int Mid::get_mana(){
    return mana;
}

// Método para mostrar información del campeón
void Mid::mostrarInfoMid(){
    campeon::mostrarInfo();
    cout << ", Mana: " << get_mana() << endl;
}

// Método para mejorar el nivel del campeón
void Mid::mejorarNivel(){
    campeon::mejorarNivel();
    mana += 20;
}


#endif


