#include <iostream>
#include <SFML/Graphics.hpp>
#include "Juego.h"
using namespace std;
int main()
{
    Juego* juego1 = new Juego(800,800,"._.");
    return 0;
}

//SFML utiliza threads. (tipo de variable)sf::Thread
//declaracionde thread en clase vendria siendo construida en el constructor.
/*
thread para metodo de clase.
class MyClass
{
public:

    void func()
    {
    }
};

MyClass object;
sf::Thread thread(&MyClass::func, &object);

 */