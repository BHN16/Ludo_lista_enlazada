#include "Nodo.h"

Nodo::Nodo() {}

Nodo::Nodo(Nodo *next, Casilla *task) : siguienteOrdinario(next), casilla(task){}

    void Nodo::setSO(Nodo* SO) {
        siguienteOrdinario = SO;
    }


    Nodo* Nodo::getSiguienteNodo(){
    return siguienteOrdinario;
    }


    Casilla* Nodo::getCasilla(){
        return casilla;
    }


void Nodo::setSE(Nodo* SO) {
    siguienteOrdinario = SO;
}


Nodo* Nodo::getSE() {
    return siguienteOrdinario;
}

Nodo::~Nodo() {}

NodoE::NodoE(Nodo* next, Casilla* task, NodoE* SE, function<bool(char)> condition) : Nodo(next, task), siguienteExtra(SE), condicion(condition) {}


void NodoE::setSE(NodoE* NSE) {
		siguienteExtra = NSE;
	}

	Nodo* NodoE::getSiguienteNodo(char c) {
        if(condicion(c)){
            return siguienteExtra;
        } else {
            return Nodo::getSiguienteNodo();
        }
    }

    NodoE::~NodoE() {}


