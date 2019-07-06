#include "Ficha.h"
#include "Nodo.h"
#include <SFML/Graphics.hpp>
using namespace sf;
Ficha::Ficha(){}
Ficha::Ficha(char c, std::string nombre_archivo, float scale)
{
    this->color = c;
    this->recorrido = 52;//valor que se reduce conforme se avanza en el tablero
    t = new Texture;
    t->loadFromFile(nombre_archivo);
    s = new Sprite(*t);
    //s->setTexture(*t);
    s->setScale(Vector2f(scale,scale));
}

Nodo* Ficha::getPosicion()
{
    return posicion;
}

Sprite* Ficha::get_sprite()
{
    s->setPosition(getPosicion()->getCasilla()->get_coord().first,getPosicion()->getCasilla()->get_coord().second);
    return s;
}

void Ficha::setPosicion(Nodo *NN) {
    posicion = NN;
}

void Ficha::setPosicionC(Nodo *NN) {
    posicion = NN;
    posInicial = NN;
}

char Ficha::getColor(){
    return color;
}

Nodo* Ficha::getPosInicial() {
    return posInicial;
}

void Ficha::setColor(char c) {
    color=c;
}