#ifndef PRACTCA_SFML_FICHA_H
#define PRACTCA_SFML_FICHA_H
#include <SFML/Graphics.hpp>
#include "Nodo.h"
using namespace sf;
class Nodo;
class Ficha {
private:
    Texture* t;
    Sprite* s;
    char color;
    int recorrido;
    Nodo* posicion;
    Nodo* posInicial;
public:
    Ficha();
    Ficha(char c, std::string nombre_archivo, float scale);
    Sprite* get_sprite();
    Nodo* getPosicion();
    Nodo* getPosInicial();
    void setPosicion(Nodo *NN);
    void setPosicionC(Nodo *NN);
    char getColor();
    void setColor(char c);
};


#endif //PRACTCA_SFML_FICHA_H
