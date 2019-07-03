#include "Ficha.h"

Ficha::Ficha(char color, Nodo<Casilla>* posicion) : color(color), posicion(posicion) {}

void Ficha::setPoscicion(Nodo<Casilla>* NN) {
    posicion = NN;
}

Nodo<Casilla>* Ficha::getPosicion(){ return posicion;}

Nodo<Casilla>* Ficha::calcularRecorrido() {
    posicion->setSO(nullptr);
    auto dado = new Dado();
    Nodo<Casilla>* punteroAuxiliar = nullptr;
    int mov = dado->lanzarDado();
    punteroAuxiliar = posicion->Nodo::siguienteOrdinario;
    for(int i = 1; i < mov; i++){
        punteroAuxiliar = punteroAuxiliar->Nodo::siguienteOrdinario;
    }
    /*if(punteroAuxiliar->getCasilla()->getDisponible()){
        Ficha::setPoscicion(punteroAuxiliar);
    }*/
    return punteroAuxiliar;
}
