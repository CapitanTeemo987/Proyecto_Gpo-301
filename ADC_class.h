#ifndef ADC_class_h
#define ADC_class_h

#include <iostream>
#include <string>
#include "campeon.h"
using namespace std;

class ADC : public campeon{
private:
    int critico; // atributo especial

public:
    // Constructor
    ADC(string, int, int, int, Habilidades);

    // Setters
    void set_critico(int);

    // Getters
    int get_critico();
    
    // Método para mostrar información
    void mostrarInfoADC();

    // Método para mejorar el nivel
    void mejorarNivel();
};


/*
 * Constructor que inicializa un campeón con valores específicos
 * nom - Nombre del campeón
 * niv - Nivel inicial
 * pod - Poder inicial
 * cri - Critico inicial
 * hab - Habilidad asignada
 */
ADC::ADC(string nom, int niv, int pod, int cri, Habilidades hab): campeon(nom, niv, pod, hab){
    critico = cri;
}

// Setter para modificar el valor de critico
void ADC::set_critico(int cri){
    critico = cri;
}

// Getter para obtener el valor de critico
int ADC::get_critico(){
    return critico;
}

// Método para mostrar información del campeón
void ADC::mostrarInfoADC(){
    campeon::mostrarInfo();
    cout << ", Critico: " << get_critico() << endl;
}

// Método para mejorar el nivel del campeón
void ADC::mejorarNivel(){
    campeon::mejorarNivel();
    critico += 5;
}


#endif
