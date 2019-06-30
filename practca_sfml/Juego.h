//
// Created by bhn16 on 14/06/19.
//

#ifndef PRACTCA_SFML_JUEGO_H
#define PRACTCA_SFML_JUEGO_H
#include <SFML/Graphics.hpp>
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
    Juego(int resolucion_x,int resolucion_y,std::string nombre);
    void Dibujar_ventana();
    void Game_loop();
};


#endif //PRACTCA_SFML_JUEGO_H
