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
    ADC(string, int, int, int);

    // Setters
    void set_critico(int);

    // Getters
    int get_critico();
    
    // Método para mostrar información
    void mostrarInfoADC();

    // Método para mejorar el nivel
    void mejorarNivel();
};

ADC::ADC(string nom, int niv, int pod, int cri): campeon(nom, niv, pod){
    critico = cri;
}

void ADC::set_critico(int cri){
    critico = cri;
}

int ADC::get_critico(){
    return critico;
}

void ADC::mostrarInfoADC(){
    campeon::mostrarInfo();
    cout << ", Critico: " << get_critico() << endl;
}

void ADC::mejorarNivel(){
    campeon::mejorarNivel();
    critico += 5;
}


#endif
