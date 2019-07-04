#pragma once
#ifndef PRACTCA_SFML_JUEGO_H
#define PRACTCA_SFML_JUEGO_H
#include <SFML/Graphics.hpp>
#include "tablero.h"
#include <string>
//deaclarar como variable gloabal el tamaño de la pantalla dividido entre el numero de casillas que quiero
using namespace sf;
class Juego {
private:
RenderWindow* ventana1;
int fps;
//textura: imagen base . sprite: textura modificada
Texture* textura1;
Texture* textura2;
Texture* textura3;
Sprite* sprite1;
Sprite* sprite2;
Sprite* sprite3;
public:
    Juego();
    Juego(int resolucion_x,int resolucion_y,std::string nombre);
    void run();
    void Dibujar_ventana();
    void Game_loop();
    ~Juego();
};


#endif //PRACTCA_SFML_JUEGO_H
