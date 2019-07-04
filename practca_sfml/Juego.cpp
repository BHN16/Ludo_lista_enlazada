#include "Juego.h"

Juego::Juego(int resolucion_x, int resolucion_y, std::string nombre)
{
    ventana1 = new RenderWindow(VideoMode(resolucion_x,resolucion_y),nombre);

    textura1= new Texture;
    textura1->loadFromFile("Ludo_board.png");
    textura2 = new Texture;
    textura2->loadFromFile("rojo.png");

    sprite1 = new Sprite(*textura1);
    sprite2 = new Sprite(*textura2);
    sprite3 = new Sprite(*textura2);
    this->fps=60;
    ventana1->setFramerateLimit(fps);
    //imagen se debe incluir en la carpeta del cmake

    sprite1->setScale(((float)ventana1->getSize().x/sprite1->getTexture()->getSize().x),((float)ventana1->getSize().y/sprite1->getTexture()->getSize().y));
    sprite2->setOrigin(((float)sprite2->getTexture()->getSize().x/2),((float)sprite2->getTexture()->getSize().y/2));
    sprite3->setOrigin(((float)sprite3->getTexture()->getSize().x/2),((float)sprite3->getTexture()->getSize().y/2));
    sprite2->setScale(30.f/sprite2->getTexture()->getSize().x,30.f/sprite2->getTexture()->getSize().y);
    sprite3->setScale(30.f/sprite3->getTexture()->getSize().x,30.f/sprite3->getTexture()->getSize().y);

    sprite2->setPosition(((float)sprite1->getTexture()->getSize().x/20.f),((float)sprite1->getTexture()->getSize().y)/20.f);
    sprite3->setPosition((((float)sprite1->getTexture()->getSize().x/20.f)*15),((float)sprite1->getTexture()->getSize().y)/20.f);
    //set origin para instanciar la posicion del centro(getTexture()->getSize().x/y)

    //tamaño que quiero/tamaño real
    Game_loop();
}
//la superposicion de objetos en sfml se trabaja con el color y la transparencia
void Juego::Dibujar_ventana()
{
    ventana1->clear();
    ventana1->draw(*sprite1);
    ventana1->draw(*sprite2);
    ventana1->draw(*sprite3);
    ventana1->display();
}

void Juego::Game_loop()
{
    while(ventana1->isOpen())
    {
        Dibujar_ventana();
    }
}

void Juego::run() {
    auto tablero = new Tablero();
    auto FV1 = new Ficha('V', nullptr);
    auto FV2 = new Ficha('V', nullptr);
    auto FV3 = new Ficha('V', nullptr);
    auto FV4 = new Ficha('V', nullptr);
    auto FR1 = new Ficha('R', nullptr);
    auto FR2 = new Ficha('R', nullptr);
    auto FR3 = new Ficha('R', nullptr);
    auto FR4 = new Ficha('R', nullptr);
    auto FA1 = new Ficha('A', nullptr);
    auto FA2 = new Ficha('A', nullptr);
    auto FA3 = new Ficha('A', nullptr);
    auto FA4 = new Ficha('A', nullptr);
    auto FZ1 = new Ficha('Z', nullptr);
    auto FZ2 = new Ficha('Z', nullptr);
    auto FZ3 = new Ficha('Z', nullptr);
    auto FZ4 = new Ficha('Z', nullptr);
    tablero->construirTablero(FV1,FV2,FV3,FV4,FR1,FR2,FR3,FR4,FA1,FA2,FA3,FA4,FZ1,FZ2,FZ3,FZ4);
}

Juego::~Juego() {};
