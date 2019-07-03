//
// Created by bhn16 on 15/06/19.
//

/*#include "Casilla.h"
#include <iostream>
using namespace std;


Casilla::Casilla(float x, float y, char color): x(x), y(y), color(color) {disponible = true; }

bool Casilla::getDisponible() {
    return disponible;
}
void Casilla::mostrar() {
		cout << "Posicion: x:" << x << " y: " << y << endl;
	}

	CasillaCasa::CasillaCasa(float x, float y, char color) : Casilla(x, y, color) {}

	CasillaInicio::CasillaInicio(float x, float y, char color) : Casilla(x, y, color) {}

	CasillaRecorrido::CasillaRecorrido(float x, float y, char color) : Casilla(x, y, color) {}

	CasillaZonaSegura::CasillaZonaSegura(float x, float y, char color) : Casilla(x, y, color) {}

	CasillaDestinoFinal::CasillaDestinoFinal(float x, float y, char color) : Casilla(x, y, color) {}
*/
#include <vector>
#include <utility>
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
CasillaRecorrido::CasillaRecorrido(float x, float y, char color) : Casilla(x,y,color)
{
    this->disponible = true;
}
CasillaInicio::CasillaInicio(float x, float y, char color) : Casilla(x,y,color)
{
    this->color= color;
    this->disponible = true;
}
CasillaCasa::CasillaCasa(float x,float y, char color) : Casilla(x,y, color)
{
    this->color = color;
    this->disponible = false;
}
CasillaZonaSegura::CasillaZonaSegura(float x, float y, char color): Casilla(x,y,color)
{
    this->disponible = true;
    this->color = color;
}
CasillaDestinoFinal::CasillaDestinoFinal(float x, float y, char color):Casilla(x,y,color)
{
    this->disponible = true;
    this->color = color;
}