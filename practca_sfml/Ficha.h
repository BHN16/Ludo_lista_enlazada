#ifndef PRACTCA_SFML_FICHA_H
#define PRACTCA_SFML_FICHA_H

#include "Nodo.h"
#include "Casilla.h"
#include "Dado.h"
class Ficha{
private:
    char color;
    Nodo<Casilla>* posicion;
public:
    Ficha(char color, Nodo<Casilla> *posicion);
    void setPoscicion(Nodo<Casilla>* NN);
    Nodo<Casilla>* getPosicion();
    Nodo<Casilla>* calcularRecorrido();
};

#endif //PRACTCA_SFML_FICHA_H
