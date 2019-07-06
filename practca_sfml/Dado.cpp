#include "Dado.h"
#include <SFML/Graphics.hpp>
using namespace sf;
Dado::Dado()
{
	d1 = new Texture[6];
	dado = new Sprite[6];
	d1[0].loadFromFile("1.png");
    d1[1].loadFromFile("2.png");
    d1[2].loadFromFile("3.png");
    d1[3].loadFromFile("4.png");
    d1[4].loadFromFile("5.png");
    d1[5].loadFromFile("6.png");
	for(int i = 0; i < 6; i++)
	{
	    dado[i].setTexture(d1[i]);
		dado[i].setScale(Vector2f(0.3,0.3));
		dado[i].setPosition(46.6*7,46.6*7);
	}
	this->valor = 5;
}
int Dado::get_valor()
{
    int valor_dado = rand()%6+1;
	this->valor = valor_dado;
	return valor;
}
Sprite* Dado::get_sprite()
{
    return &(dado[valor-1]);
}
