#ifndef PRACTCA_SFML_FICHA_H
#define PRACTCA_SFML_FICHA_H

#include "Nodo.h"
#include "Dado.h"

class Ficha{
private:
    char color;
    Nodo* posicion;
public:
    Ficha();
    Ficha(char color, Nodo* posicion);
    void setPoscicion(Nodo* NN);
    Nodo* getPosicion();
    Nodo* calcularRecorrido();
    ~Ficha();
};

#endif //PRACTCA_SFML_FICHA_H
