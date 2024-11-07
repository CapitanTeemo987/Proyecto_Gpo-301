#include <iostream>
#include <string>
using namespace std;

// Clase Mid
class Mid {
private:
    string nombre;
    int nivel;
    int poder;
    int mana; // atributo especial

public:
    // Constructor
    Mid(string, int, int , int);

    // Método para mostrar información
    void mostrarInfo();

    // Método para mejorar el nivel
    void mejorarNivel();
};

Mid::Mid(string n, int niv, int p, int m){
    nombre = n;
    nivel = niv;
    poder = p;
    mana = m;
}

void Mid::mostrarInfo(){
    cout << "Campeon Mid: " << nombre << ", Nivel: " << nivel << ", Poder: " << poder << ", Mana: " << mana << endl << endl;
}

void Mid::mejorarNivel(){
    nivel++;
    cout << nombre << " ha subido al nivel " << nivel << endl << endl;
}



// Clase Top
class Top {
private:
    string nombre;
    int nivel;
    int poder;
    int resistencia; // atributo especial

public:
    // Constructor
    Top(string, int, int, int);

    // Método para mostrar información
    void mostrarInfo();
    
    // Método para mejorar el nivel
    void mejorarNivel();
};

Top::Top(string n, int niv, int p, int r){
    nombre = n;
    nivel = niv;
    poder = p;
    resistencia = r;
}

void Top::mostrarInfo(){
    cout << "Campeon Top: " << nombre << ", Nivel: " << nivel << ", Poder: " << poder << ", Resistencia: " << resistencia << endl << endl;
}

void Top::mejorarNivel(){
    nivel++;
    cout << nombre << " ha subido al nivel " << nivel << endl << endl;
}



// Clase ADC
class ADC {
private:
    string nombre;
    int nivel;
    int poder;
    int critico; // atributo especial

public:
    // Constructor
    ADC(string, int, int, int);

    // Método para mostrar información
    void mostrarInfo();
    // Método para mejorar el nivel
    void mejorarNivel();
};

ADC::ADC(string n, int niv, int p, int c){
    nombre = n;
    nivel = niv;
    poder = p;
    critico = c;
}

void ADC::mostrarInfo(){
    cout << "Campeon ADC: " << nombre << ", Nivel: " << nivel << ", Poder: " << poder << ", Critico: " << critico << endl << endl;
}

void ADC::mejorarNivel(){
    nivel++;
    cout << nombre << " ha subido al nivel " << nivel << endl << endl;
}

