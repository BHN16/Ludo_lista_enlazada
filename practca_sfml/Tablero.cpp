//
// Created by bhn16 on 15/06/19.
//

#include <iostream>
#include "Casilla.cpp"
using namespace std;

template <class T>
class Nodo {
private:
	T* Casilla;
	Nodo* siguienteOrdinario;
public:
	Nodo(Nodo* next, T* task) : siguienteOrdinario(next), Casilla(task){}
	void setSO(Nodo* SO) {
		SO = siguienteOrdinario;
	}

	virtual void setSE();

	Nodo* getSO() {
		return siguienteOrdinario;
	}

};

template<class T>
class NodoE : public Nodo<T> {
private:
	NodoE* siguienteExtra;
public:
	NodoE(Nodo* next, T* task, NodoE* SE) : Nodo(next, task), siguienteExtra(SE) {}
	void setSE(NodoE* NSE) override{
		siguienteExtra = NSE;
	}

};

void construirTablero() {
	// Amarillo = A, Rojo = R, Verde = V, Azul = Z, Nulo = N
	// Zona Segura = H, Inicio = I, Casa = C
	// Amarillo
	auto A12 = new Nodo<Casilla>(nullptr, new CasillaRecorrido(0, 0, 'N'));
	auto A11 = new Nodo<Casilla>(A12, new CasillaRecorrido(0, 0, 'N'));
	auto A10 = new Nodo<Casilla>(A11, new CasillaRecorrido(0, 0, 'N'));
	auto A9 = new Nodo<Casilla>(A10, new CasillaRecorrido(0, 0, 'N'));
	auto AF = new NodoE<Casilla>(nullptr, new CasillaDestinoFinal(0, 0, 'A'), nullptr);
	auto AH6 = new NodoE<Casilla>(AF, new CasillaZonaSegura(0, 0, 'A'), nullptr);
	auto AH5 = new NodoE<Casilla>(AH6, new CasillaZonaSegura(0, 0, 'A'), nullptr);
	auto AH4 = new NodoE<Casilla>(AH5, new CasillaZonaSegura(0, 0, 'A'), nullptr);
	auto AH3 = new NodoE<Casilla>(AH4, new CasillaZonaSegura(0, 0, 'A'), nullptr);
	auto AH2 = new NodoE<Casilla>(AH3, new CasillaZonaSegura(0, 0, 'A'), nullptr);
	auto AH1 = new NodoE<Casilla>(A9, new CasillaZonaSegura(0, 0, 'A'), AH2);
	AF->setSE(AH6);
	AH6->setSE(AH5);
	AH5->setSE(AH4);
	AH4->setSE(AH3);
	AH3->setSE(AH2);
	AH2->setSE(AH1);
	auto AI = new Nodo<Casilla>(A9, new CasillaInicio(0, 0, 'A'));
	auto AC1 = new Nodo<Casilla>(AI, new CasillaCasa(0, 0, 'A'));
	auto AC2 = new Nodo<Casilla>(AI, new CasillaCasa(0, 0, 'A'));
	auto AC3 = new Nodo<Casilla>(AI, new CasillaCasa(0, 0, 'A'));
	auto AC4 = new Nodo<Casilla>(AI, new CasillaCasa(0, 0, 'A'));
	auto A8 = new Nodo<Casilla>(AH1, new CasillaRecorrido(0, 0, 'N'));
	auto A7 = new Nodo<Casilla>(A8, new CasillaRecorrido(0, 0, 'N'));
	auto A6 = new Nodo<Casilla>(A7, new CasillaRecorrido(0, 0, 'N'));
	auto A5 = new Nodo<Casilla>(A6, new CasillaRecorrido(0, 0, 'N'));
	auto A4 = new Nodo<Casilla>(A5, new CasillaRecorrido(0, 0, 'N'));
	auto A3 = new Nodo<Casilla>(A4, new CasillaRecorrido(0, 0, 'N'));
	auto A2 = new Nodo<Casilla>(A3, new CasillaRecorrido(0, 0, 'N'));
	auto A1 = new Nodo<Casilla>(A2, new CasillaRecorrido(0, 0, 'N'));
	// Verde
	auto V12 = new Nodo<Casilla>(A1, new CasillaRecorrido(0, 0, 'N'));
	auto V11 = new Nodo<Casilla>(V12, new CasillaRecorrido(0, 0, 'N'));
	auto V10 = new Nodo<Casilla>(V11, new CasillaRecorrido(0, 0, 'N'));
	auto V9 = new Nodo<Casilla>(V10, new CasillaRecorrido(0, 0, 'N'));
	auto VF = new NodoE<Casilla>(nullptr, new CasillaDestinoFinal(0, 0, 'V'), nullptr);
	auto VH6 = new NodoE<Casilla>(nullptr, new CasillaZonaSegura(0, 0, 'V'), nullptr);
	auto VH5 = new NodoE<Casilla>(VH6, new CasillaZonaSegura(0, 0, 'V'), nullptr);
	auto VH4 = new NodoE<Casilla>(VH5, new CasillaZonaSegura(0, 0, 'V'), nullptr);
	auto VH3 = new NodoE<Casilla>(VH4, new CasillaZonaSegura(0, 0, 'V'), nullptr);
	auto VH2 = new NodoE<Casilla>(VH3, new CasillaZonaSegura(0, 0, 'V'), nullptr);
	auto VH1 = new NodoE<Casilla>(V9, new CasillaZonaSegura(0, 0, 'V'), VH2);
	VF->setSE(AH6);
	VH6->setSE(VH5);
	VH5->setSE(VH4);
	VH4->setSE(VH3);
	VH3->setSE(VH2);
	VH2->setSE(VH1);
	auto VI = new Nodo<Casilla>(V9, new CasillaInicio(0, 0, 'V'));
	auto VC1 = new Nodo<Casilla>(VI, new CasillaCasa(0, 0, 'V'));
	auto VC2 = new Nodo<Casilla>(VI, new CasillaCasa(0, 0, 'V'));
	auto VC3 = new Nodo<Casilla>(VI, new CasillaCasa(0, 0, 'V'));
	auto VC4 = new Nodo<Casilla>(VI, new CasillaCasa(0, 0, 'V'));
	auto V8 = new Nodo<Casilla>(VH1, new CasillaRecorrido(0, 0, 'N'));
	auto V7 = new Nodo<Casilla>(V8, new CasillaRecorrido(0, 0, 'N'));
	auto V6 = new Nodo<Casilla>(V7, new CasillaRecorrido(0, 0, 'N'));
	auto V5 = new Nodo<Casilla>(V6, new CasillaRecorrido(0, 0, 'N'));
	auto V4 = new Nodo<Casilla>(V5, new CasillaRecorrido(0, 0, 'N'));
	auto V3 = new Nodo<Casilla>(V4, new CasillaRecorrido(0, 0, 'N'));
	auto V2 = new Nodo<Casilla>(V3, new CasillaRecorrido(0, 0, 'N'));
	auto V1 = new Nodo<Casilla>(V2, new CasillaRecorrido(0, 0, 'N'));
	// Azul
	auto Z12 = new Nodo<Casilla>(V1, new CasillaRecorrido(0, 0, 'N'));
	auto Z11 = new Nodo<Casilla>(Z12, new CasillaRecorrido(0, 0, 'N'));
	auto Z10 = new Nodo<Casilla>(Z11, new CasillaRecorrido(0, 0, 'N'));
	auto Z9 = new Nodo<Casilla>(Z10, new CasillaRecorrido(0, 0, 'N'));
	auto ZF = new NodoE<Casilla>(nullptr, new CasillaDestinoFinal(0, 0, 'Z'), nullptr);
	auto ZH6 = new NodoE<Casilla>(nullptr, new CasillaZonaSegura(0, 0, 'Z'), nullptr);
	auto ZH5 = new NodoE<Casilla>(ZH6, new CasillaZonaSegura(0, 0, 'Z'), nullptr);
	auto ZH4 = new NodoE<Casilla>(ZH5, new CasillaZonaSegura(0, 0, 'Z'), nullptr);
	auto ZH3 = new NodoE<Casilla>(ZH4, new CasillaZonaSegura(0, 0, 'Z'), nullptr);
	auto ZH2 = new NodoE<Casilla>(ZH3, new CasillaZonaSegura(0, 0, 'Z'), nullptr);
	auto ZH1 = new NodoE<Casilla>(Z9, new CasillaZonaSegura(0, 0, 'Z'), ZH2);
	ZF->setSE(AH6);
	ZH6->setSE(ZH5);
	ZH5->setSE(ZH4);
	ZH4->setSE(ZH3);
	ZH3->setSE(ZH2);
	ZH2->setSE(ZH1);
	auto ZI = new Nodo<Casilla>(Z9, new CasillaInicio(0, 0, 'Z'));
	auto ZC1 = new Nodo<Casilla>(ZI, new CasillaCasa(0, 0, 'Z'));
	auto ZC2 = new Nodo<Casilla>(ZI, new CasillaCasa(0, 0, 'Z'));
	auto ZC3 = new Nodo<Casilla>(ZI, new CasillaCasa(0, 0, 'Z'));
	auto ZC4 = new Nodo<Casilla>(ZI, new CasillaCasa(0, 0, 'Z'));
	auto Z8 = new Nodo<Casilla>(ZH1, new CasillaRecorrido(0, 0, 'N'));
	auto Z7 = new Nodo<Casilla>(Z8, new CasillaRecorrido(0, 0, 'N'));
	auto Z6 = new Nodo<Casilla>(Z7, new CasillaRecorrido(0, 0, 'N'));
	auto Z5 = new Nodo<Casilla>(Z6, new CasillaRecorrido(0, 0, 'N'));
	auto Z4 = new Nodo<Casilla>(Z5, new CasillaRecorrido(0, 0, 'N'));
	auto Z3 = new Nodo<Casilla>(Z4, new CasillaRecorrido(0, 0, 'N'));
	auto Z2 = new Nodo<Casilla>(Z3, new CasillaRecorrido(0, 0, 'N'));
	auto Z1 = new Nodo<Casilla>(Z2, new CasillaRecorrido(0, 0, 'N'));
	// Rojo
	auto R12 = new Nodo<Casilla>(Z1, new CasillaRecorrido(0, 0, 'N'));
	auto R11 = new Nodo<Casilla>(R12, new CasillaRecorrido(0, 0, 'N'));
	auto R10 = new Nodo<Casilla>(R11, new CasillaRecorrido(0, 0, 'N'));
	auto R9 = new Nodo<Casilla>(R10, new CasillaRecorrido(0, 0, 'N'));
	auto RF = new NodoE<Casilla>(nullptr, new CasillaDestinoFinal(0, 0, 'R'), nullptr);
	auto RH6 = new NodoE<Casilla>(nullptr, new CasillaZonaSegura(0, 0, 'R'), nullptr);
	auto RH5 = new NodoE<Casilla>(RH6, new CasillaZonaSegura(0, 0, 'R'), nullptr);
	auto RH4 = new NodoE<Casilla>(RH5, new CasillaZonaSegura(0, 0, 'R'), nullptr);
	auto RH3 = new NodoE<Casilla>(RH4, new CasillaZonaSegura(0, 0, 'R'), nullptr);
	auto RH2 = new NodoE<Casilla>(RH3, new CasillaZonaSegura(0, 0, 'R'), nullptr);
	auto RH1 = new NodoE<Casilla>(R9, new CasillaZonaSegura(0, 0, 'R'), RH2);
	RF->setSE(AH6);
	RH6->setSE(RH5);
	RH5->setSE(RH4);
	RH4->setSE(RH3);
	RH3->setSE(RH2);
	RH2->setSE(RH1);
	auto RI = new Nodo<Casilla>(R9, new CasillaInicio(0, 0, 'R'));
	auto RC1 = new Nodo<Casilla>(RI, new CasillaCasa(0, 0, 'R'));
	auto RC2 = new Nodo<Casilla>(RI, new CasillaCasa(0, 0, 'R'));
	auto RC3 = new Nodo<Casilla>(RI, new CasillaCasa(0, 0, 'R'));
	auto RC4 = new Nodo<Casilla>(RI, new CasillaCasa(0, 0, 'R'));
	auto R8 = new Nodo<Casilla>(RH1, new CasillaRecorrido(0, 0, 'N'));
	auto R7 = new Nodo<Casilla>(R8, new CasillaRecorrido(0, 0, 'N'));
	auto R6 = new Nodo<Casilla>(R7, new CasillaRecorrido(0, 0, 'N'));
	auto R5 = new Nodo<Casilla>(R6, new CasillaRecorrido(0, 0, 'N'));
	auto R4 = new Nodo<Casilla>(R5, new CasillaRecorrido(0, 0, 'N'));
	auto R3 = new Nodo<Casilla>(R4, new CasillaRecorrido(0, 0, 'N'));
	auto R2 = new Nodo<Casilla>(R3, new CasillaRecorrido(0, 0, 'N'));
	auto R1 = new Nodo<Casilla>(R2, new CasillaRecorrido(0, 0, 'N'));
	A12->setSO(R1);
}
