#include "Jugador.h"
#include "Ficha.h"
Jugador::Jugador(char color, std::string nombre_imagen, float scale)
{
    this->color = color;
    f = new Ficha*[4];
    for(int i = 0; i < 4; i++)
    {
        f[i] = new Ficha(color,nombre_imagen, scale);
    }
    fichas_ganadoras = 0;
    this->turnos = 1;
}

void Jugador::aumentar_turnos()
{
    turnos++;
}

void Jugador::reducir_turnos()
{
    turnos--;
}

int Jugador::get_turnos()
{
    return turnos;
}

void Jugador::set_turnos()
{
    this->turnos = 1;
}

int Jugador::get_fichas_ganadoras()
{
    return fichas_ganadoras;
}

Ficha** Jugador::get_fichas()
{
    return f;
}


