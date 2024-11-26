#ifndef Top_class_h
#define Top_class_h

#include <iostream>
#include <string>
#include "campeon.h"
using namespace std;


class Top : public campeon{
private:
    int resistencia; // atributos especial

public:
    // Constructor
    Top(string, int, int, int, Habilidades);

    // Setters
    void set_resistencia(int);
    
    // Getters
    int get_resistencia();
    
    // Método para mostrar información
    void mostrarInfoTop();
    
    // Método para mejorar el nivel
    void mejorarNivel();


};

/*
 * Constructor que inicializa un campeón con valores específicos
 * nom - Nombre del campeón
 * niv - Nivel inicial
 * pod - Poder inicial
 * res - Resistencia inicial
 * hab - Habilidad asignada
 */
Top::Top(string nom, int niv, int pod, int res, Habilidades hab): campeon(nom, niv, pod, hab, "Top"){
    resistencia = res;
}

// Setter para modificar el valor de resistencia
void Top::set_resistencia(int res){
    resistencia = res;
}

// Getter para obtener el valor de resistencia
int Top::get_resistencia(){
    return resistencia;
}

// Método para mostrar información del campeón
void Top::mostrarInfoTop(){
    campeon::mostrarInfo();
    cout << ", Resistencia: " << get_resistencia() << endl;
}

// Método para mejorar el nivel del campeón
void Top::mejorarNivel(){
    campeon::mejorarNivel();
    resistencia += 10;
}


#endif
