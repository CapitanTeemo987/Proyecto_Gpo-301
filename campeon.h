#ifndef campeon_h
#define campeon_h

#include<iostream>
#include<string>
using namespace std; 

class campeon{
    
    private:
       
        string nombre;
        int nivel;
        int poder;
    
    public: 
        
        //Constructores
        campeon(string, int, int);
        
        void set_nombre(string);
        void set_nivel(int);
        void set_poder(int);
        
        //Métodos
        string get_nombre();
        int get_nivel();
        int get_poder();
        
        void mostrarInfo();
        void mejorarNivel();

};


//Creación del primer constructor 
campeon::campeon(string nom, int niv, int pod){
    nombre = nom;
    nivel = niv;
    poder = pod;
}

//Creación del segundo constructor(setters)
void campeon::set_nombre(string nom){
    nombre = nom;
}

void campeon::set_nivel(int niv){
    nivel = niv;
}

void campeon::set_poder(int pod){
    poder = pod;
}


/*Uso de getters para poder
 acceder a los atributos */
string campeon::get_nombre(){
    return nombre;
}

int campeon::get_nivel(){
    return nivel;
}

int campeon::get_poder(){
    return poder;
}

void campeon::mostrarInfo(){
    cout << "Campeon Mid: " << nombre << ", Nivel: " << nivel << ", Poder: " << poder;
}

void campeon::mejorarNivel(){
    nivel++;
    cout << nombre << " ha subido al nivel " << nivel << endl << endl;
}

#endif
