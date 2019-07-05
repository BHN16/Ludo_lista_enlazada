#ifndef PRACTCA_SFML_FICHA_H
#define PRACTCA_SFML_FICHA_H

#include "Nodo.h"

class Nodo;

class Ficha{
private:
    char color;
    Nodo* posicion;
    Nodo* posInicial;
public:
    Ficha();
    Ficha(char color, Nodo* posInicial);
    void setPosicion(Nodo *NN);
    void setPosicionC(Nodo *NN);
    Nodo* getPosicion();
    char getColor();
    Nodo* getPosInicial();
    ~Ficha();
};

#endif //PRACTCA_SFML_FICHA_H
