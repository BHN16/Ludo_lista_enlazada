//
// Created by bhn16 on 15/06/19.
//

#ifndef PRACTCA_SFML_CASILLA_H
#define PRACTCA_SFML_CASILLA_H


/*class Casilla {
protected:
    int x;
    int y;
    bool disponible;
    char color;
public:
    Casilla(int x, int y, char color);
    bool getDisponible();
    void mostrar();
};

class CasillaCasa : public Casilla{
public:
    CasillaCasa(int x, int y, int color);
};

class CasillaInicio : public Casilla{
public:
    CasillaInicio(int x, int y, char color);
};

class CasillaRecorrido : public Casilla{
public:
    CasillaRecorrido(int x, int y, char color);
};

class CasillaZonaSegura : public Casilla{
public:
    CasillaZonaSegura(int x, int y, char color);
};

class CasillaDestinoFinal : public Casilla {
public:
    CasillaDestinoFinal(int x, int y, char color);
};*/

#include <utility>
#include <vector>
#include <string>
using namespace std;
class Casilla {
protected:
    char color;
    pair<float,float> posicion_coordenadas;
	bool disponible;
public:
	Casilla();
	Casilla(float x, float y, char color);
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
	CasillaRecorrido(float x, float y, char color);
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
