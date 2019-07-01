//
// Created by bhn16 on 15/06/19.
//

#include "Casilla.h"
#include <iostream>
using namespace std;

class Casilla {
protected:
	int x;
	int y;
	bool disponible;
	char color;
public:
	Casilla(int x, int y, char color): x(x), y(y), color(color) { disponible = true; }
	virtual void mostrar() {
		cout << "Posicion: x:" << x << " y: " << y << endl;
	}
};

class CasillaCasa : public Casilla
{
public:
	CasillaCasa(int x, int y, int color) : Casilla(x, y) {}
	void mostrar() {
		cout << "Posicion: x:" << x << " y: " << y << endl;
	}
};

class CasillaInicio : public Casilla
{
public:
	CasillaInicio(int x, int y, char color) : Casilla(x, y, color) {}
	void mostrar()
	{
		cout << "Posicion: x:" << x << " y: " << y << endl;
	}
};

class CasillaRecorrido : public Casilla
{
public:
	CasillaRecorrido(int x, int y, char color) : Casilla(x, y, color) {}
	void mostrar()
	{
		cout << "Posicion: x:" << x << " y: " << y << endl;
	}
};

class CasillaZonaSegura : public Casilla
{
public:
	CasillaZonaSegura(int x, int y, char color) : Casilla(x, y, color) {}
	void mostrar()
	{
		cout << "Posicion: x:" << x << " y: " << y << endl;
	}
};

class CasillaDestinoFinal : public Casilla {
public:
	CasillaDestinoFinal(int x, int y, char color) : Casilla(x, y, color) {}
	void mostrar()
	{
		cout << "Posicion: x:" << x << " y: " << y << endl;
	}
};
