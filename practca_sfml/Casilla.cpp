#include "Casilla.h"
using namespace std;
Casilla::Casilla(){}
Casilla::Casilla(float x, float y, char color)
{
    disponible = true;
    posicion_coordenadas = make_pair(x,y);
}
pair<float,float> Casilla::get_coord()
{
    return posicion_coordenadas;
}
char Casilla::getColor() { return color;}
bool Casilla::getDisponible(){return disponible;}
void Casilla::disponibleSwitch(){disponible = !disponible;}
Casilla::~Casilla(){}
CasillaRecorrido::CasillaRecorrido(float x, float y, char color) : Casilla(x,y,color)
{
    this->disponible = true;
}
CasillaRecorrido::~CasillaRecorrido(){}
CasillaInicio::CasillaInicio(float x, float y, char color) : Casilla(x,y,color)
{
    this->color= color;
    this->disponible = true;
}
CasillaInicio::~CasillaInicio(){}
CasillaCasa::CasillaCasa(float x,float y, char color) : Casilla(x,y, color)
{
    this->color = color;
    this->disponible = false;
}
CasillaCasa::~CasillaCasa(){}
CasillaZonaSegura::CasillaZonaSegura(float x, float y, char color): Casilla(x,y,color)
{
    this->disponible = true;
    this->color = color;
}
CasillaZonaSegura::~CasillaZonaSegura() {}
CasillaDestinoFinal::CasillaDestinoFinal(float x, float y, char color):Casilla(x,y,color)
{
    this->disponible = true;
    this->color = color;
}
CasillaDestinoFinal::~CasillaDestinoFinal() {}