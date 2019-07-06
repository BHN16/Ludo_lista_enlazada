#include <string>
#include <SFML/Graphics.hpp>
#include "Juego.h"
#include "Jugador.h"
#include <vector>
using namespace sf;
Juego::Juego(std::string n, int resx, int resy)
{
    ventana1 = new RenderWindow(VideoMode(resx,resy),n);
    this->fps=60;
    ventana1->setFramerateLimit(fps);
    tablero = new Tablero("Tablero.png",resx,resy);
    dado = new Dado();
    j = new std::vector<Jugador>;
    j->push_back(Jugador('A',"amarillo.png", 0.03));
    j->push_back(Jugador('Z',"azul.png", 0.15));
    j->push_back(Jugador('R',"rojo.png", 0.15));
    j->push_back(Jugador('V',"verde.png", 0.05));
    GANAR = false;
    tablero->construirTablero(j);
}

void Juego::Jugar()
{
    Game_loop();
}

void Juego::Game_loop()
{
    Event e;
    while(ventana1->isOpen())
    {
        while(ventana1->pollEvent(e))
        {
            if(e.type == Event::Closed)
            {
                ventana1->close();
            }
        }
        update();
        Dibujar_ventana();
    }
}

void Juego::Dibujar_ventana()
{
    ventana1->clear();
    ventana1->draw(*(tablero->get_sprite()));
    ventana1->draw(*(dado->get_sprite()));
    for(auto it = j->begin(); it != j->end(); ++it)
    {
        for(int i = 0; i < 4; i++)
        {
            ventana1->draw(*(it->get_fichas()[i]->get_sprite()));
        }
    }
    ventana1->display();
}
void Juego::update()
{
    int valor_de_dado = 0;
    for(auto it = j->begin(); it != j->end(); ++it)
    {
        if(Mouse::isButtonPressed(Mouse::Left))
        {
            Vector2f mouse = ventana1->mapPixelToCoords(Mouse::getPosition(*ventana1));
            if(mouse == dado->get_sprite()->getPosition())
            {
                while(it->get_turnos())
                valor_de_dado = dado->get_valor();
                if(valor_de_dado == 6)
                {
                    it->aumentar_turnos();
                    //it->sacar_ficha_de_casa();
                    //it->mover_ficha(valor_de_dado)
                    it->reducir_turnos();
                }
                if(valor_de_dado != 6)
                {
                    //it->mover_ficha(valor_de_dado)
                    it->reducir_turnos();
                }
            }
        }
    }
}
void Juego::Ganar()
{
    for(auto it = j->begin(); it != j->end(); ++it)
    {
        if(it->get_fichas_ganadoras() == 4)
        {
            this->GANAR = true;
        }
    }
}

Juego::~Juego()
{
    delete ventana1;
    delete dado;
    delete tablero;
}
