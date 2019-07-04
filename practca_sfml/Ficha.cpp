#include "Ficha.h"

Ficha::Ficha(char color, Nodo* posicion) : color(color), posicion(posicion) {}

void Ficha::setPoscicion(Nodo* NN) {
    posicion = NN;
}

Nodo* Ficha::getPosicion(){ return posicion;}

Nodo* Ficha::calcularRecorrido() {
    auto dado = new Dado();
    Nodo* punteroAuxiliar = nullptr;
    int mov = dado->lanzarDado();
    punteroAuxiliar = posicion->getSiguienteNodo();
    for(int i = 1; i < mov; i++){
        punteroAuxiliar = punteroAuxiliar->getSiguienteNodo();
    }
    /*if(punteroAuxiliar->getCasilla()->getDisponible()){
        Ficha::setPoscicion(punteroAuxiliar);
    }*/
    return punteroAuxiliar;
}

Ficha::~Ficha() {}
