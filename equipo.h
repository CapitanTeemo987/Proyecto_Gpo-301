#ifndef EQUIPO_H
#define EQUIPO_H

#include<iostream>
#include<vector>
#include<string>
#include "campeon.h"

class Equipo{
    private:
        std::string nombre; // Nombre del equipo
        std::vector<campeon*> campeones; // Vector de punteros para solo almacenar la memoria de los campeones
        const int CapacidadTeam = 3; // Capacidad máxima del equipo

    public:
        Equipo();
        Equipo(std::string);

        void set_nombre(std::string);
        std::string get_nombre();

        void AgregaCampeon(campeon*);
        void MostrarEquipo();
};


/*
 * Constructor por defecto
 */
Equipo::Equipo(){
    nombre = "";
}

/*
 * Constructor que inicializa el nombre del equipo
 */
Equipo::Equipo(std::string nom){
    nombre = nom;
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

/*
 * Método para agregar un campeón al equipo
 */
void Equipo::AgregaCampeon(campeon* integrante){
    if(campeones.size() < CapacidadTeam){ // Verifica si el equipo tiene espacio para agregar un campeón
        campeones.push_back(integrante);// Agrega el campeón al equipo
    }
    else{ // Si el equipo está lleno, muestra un mensaje
        std::cout << "El equipo está lleno";
    }
}

/*
 * Método para mostrar el equipo
 */
void Equipo::MostrarEquipo(){
    std::cout << "Equipo " << nombre << ":" << std::endl;   // Muestra el nombre del equipo
    for(int i = 0; i < campeones.size(); i++){
        std::cout << "integrante " << i + 1 << ": " << campeones[i]->get_nombre() << ", linea: " << campeones[i]->get_tipo() << std::endl; // Muestra el nombre de cada campeón en el equipo
    }
}

#endif

