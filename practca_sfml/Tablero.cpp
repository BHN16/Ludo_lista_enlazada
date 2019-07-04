#include "tablero.h"

Tablero::Tablero(){}

void Tablero::construirTablero(Ficha* FV1, Ficha* FV2, Ficha* FV3, Ficha* FV4, Ficha* FR1, Ficha* FR2, Ficha* FR3, Ficha* FR4, Ficha* FA1, Ficha* FA2, Ficha* FA3, Ficha* FA4, Ficha* FZ1, Ficha* FZ2, Ficha* FZ3, Ficha* FZ4) {
    // Amarillo = A, Rojo = R, Verde = V, Azul = Z, Nulo = N
    // Zona Segura = H, Inicio = I, Casa = C
    // Nodos extra condiciones:
    // XH1 (char x == Nodo->getCasilla->getColor)
    // XHn (bool x)
    // Amarillo
    auto A12 = new Nodo(nullptr, new CasillaRecorrido(0, 0, 'N'));
    auto A11 = new Nodo(A12, new CasillaRecorrido(0, 0, 'N'));
    auto A10 = new Nodo(A11, new CasillaRecorrido(0, 0, 'N'));
    auto A9 = new Nodo(A10, new CasillaRecorrido(0, 0, 'N'));
    auto AF = new NodoE(nullptr, new CasillaDestinoFinal(0, 0, 'A'), nullptr, [](char a){return false;});
    auto AH6 = new NodoE(AF, new CasillaZonaSegura(0, 0, 'A'), nullptr, [](char a){return false;});
    auto AH5 = new NodoE(AH6, new CasillaZonaSegura(0, 0, 'A'), nullptr, [](char a){return false;});
    auto AH4 = new NodoE(AH5, new CasillaZonaSegura(0, 0, 'A'), nullptr, [](char a){return false;});
    auto AH3 = new NodoE(AH4, new CasillaZonaSegura(0, 0, 'A'), nullptr, [](char a){return false;});
    auto AH2 = new NodoE(AH3, new CasillaZonaSegura(0, 0, 'A'), nullptr, [](char a){return false;});
    auto AH1 = new NodoE(A9, new CasillaZonaSegura(0, 0, 'A'), AH2, [](char a){return false;});
    AF->setSE(AH6);
    AH6->setSE(AH5);
    AH5->setSE(AH4);
    AH4->setSE(AH3);
    AH3->setSE(AH2);
    AH2->setSE(AH1);
    auto AI = new Nodo(A9, new CasillaInicio(0, 0, 'A'));
    auto AC1 = new Nodo(AI, new CasillaCasa(0, 0, 'A'));
    auto AC2 = new Nodo(AI, new CasillaCasa(0, 0, 'A'));
    auto AC3 = new Nodo(AI, new CasillaCasa(0, 0, 'A'));
    auto AC4 = new Nodo(AI, new CasillaCasa(0, 0, 'A'));
    auto A8 = new Nodo(AH1, new CasillaRecorrido(0, 0, 'N'));
    auto A7 = new Nodo(A8, new CasillaRecorrido(0, 0, 'N'));
    auto A6 = new Nodo(A7, new CasillaRecorrido(0, 0, 'N'));
    auto A5 = new Nodo(A6, new CasillaRecorrido(0, 0, 'N'));
    auto A4 = new Nodo(A5, new CasillaRecorrido(0, 0, 'N'));
    auto A3 = new Nodo(A4, new CasillaRecorrido(0, 0, 'N'));
    auto A2 = new Nodo(A3, new CasillaRecorrido(0, 0, 'N'));
    auto A1 = new Nodo(A2, new CasillaRecorrido(0, 0, 'N'));
    // Verde
    auto V12 = new Nodo(A1, new CasillaRecorrido(0, 0, 'N'));
    auto V11 = new Nodo(V12, new CasillaRecorrido(0, 0, 'N'));
    auto V10 = new Nodo(V11, new CasillaRecorrido(0, 0, 'N'));
    auto V9 = new Nodo(V10, new CasillaRecorrido(0, 0, 'N'));
    auto VF = new NodoE(nullptr, new CasillaDestinoFinal(0, 0, 'V'), nullptr, [](char a){return false;});
    auto VH6 = new NodoE(nullptr, new CasillaZonaSegura(0, 0, 'V'), nullptr, [](char a){return false;});
    auto VH5 = new NodoE(VH6, new CasillaZonaSegura(0, 0, 'V'), nullptr, [](char a){return false;});
    auto VH4 = new NodoE(VH5, new CasillaZonaSegura(0, 0, 'V'), nullptr, [](char a){return false;});
    auto VH3 = new NodoE(VH4, new CasillaZonaSegura(0, 0, 'V'), nullptr, [](char a){return false;});
    auto VH2 = new NodoE(VH3, new CasillaZonaSegura(0, 0, 'V'), nullptr, [](char a){return false;});
    auto VH1 = new NodoE(V9, new CasillaZonaSegura(0, 0, 'V'), VH2, [](char a){return false;});
    VF->setSE(AH6);
    VH6->setSE(VH5);
    VH5->setSE(VH4);
    VH4->setSE(VH3);
    VH3->setSE(VH2);
    VH2->setSE(VH1);
    auto VI = new Nodo(V9, new CasillaInicio(0, 0, 'V'));
    auto VC1 = new Nodo(VI, new CasillaCasa(0, 0, 'V'));
    auto VC2 = new Nodo(VI, new CasillaCasa(0, 0, 'V'));
    auto VC3 = new Nodo(VI, new CasillaCasa(0, 0, 'V'));
    auto VC4 = new Nodo(VI, new CasillaCasa(0, 0, 'V'));
    auto V8 = new Nodo(VH1, new CasillaRecorrido(0, 0, 'N'));
    auto V7 = new Nodo(V8, new CasillaRecorrido(0, 0, 'N'));
    auto V6 = new Nodo(V7, new CasillaRecorrido(0, 0, 'N'));
    auto V5 = new Nodo(V6, new CasillaRecorrido(0, 0, 'N'));
    auto V4 = new Nodo(V5, new CasillaRecorrido(0, 0, 'N'));
    auto V3 = new Nodo(V4, new CasillaRecorrido(0, 0, 'N'));
    auto V2 = new Nodo(V3, new CasillaRecorrido(0, 0, 'N'));
    auto V1 = new Nodo(V2, new CasillaRecorrido(0, 0, 'N'));
    // Rojo
    auto R12 = new Nodo(V1, new CasillaRecorrido(0, 0, 'N'));
    auto R11 = new Nodo(R12, new CasillaRecorrido(0, 0, 'N'));
    auto R10 = new Nodo(R11, new CasillaRecorrido(0, 0, 'N'));
    auto R9 = new Nodo(R10, new CasillaRecorrido(0, 0, 'N'));
    auto RF = new NodoE(nullptr, new CasillaDestinoFinal(0, 0, 'R'), nullptr, [](char a){return false;});
    auto RH6 = new NodoE(nullptr, new CasillaZonaSegura(0, 0, 'R'), nullptr, [](char a){return false;});
    auto RH5 = new NodoE(RH6, new CasillaZonaSegura(0, 0, 'R'), nullptr, [](char a){return false;});
    auto RH4 = new NodoE(RH5, new CasillaZonaSegura(0, 0, 'R'), nullptr, [](char a){return false;});
    auto RH3 = new NodoE(RH4, new CasillaZonaSegura(0, 0, 'R'), nullptr, [](char a){return false;});
    auto RH2 = new NodoE(RH3, new CasillaZonaSegura(0, 0, 'R'), nullptr, [](char a){return false;});
    auto RH1 = new NodoE(R9, new CasillaZonaSegura(0, 0, 'R'), RH2, [](char a){return false;});
    RF->setSE(AH6);
    RH6->setSE(RH5);
    RH5->setSE(RH4);
    RH4->setSE(RH3);
    RH3->setSE(RH2);
    RH2->setSE(RH1);
    auto RI = new Nodo(R9, new CasillaInicio(0, 0, 'R'));
    auto RC1 = new Nodo(RI, new CasillaCasa(0, 0, 'R'));
    auto RC2 = new Nodo(RI, new CasillaCasa(0, 0, 'R'));
    auto RC3 = new Nodo(RI, new CasillaCasa(0, 0, 'R'));
    auto RC4 = new Nodo(RI, new CasillaCasa(0, 0, 'R'));
    auto R8 = new Nodo(RH1, new CasillaRecorrido(0, 0, 'N'));
    auto R7 = new Nodo(R8, new CasillaRecorrido(0, 0, 'N'));
    auto R6 = new Nodo(R7, new CasillaRecorrido(0, 0, 'N'));
    auto R5 = new Nodo(R6, new CasillaRecorrido(0, 0, 'N'));
    auto R4 = new Nodo(R5, new CasillaRecorrido(0, 0, 'N'));
    auto R3 = new Nodo(R4, new CasillaRecorrido(0, 0, 'N'));
    auto R2 = new Nodo(R3, new CasillaRecorrido(0, 0, 'N'));
    auto R1 = new Nodo(R2, new CasillaRecorrido(0, 0, 'N'));
    // Azul
    auto Z12 = new Nodo(R1, new CasillaRecorrido(0, 0, 'N'));
    auto Z11 = new Nodo(Z12, new CasillaRecorrido(0, 0, 'N'));
    auto Z10 = new Nodo(Z11, new CasillaRecorrido(0, 0, 'N'));
    auto Z9 = new Nodo(Z10, new CasillaRecorrido(0, 0, 'N'));
    auto ZF = new NodoE(nullptr, new CasillaDestinoFinal(0, 0, 'Z'), nullptr, [](char a){return false;});
    auto ZH6 = new NodoE(nullptr, new CasillaZonaSegura(0, 0, 'Z'), nullptr, [](char a){return false;});
    auto ZH5 = new NodoE(ZH6, new CasillaZonaSegura(0, 0, 'Z'), nullptr, [](char a){return false;});
    auto ZH4 = new NodoE(ZH5, new CasillaZonaSegura(0, 0, 'Z'), nullptr, [](char a){return false;});
    auto ZH3 = new NodoE(ZH4, new CasillaZonaSegura(0, 0, 'Z'), nullptr, [](char a){return false;});
    auto ZH2 = new NodoE(ZH3, new CasillaZonaSegura(0, 0, 'Z'), nullptr, [](char a){return false;});
    auto ZH1 = new NodoE(Z9, new CasillaZonaSegura(0, 0, 'Z'), ZH2, [](char a){return false;});
    ZF->setSE(AH6);
    ZH6->setSE(ZH5);
    ZH5->setSE(ZH4);
    ZH4->setSE(ZH3);
    ZH3->setSE(ZH2);
    ZH2->setSE(ZH1);
    auto ZI = new Nodo(Z9, new CasillaInicio(0, 0, 'Z'));
    auto ZC1 = new Nodo(ZI, new CasillaCasa(0, 0, 'Z'));
    auto ZC2 = new Nodo(ZI, new CasillaCasa(0, 0, 'Z'));
    auto ZC3 = new Nodo(ZI, new CasillaCasa(0, 0, 'Z'));
    auto ZC4 = new Nodo(ZI, new CasillaCasa(0, 0, 'Z'));
    auto Z8 = new Nodo(ZH1, new CasillaRecorrido(0, 0, 'N'));
    auto Z7 = new Nodo(Z8, new CasillaRecorrido(0, 0, 'N'));
    auto Z6 = new Nodo(Z7, new CasillaRecorrido(0, 0, 'N'));
    auto Z5 = new Nodo(Z6, new CasillaRecorrido(0, 0, 'N'));
    auto Z4 = new Nodo(Z5, new CasillaRecorrido(0, 0, 'N'));
    auto Z3 = new Nodo(Z4, new CasillaRecorrido(0, 0, 'N'));
    auto Z2 = new Nodo(Z3, new CasillaRecorrido(0, 0, 'N'));
    auto Z1 = new Nodo(Z2, new CasillaRecorrido(0, 0, 'N'));
    A12->setSO(Z1);
    FV1->setPoscicion(VC1);
    FV2->setPoscicion(VC2);
    FV3->setPoscicion(VC3);
    FV4->setPoscicion(VC4);
    FR1->setPoscicion(RC1);
    FR2->setPoscicion(RC2);
    FR3->setPoscicion(RC3);
    FR4->setPoscicion(RC4);
    FA1->setPoscicion(AC1);
    FA2->setPoscicion(AC2);
    FA3->setPoscicion(AC3);
    FA4->setPoscicion(AC4);
    FZ1->setPoscicion(ZC1);
    FZ2->setPoscicion(ZC2);
    FZ3->setPoscicion(ZC3);
    FZ4->setPoscicion(ZC4);
}

Tablero::~Tablero() {}