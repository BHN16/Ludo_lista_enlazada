#ifndef PRACTCA_SFML_TABLERO_H
#define PRACTCA_SFML_TABLERO_H

#include "Casilla.h"
#include "Nodo.h"
#include "Ficha.h"

class Tablero{
public:
    Tablero();
    void construirTablero(Ficha* FV1, Ficha* FV2, Ficha* FV3, Ficha* FV4, Ficha* FR1, Ficha* FR2, Ficha* FR3, Ficha* FR4, Ficha* FA1, Ficha* FA2, Ficha* FA3, Ficha* FA4, Ficha* FZ1, Ficha* FZ2, Ficha* FZ3, Ficha* FZ4);
    ~Tablero();
};

#endif //PRACTCA_SFML_TABLERO_H
