#ifndef PRACTCA_SFML_NODO_H
#define PRACTCA_SFML_NODO_H

#include <iostream>
#include "Casilla.h"
#include "Ficha.h"
#include <functional>

class Ficha;

class Nodo{
private:
    Casilla* casilla;
    Nodo* siguienteOrdinario;
    function<bool(char)> condicion;
    Ficha* f;
public:
    Nodo();
    Nodo(Nodo* next, Casilla* task);
    void setSO(Nodo* SO);
    virtual Nodo* getSiguienteNodo(char c);
    Casilla* getCasilla();
    void setF(Ficha* F);
    Ficha* getF();
    void setSE(Nodo* SO);
    Nodo* getSE();
    ~Nodo();
};


class NodoE : public Nodo {
private:
    NodoE* siguienteExtra;
    function<bool(char)> condicion;
public:
    NodoE(Nodo* next, Casilla* task, NodoE* SE, function<bool(char)> condition);
    void setSE(NodoE* NSE);
    Nodo* getSiguienteNodo(char c) override;
    ~NodoE();
};
#endif //PRACTCA_SFML_NODO_H
