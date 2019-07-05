#include "Ficha.h"

Ficha::Ficha() {}

Ficha::Ficha(char color, Nodo* posicion) : color(color), posInicial(posicion) { Ficha::posicion = Ficha::posInicial;}

void Ficha::setPosicion(Nodo *NN) {
    posicion = NN;
}

void Ficha::setPosicionC(Nodo *NN) {
    posicion = NN;
    posInicial = NN;
}

Nodo* Ficha::getPosInicial() {
    return posInicial;
}

Nodo* Ficha::getPosicion(){ return posicion;}

char Ficha::getColor() { return color;}

Ficha::~Ficha() {}
