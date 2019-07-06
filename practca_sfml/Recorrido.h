#ifndef PRACTCA_SFML_RECORRIDO_H
#define PRACTCA_SFML_RECORRIDO_H

#include "Ficha.h"

class Recorrido{
private:
    bool retroceso;
public:
    Recorrido();
    Nodo* calcularRecorrido(Ficha* ficha, int mov);
    void mover(Ficha* ficha, int mov);
    ~Recorrido();
};

#endif //PRACTCA_SFML_RECORRIDO_H
