#ifndef habilidades_h
#define habilidades_h

#include<iostream>
#include<string>

class Habilidades{
    private:
        std::string nombre;
        int costo_mana;
        int daño;

    public:
        Habilidades();
        Habilidades(std::string, int, int);

        void set_nombre(std::string);
        void set_daño(int);
        void set_costo_mana(int);

        std::string get_nombre();
        int get_costo_mana();
        int get_daño();

};

/*
 * Constructor por defecto
 */
Habilidades::Habilidades(){
    nombre = "No registrada";
    costo_mana = 0;
    daño = 0;
}

/*
 * Constructor que inicializa los atributos de la habilidad
 */
Habilidades::Habilidades(std::string nom, int man, int dan){
    nombre = nom;
    costo_mana = man;
    daño = dan;
}

/*
 * Setter para modificar el nombre de la habilidad
 */
void Habilidades::set_nombre(std::string nom){
    nombre = nom;
}

/*
 * Setter para modificar el costo de mana de la habilidad
 */
void Habilidades::set_costo_mana(int man){
    costo_mana = man;
}

/*
 * Setter para modificar el daño de la habilidad
 */
void Habilidades::set_daño(int dan){
    daño = dan;
}

/*
 * Getter para obtener el nombre de la habilidad
 */
std::string Habilidades::get_nombre(){
    return nombre;
}

/*
 * Getter para obtener el costo de mana de la habilidad
 */
int Habilidades::get_costo_mana(){
    return costo_mana;
}

/*
 * Getter para obtener el daño de la habilidad
 */
int Habilidades::get_daño(){
    return daño;
}

#endif
