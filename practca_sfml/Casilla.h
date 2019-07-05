#ifndef PRACTCA_SFML_CASILLA_H
#define PRACTCA_SFML_CASILLA_H

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
    char getColor();
    bool getDisponible();
    void disponibleSwitch();
	~Casilla();
};

class CasillaCasa : public Casilla{
private:
public:
	CasillaCasa(float x, float y, char color);
	~CasillaCasa();
};

class CasillaRecorrido : public Casilla{
public:
	CasillaRecorrido(float x, float y, char color);
	~CasillaRecorrido();
};

class CasillaInicio : public Casilla{
private:
    char color;
public:
    CasillaInicio(float x, float y, char color);
    ~CasillaInicio();
};

class CasillaZonaSegura : public Casilla{
private:
    char color;
public:
    CasillaZonaSegura(float x, float y, char color);
    ~CasillaZonaSegura();
};

class CasillaDestinoFinal : public Casilla{
private:
    char color;
public:
    CasillaDestinoFinal(float x, float y, char color);
    ~CasillaDestinoFinal();
};


#endif //PRACTCA_SFML_CASILLA_H
