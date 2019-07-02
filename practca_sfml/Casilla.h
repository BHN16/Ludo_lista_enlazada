//
// Created by bhn16 on 15/06/19.
//

#ifndef PRACTCA_SFML_CASILLA_H
#define PRACTCA_SFML_CASILLA_H
#include <utility>
#include <vector>
#include <string>
using namespace std;
class Casilla {
protected:
	pair<float,float> posicion_coordenadas;
	bool disponible;
public:
	Casilla();
	Casilla(float x, float y);
	pair<float,float> get_coord();
};

class CasillaCasa : public Casilla{
private:
	char color;
public:
	CasillaCasa(float x, float y, char color);
};

class CasillaRecorrido : public Casilla{
public:
	CasillaRecorrido(float x, float y);
};

class CasillaInicio : public Casilla{
private:
    char color;
public:
    CasillaInicio(float x, float y, char color);
};

class CasillaZonaSegura : public Casilla{
private:
    char color;
public:
    CasillaZonaSegura(float x, float y, char color);
};

class CasillaDestinoFinal : public Casilla{
private:
    char color;
public:
    CasillaDestinoFinal(float x, float y, char color);
};


#endif //PRACTCA_SFML_CASILLA_H
