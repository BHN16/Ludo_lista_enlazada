#include <iostream>
#include <SFML/Graphics.hpp>
#include "Casilla.h"
#include "Tablero.h"
#include "Nodo.h"
using namespace sf;

Tablero::Tablero(std::string n, int nx, int ny)
{
    tablero = new Texture;
    tablero->loadFromFile(n);
    tablero_i = new Sprite(*tablero);
    tablero_i->setScale(((float)nx/tablero_i->getTexture()->getSize().x),((float)ny/tablero_i->getTexture()->getSize().y));
}

Sprite* Tablero::get_sprite()
{
    return tablero_i;
}

void Tablero::construirTablero(std::vector<Jugador>* j) {
    // Amarillo = A, Rojo = R, Verde = V, Azul = Z, Nulo = N
    // Zona Segura = H, Inicio = I, Casa = C
    // Nodos extra condiciones:
    // XH1 (char x == Nodo->getCasilla->getColor)
    // XHn (bool x)
    // Amarillo
    auto A12 = new Nodo(nullptr, new CasillaRecorrido(372.8, 233));
    auto A11 = new Nodo(A12, new CasillaRecorrido(372.8, 186.4));
    auto A10 = new Nodo(A11, new CasillaRecorrido(372.8, 139.8));
    auto A9 = new Nodo(A10, new CasillaRecorrido(372.8, 93.2));
    auto AF = new NodoE(nullptr, new CasillaDestinoFinal(326.2, 279.6, 'A'), nullptr, [](char a){return a=='B';});
    auto AH6 = new NodoE(AF, new CasillaZonaSegura(326.2, 233, 'A'), nullptr, [](char a){return a=='B';});
    auto AH5 = new NodoE(AH6, new CasillaZonaSegura(326.2, 186.4, 'A'), nullptr, [](char a){return a=='B';});
    auto AH4 = new NodoE(AH5, new CasillaZonaSegura(326.2, 139.8, 'A'), nullptr, [](char a){return a=='B';});
    auto AH3 = new NodoE(AH4, new CasillaZonaSegura(326.2, 93.2, 'A'), nullptr, [](char a){return a=='B';});
    auto AH2 = new NodoE(AH3, new CasillaZonaSegura(326.2, 46.6, 'A'), nullptr, [](char a){return a=='B';});
    auto AH1 = new NodoE(A9, new CasillaZonaSegura(372.8, 46.6, 'A'), AH2, [](char a){return a == 'A';});
    AF->setSE(AH6);
    AH6->setSE(AH5);
    AH5->setSE(AH4);
    AH4->setSE(AH3);
    AH3->setSE(AH2);
    AH2->setSE(AH1);
    auto AI = new Nodo(A9, new CasillaInicio(419.4, 93.3, 'A'));
    auto AC1 = new Nodo(AI, new CasillaCasa(466, 46.6, 'A'));
    auto AC2 = new Nodo(AI, new CasillaCasa(605.8, 46.6, 'A'));
    auto AC3 = new Nodo(AI, new CasillaCasa(466, 186.4, 'A'));
    auto AC4 = new Nodo(AI, new CasillaCasa(605.8, 186.4, 'A'));
    auto A8 = new Nodo(AH1, new CasillaRecorrido(372.8, 0));
    auto A7 = new Nodo(A8, new CasillaRecorrido(326.2, 0));
    auto A6 = new Nodo(A7, new CasillaRecorrido(279.6, 0));
    auto A5 = new Nodo(A6, new CasillaRecorrido(279.6, 46.6));
    auto A4 = new Nodo(A5, new CasillaRecorrido(279.6, 93.2));
    auto A3 = new Nodo(A4, new CasillaRecorrido(279.6, 139.8));
    auto A2 = new Nodo(A3, new CasillaRecorrido(279.6, 186.4));
    auto A1 = new Nodo(A2, new CasillaRecorrido(279.6, 233));
    // Verde
    auto V12 = new Nodo(A1, new CasillaRecorrido(233, 279.6));
    auto V11 = new Nodo(V12, new CasillaRecorrido(186.4, 279.6));
    auto V10 = new Nodo(V11, new CasillaRecorrido(139.8, 279.6));
    auto V9 = new Nodo(V10, new CasillaRecorrido(93.2, 279.6));
    auto VF = new NodoE(nullptr, new CasillaDestinoFinal(279.6, 326.2, 'V'), nullptr, [](char a){return a=='B';});
    auto VH6 = new NodoE(nullptr, new CasillaZonaSegura(233, 326.2, 'V'), nullptr, [](char a){return a=='B';});
    auto VH5 = new NodoE(VH6, new CasillaZonaSegura(186.4, 326.2, 'V'), nullptr, [](char a){return a=='B';});
    auto VH4 = new NodoE(VH5, new CasillaZonaSegura(139.8, 326.2, 'V'), nullptr, [](char a){return a=='B';});
    auto VH3 = new NodoE(VH4, new CasillaZonaSegura(93.2, 326.2, 'V'), nullptr, [](char a){return a=='B';});
    auto VH2 = new NodoE(VH3, new CasillaZonaSegura(46.6, 326.2, 'V'), nullptr, [](char a){return a=='B';});
    auto VH1 = new NodoE(V9, new CasillaZonaSegura(46.6, 279.6, 'V'), VH2, [](char a){return a == 'V';});
    VF->setSE(AH6);
    VH6->setSE(VH5);
    VH5->setSE(VH4);
    VH4->setSE(VH3);
    VH3->setSE(VH2);
    VH2->setSE(VH1);
    auto VI = new Nodo(V9, new CasillaInicio(93.2, 233, 'V'));
    auto VC1 = new Nodo(VI, new CasillaCasa(46.6, 46.6, 'V'));
    auto VC2 = new Nodo(VI, new CasillaCasa(186.4, 46.6, 'V'));
    auto VC3 = new Nodo(VI, new CasillaCasa(46.6, 186.4, 'V'));
    auto VC4 = new Nodo(VI, new CasillaCasa(186.4, 186.4, 'V'));
    auto V8 = new Nodo(VH1, new CasillaRecorrido(0, 279.6));
    auto V7 = new Nodo(V8, new CasillaRecorrido(0, 326.2));
    auto V6 = new Nodo(V7, new CasillaRecorrido(0, 372.8));
    auto V5 = new Nodo(V6, new CasillaRecorrido(46.6, 372.8));
    auto V4 = new Nodo(V5, new CasillaRecorrido(93.2, 372.8));
    auto V3 = new Nodo(V4, new CasillaRecorrido(139.8, 372.8));
    auto V2 = new Nodo(V3, new CasillaRecorrido(186.4, 372.8));
    auto V1 = new Nodo(V2, new CasillaRecorrido(233, 372.8));
    // Rojo
    auto R12 = new Nodo(V1, new CasillaRecorrido(279.6, 419.4));
    auto R11 = new Nodo(R12, new CasillaRecorrido(279.6, 466));
    auto R10 = new Nodo(R11, new CasillaRecorrido(279.6, 512.6));
    auto R9 = new Nodo(R10, new CasillaRecorrido(279.6, 559.2));
    auto RF = new NodoE(nullptr, new CasillaDestinoFinal(326.2 , 372.8, 'R'), nullptr, [](char a){return a=='B';});
    auto RH6 = new NodoE(nullptr, new CasillaZonaSegura(326.2, 419.4, 'R'), nullptr, [](char a){return a=='B';});
    auto RH5 = new NodoE(RH6, new CasillaZonaSegura(326.2, 466, 'R'), nullptr, [](char a){return a=='B';});
    auto RH4 = new NodoE(RH5, new CasillaZonaSegura(326.2, 512.6, 'R'), nullptr, [](char a){return a=='B';});
    auto RH3 = new NodoE(RH4, new CasillaZonaSegura(326.2, 559.2, 'R'), nullptr, [](char a){return a=='B';});
    auto RH2 = new NodoE(RH3, new CasillaZonaSegura(326.2, 605.8, 'R'), nullptr, [](char a){return a=='B';});
    auto RH1 = new NodoE(R9, new CasillaZonaSegura(279.6, 605.8, 'R'), RH2, [](char a){return a == 'R';});
    RF->setSE(AH6);
    RH6->setSE(RH5);
    RH5->setSE(RH4);
    RH4->setSE(RH3);
    RH3->setSE(RH2);
    RH2->setSE(RH1);
    auto RI = new Nodo(R9, new CasillaInicio(233, 559.2, 'R'));
    auto RC1 = new Nodo(RI, new CasillaCasa(46.6, 466, 'R'));
    auto RC2 = new Nodo(RI, new CasillaCasa(186.4, 466, 'R'));
    auto RC3 = new Nodo(RI, new CasillaCasa(46.6, 605.8, 'R'));
    auto RC4 = new Nodo(RI, new CasillaCasa(186.4, 605.8, 'R'));
    auto R8 = new Nodo(RH1, new CasillaRecorrido(279.6, 652.4));
    auto R7 = new Nodo(R8, new CasillaRecorrido(326.2, 652.4));
    auto R6 = new Nodo(R7, new CasillaRecorrido(372.8, 652.4));
    auto R5 = new Nodo(R6, new CasillaRecorrido(372.8, 605.8));
    auto R4 = new Nodo(R5, new CasillaRecorrido(372.8, 559.2));
    auto R3 = new Nodo(R4, new CasillaRecorrido(372.8, 512.6));
    auto R2 = new Nodo(R3, new CasillaRecorrido(372.8, 466));
    auto R1 = new Nodo(R2, new CasillaRecorrido(372.8, 419.4));
    // Azul
    auto Z12 = new Nodo(R1, new CasillaRecorrido(419.4, 372.8));
    auto Z11 = new Nodo(Z12, new CasillaRecorrido(466, 372.8));
    auto Z10 = new Nodo(Z11, new CasillaRecorrido(512.6, 372.8));
    auto Z9 = new Nodo(Z10, new CasillaRecorrido(559.2, 372.8));
    auto ZF = new NodoE(nullptr, new CasillaDestinoFinal(372.8, 326.2, 'Z'), nullptr, [](char a){return a=='B';});
    auto ZH6 = new NodoE(nullptr, new CasillaZonaSegura(419.4, 326.2, 'Z'), nullptr, [](char a){return a=='B';});
    auto ZH5 = new NodoE(ZH6, new CasillaZonaSegura(466, 326.2, 'Z'), nullptr, [](char a){return a=='B';});
    auto ZH4 = new NodoE(ZH5, new CasillaZonaSegura(512.6, 326.2, 'Z'), nullptr, [](char a){return a=='B';});
    auto ZH3 = new NodoE(ZH4, new CasillaZonaSegura(559.2, 326.2, 'Z'), nullptr, [](char a){return a=='B';});
    auto ZH2 = new NodoE(ZH3, new CasillaZonaSegura(605.8, 326.2, 'Z'), nullptr, [](char a){return a=='B';});
    auto ZH1 = new NodoE(Z9, new CasillaZonaSegura(605.8, 372.8, 'Z'), ZH2, [](char a){return a == 'Z';});
    ZF->setSE(AH6);
    ZH6->setSE(ZH5);
    ZH5->setSE(ZH4);
    ZH4->setSE(ZH3);
    ZH3->setSE(ZH2);
    ZH2->setSE(ZH1);
    auto ZI = new Nodo(Z9, new CasillaInicio(559.2, 466, 'Z'));
    auto ZC1 = new Nodo(ZI, new CasillaCasa(466, 605.8, 'Z'));
    auto ZC2 = new Nodo(ZI, new CasillaCasa(466, 466, 'Z'));
    auto ZC3 = new Nodo(ZI, new CasillaCasa(605.8, 466, 'Z'));
    auto ZC4 = new Nodo(ZI, new CasillaCasa(605.8, 605.8, 'Z'));
    auto Z8 = new Nodo(ZH1, new CasillaRecorrido(652.4, 372.8));
    auto Z7 = new Nodo(Z8, new CasillaRecorrido(652.4, 326.2));
    auto Z6 = new Nodo(Z7, new CasillaRecorrido(652.4, 279.6));
    auto Z5 = new Nodo(Z6, new CasillaRecorrido(605.8, 279.6));
    auto Z4 = new Nodo(Z5, new CasillaRecorrido(559.2, 279.6));
    auto Z3 = new Nodo(Z4, new CasillaRecorrido(512.6, 279.6));
    auto Z2 = new Nodo(Z3, new CasillaRecorrido(466, 279.6));
    auto Z1 = new Nodo(Z2, new CasillaRecorrido(419.4, 279.6));
    A12->setSO(Z1);
    auto it = j->begin();
    it->get_fichas()[0]->setPosicionC(AC1);
    it->get_fichas()[1]->setPosicionC(AC2);
    it->get_fichas()[2]->setPosicionC(AC3);
    it->get_fichas()[3]->setPosicionC(AC4);
    (it+1)->get_fichas()[0]->setPosicionC(ZC1);
    (it+1)->get_fichas()[1]->setPosicionC(ZC2);
    (it+1)->get_fichas()[2]->setPosicionC(ZC3);
    (it+1)->get_fichas()[3]->setPosicionC(ZC4);
    (it+2)->get_fichas()[0]->setPosicionC(RC1);
    (it+2)->get_fichas()[1]->setPosicionC(RC2);
    (it+2)->get_fichas()[2]->setPosicionC(RC3);
    (it+2)->get_fichas()[3]->setPosicionC(RC4);
    (it+3)->get_fichas()[0]->setPosicionC(VC1);
    (it+3)->get_fichas()[1]->setPosicionC(VC2);
    (it+3)->get_fichas()[2]->setPosicionC(VC3);
    (it+3)->get_fichas()[3]->setPosicionC(VC4);
}

//Tablero::~Tablero() {}

