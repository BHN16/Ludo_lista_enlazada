//
// Created by bhn16 on 15/06/19.
//

#ifndef PRACTCA_SFML_TABLERO_H
#define PRACTCA_SFML_TABLERO_H

template <class T>
class Nodo {
private:
    T* Casilla;

public:
    Nodo* siguienteOrdinario;
    Nodo(Nodo<T>* next, T* task);
    void setSO(Nodo<T>* SO);
    Nodo<T>* getSO();
    T* getCasilla();
    void setSE(Nodo<T>* SO);
    Nodo<T>* getSE();
};

template<class T>
class NodoE : public Nodo<T> {
private:

public:
    NodoE* siguienteExtra;
    NodoE(Nodo<T>* next, T* task, NodoE* SE);
    void setSE(NodoE* NSE);
    Nodo<T>* getSE();
};

#endif //PRACTCA_SFML_TABLERO_H
