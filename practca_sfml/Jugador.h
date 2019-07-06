#ifndef PRACTCA_SFML_JUGADOR_H
#define PRACTCA_SFML_JUGADOR_H
#include "Ficha.h"
#include <vector>
using namespace sf;
class Jugador {
private:
    Ficha** f;
    int fichas_ganadoras;
    char color;
    int turnos;
public:
    Jugador(char color, std::string nombre_imagen, float scale);
    int get_fichas_ganadoras();
    Ficha** get_fichas();
    int get_turnos();
    void aumentar_turnos();
    void reducir_turnos();
    void set_turnos();
};


#endif //PRACTCA_SFML_JUGADOR_H
