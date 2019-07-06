#ifndef PRACTCA_SFML_TABLERO_H
#define PRACTCA_SFML_TABLERO_H
#include <SFML/Graphics.hpp>
#include "Ficha.h"
#include "Jugador.h"
using namespace sf;
class Tablero {
private:
    int board[15][15];
    std::string name;
    Sprite* tablero_i;
    Texture* tablero;
public:
    Tablero(std::string name, int nx, int ny);
    Sprite* get_sprite();
    void construirTablero(std::vector<Jugador>* j);
};


#endif //PRACTCA_SFML_TABLERO_H
