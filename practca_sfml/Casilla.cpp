//
// Created by bhn16 on 15/06/19.
//
#include <vector>
#include <utility>
#include "Casilla.h"
using namespace std;
Casilla::Casilla(){};
Casilla::Casilla(float x, float y)
{
    posicion_coordenadas = make_pair(x,y);
}
pair<float,float> Casilla::get_coord()
{
    return posicion_coordenadas;
}
CasillaRecorrido::CasillaRecorrido(float x, float y) : Casilla(x,y)
{
    this->disponible = true;
}
CasillaInicio::CasillaInicio(float x, float y, char color) : Casilla(x,y)
{
    this->color= color;
    this->disponible = true;
}
CasillaCasa::CasillaCasa(float x,float y, char color) : Casilla(x,y)
{
    this->color = color;
    this->disponible = false;
}
CasillaZonaSegura::CasillaZonaSegura(float x, float y, char color): Casilla(x,y)
{
    this->disponible = true;
    this->color = color;
}
CasillaDestinoFinal::CasillaDestinoFinal(float x, float y, char color):Casilla(x,y)
{
    this->disponible = true;
    this->color = color;
}
