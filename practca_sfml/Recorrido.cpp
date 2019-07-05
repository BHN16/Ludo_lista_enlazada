#include "Recorrido.h"

Recorrido::Recorrido() {}

Nodo* Recorrido::calcularRecorrido(Ficha* ficha, int mov) {
    Nodo* punteroAuxiliar = nullptr;
    punteroAuxiliar = ficha->getPosicion()->getSiguienteNodo(ficha->getColor());
    for(int i = 1; i < mov; i++){
        punteroAuxiliar = punteroAuxiliar->getSiguienteNodo(ficha->getColor());
    }
    return punteroAuxiliar;
}

void Recorrido::mover(Ficha* ficha, int mov){
    Nodo* NN = calcularRecorrido(ficha,mov);
    if(NN->getCasilla()->getDisponible()){
        ficha->getPosicion()->getCasilla()->disponibleSwitch();
        ficha->getPosicion()->setF(nullptr);
        ficha->setPosicion(NN);
        NN->getCasilla()->disponibleSwitch();
        NN->setF(ficha);
    }else{
        if(NN->getF()->getColor()==ficha->getColor()){
            cout<<"Casilla ocupada\n";
        } else {
            // Falta probar pero asumo que funciona
            NN->getF()->getPosInicial()->getCasilla()->disponibleSwitch();
            NN->getF()->setPosicion(NN->getF()->getPosInicial());
            ficha->getPosicion()->getCasilla()->disponibleSwitch();
            ficha->getPosicion()->setF(nullptr);
            ficha->setPosicion(NN);
            NN->getCasilla()->disponibleSwitch();
            NN->setF(ficha);
        }
    }
}

Recorrido::~Recorrido() {}