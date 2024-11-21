#ifndef campeon_h
#define campeon_h

#include <iostream>
#include <string>
#include "habilidades.h"
using namespace std;

/*
 * Clase campeon: Representa un personaje jugable en el juego
 * Atributos:
 * - nombre: Nombre del campeón (string)
 * - nivel: Nivel actual del campeón (int)
 * - poder: Puntos de poder/daño del campeón (int) 
 * - habilidad: Objeto de tipo Habilidades que representa la habilidad especial del campeón
 */

class campeon{
    private:
       
        string nombre;
        int nivel;
        int poder;
        Habilidades habilidad;
    
    public: 
        
        //Constructores
        campeon(string, int, int, Habilidades);
        
        void set_nombre(string);
        void set_nivel(int);
        void set_poder(int);
        void set_Habilidad(Habilidades);
        
        //Métodos
        string get_nombre();
        int get_nivel();
        int get_poder();
        Habilidades get_habilidad();
        
        void mostrarInfo();
        void mejorarNivel();

};


/*
 * Constructor que inicializa un campeón con valores específicos
 * nom - Nombre del campeón
 * niv - Nivel inicial
 * pod - Poder inicial
 * hab - Habilidad asignada
 */

//Creación del primer constructor 
campeon::campeon(string nom, int niv, int pod, Habilidades hab){
    nombre = nom;
    nivel = niv;
    poder = pod;
    habilidad = hab;
}

/*
 * Métodos set (setters) para modificar los atributos:
 */

// Modifica el nombre del campeón
void campeon::set_nombre(string nom){
    nombre = nom;
}

// Modifica el nivel del campeón
void campeon::set_nivel(int niv){
    nivel = niv;
}

void campeon::set_poder(int pod){
    poder = pod;
}

// Modifica la habilidad del campeón
void campeon::set_Habilidad(Habilidades hab){
    habilidad = hab;
}


/*
 * Métodos get (getters) para acceder a los atributos:
 */

// Retorna el nombre del campeón
string campeon::get_nombre(){
    return nombre;
}

// Retorna el nivel del campeón
int campeon::get_nivel(){
    return nivel;
}

// Retorna el poder del campeón
int campeon::get_poder(){
    return poder;
}

// Retorna la habilidad del campeón
Habilidades campeon::get_habilidad(){
    return habilidad;
}

/*
 * Muestra la información completa del campeón
 * Imprime nombre, nivel, poder y nombre de la habilidad
 */
void campeon::mostrarInfo(){
    cout << "Campeon Mid: " << nombre << ", Nivel: " << nivel << ", Poder: " << poder << ", Habilidad: " << habilidad.get_nombre();
}

/*
 * Incrementa el nivel del campeón en 1 y muestra un mensaje
 * indicando el nuevo nivel alcanzado
 */
void campeon::mejorarNivel(){
    nivel++;
    cout << nombre << " ha subido al nivel " << nivel << endl << endl;
}

#endif






