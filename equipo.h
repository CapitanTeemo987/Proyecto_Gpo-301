#ifndef EQUIPO_H
#define EQUIPO_H

#include<iostream>
#include<vector>
#include<string>
#include "campeon.h"

class Equipo{
    private:
        std::string nombre; // Nombre del equipo
        campeon* campeones[3]; // Arreglo de punteros para almacenar los campeones
        const int CapacidadTeam = 3; // Capacidad máxima del equipo


    public:
        Equipo();
        Equipo(std::string);

        void set_nombre(std::string);
        std::string get_nombre();

        void AgregaCampeon(campeon*);
        void MostrarEquipo();
        void EliminarCampeon(campeon*);
};


/*
 * Constructor por defecto
 */
Equipo::Equipo(){
    nombre = "";
    for(int i = 0; i < CapacidadTeam; i++){ // Inicializa el arreglo de punteros a nullptr para evitar errores de memoria
        campeones[i] = nullptr;
    }
}

/*
 * Constructor que inicializa el nombre del equipo
 */
Equipo::Equipo(std::string nom){
    nombre = nom;
    for(int i = 0; i < CapacidadTeam; i++){ // Inicializa el arreglo de punteros a nullptr para evitar errores de memoria
        campeones[i] = nullptr;
    }
}

/*
 * Setter para modificar el nombre del equipo
 */
void Equipo::set_nombre(std::string nom){
    nombre = nom;
}

/*
 * Getter para obtener el nombre del equipo
 */
std::string Equipo::get_nombre(){
    return nombre;
}


void Equipo::AgregaCampeon(campeon* campeon){
    for(int i = 0; i < CapacidadTeam; i++){
        if(campeones[i] == nullptr){ // Verifica si el espacio está vacío
            campeones[i] = campeon; // Agrega el campeón al espacio vacío
            break;
        }
    }
}

void Equipo::MostrarEquipo(){
    std::cout << "Equipo " << nombre << ":" << std::endl;
    for(int i = 0; i < CapacidadTeam; i++){
        if(campeones[i] != nullptr){ // Verifica si el espacio está ocupado
            std::cout << "integrante " << i + 1 << ": " << campeones[i]->get_nombre() << ", linea: " << campeones[i]->get_tipo() << std::endl;
        } 
        else{ // Si el espacio está vacío, muestra "vacio"
            std::cout << "integrante " << i + 1 << ": " << "vacio" << std::endl;
        }
    }
}

void Equipo::EliminarCampeon(campeon* campeon){ // Elimina un campeón del equipo
    for(int i = 0; i < CapacidadTeam; i++){ //ciclo para recorrer el arreglo de punteros
        if(campeones[i] == campeon){ // Verifica si el puntero actual es igual al puntero pasado como argumento
            campeones[i] = nullptr; // Asigna nullptr al puntero actual para eliminar el campeón
            break;
        }
    }
}
#endif

