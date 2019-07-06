#ifndef PRACTCA_SFML_JUEGO_H
#define PRACTCA_SFML_JUEGO_H
#include <SFML/Graphics.hpp>
#include "Tablero.h"
#include "Dado.h"
#include "Jugador.h"
#include "Recorrido.h"
#include <string>
#include <vector>
//declarar como variable gloabal el tamaño de la pantalla dividido entre el numero de casillas que quiero
using namespace sf;
class Juego {
private:
    RenderWindow* ventana1;
    Tablero* tablero;
    int fps;
    Dado* dado;
    std::vector<Jugador>* j;
    bool GANAR;
//textura: imagen base . sprite: textura modificada
public:
    Juego(std::string n, int resx, int resy);
    void Dibujar_ventana();
    void Jugar();
    void Ganar();
    void Game_loop();
    void update();
    ~Juego();
};


#endif //PRACTCA_SFML_JUEGO_H
