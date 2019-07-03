#include <iostream>
#include <SFML/Graphics.hpp>
#include <time.h>
using namespace sf;
float size_y = 46.6;
float size_x = 46.6;
int board[15][15] = {
        0,0,0,0,0,0,6,6,6,0,0,0,0,0,0,
        0,1,0,0,1,0,6,0,0,0,2,0,0,2,0,
        0,0,0,0,0,0,6,0,6,0,0,0,0,0,0,
        0,0,0,0,0,0,6,0,6,0,0,0,0,0,0,
        0,1,0,0,1,0,6,0,6,0,2,0,0,2,0,
        0,0,0,0,0,0,6,0,6,0,0,0,0,0,0,
        6,0,6,6,6,6,0,0,0,6,6,6,6,6,6,
        6,0,0,0,0,0,0,0,0,0,0,0,0,0,6,
        6,6,6,6,6,6,0,0,0,6,6,6,6,0,6,
        0,0,0,0,0,0,6,0,6,0,0,0,0,0,0,
        0,3,0,0,3,0,6,0,6,0,4,0,0,4,0,
        0,0,0,0,0,0,6,0,6,0,0,0,0,0,0,
        0,0,0,0,0,0,6,0,6,0,0,0,0,0,0,
        0,3,0,0,3,0,0,0,6,0,4,0,0,4,0,
        0,0,0,0,0,0,6,6,6,0,0,0,0,0,0
};
Sprite fichas_verdes[4];
Sprite fichas_amarillas[4];
Sprite fichas_rojas[4];
Sprite fichas_azules[4];
Sprite dado[6];
int main()
{

    int v = 0, am = 0, r = 0, az = 0;//contadores para dar coordenadas iniciales
    int n = 5;

    RenderWindow window(VideoMode(700,700),"The ludo");
    Texture t0;
    Texture t1;
    Texture t2;
    Texture t3;
    Texture t4;
    Texture d1,d2,d3,d4,d5,d6;

    t0.loadFromFile("Tablero.png");
    t1.loadFromFile("verde.png");
    t2.loadFromFile("amarillo.png");
    t3.loadFromFile("rojo.png");
    t4.loadFromFile("azul.png");
    d1.loadFromFile("1.png");
    d2.loadFromFile("2.png");
    d3.loadFromFile("3.png");
    d4.loadFromFile("4.png");
    d5.loadFromFile("5.png");
    d6.loadFromFile("6.png");
    Sprite tablero(t0);//se le pasa como parametro la textura que tomara el sprite
    dado[0].setTexture(d1);
    dado[1].setTexture(d2);
    dado[2].setTexture(d3);
    dado[3].setTexture(d4);
    dado[4].setTexture(d5);
    dado[5].setTexture(d6);
    for(int i = 0; i < 6; i++)
    {
        dado[i].setScale(Vector2f(0.3,0.3));
        dado[i].setPosition(size_x*7,size_y*7);
    }
    for(int i = 0; i < 4; i++)
    {
        fichas_verdes[i].setTexture(t1);
        fichas_amarillas[i].setTexture(t2);
        fichas_rojas[i].setTexture(t3);
        fichas_azules[i].setTexture(t4);

        fichas_verdes[i].setScale(Vector2f(0.05,0.05));
        fichas_amarillas[i].setScale(Vector2f(0.03,0.03));
        fichas_rojas[i].setScale(Vector2f(0.15,0.15));
        fichas_azules[i].setScale(Vector2f(0.15,0.15));//varia el tamaño del sptrite
    }

    for(int i = 0; i < 15; i++)
    {
        for(int j = 0; j < 15; j++)
        {
            if(board[i][j] == 1)
            {
                fichas_verdes[v].setPosition(size_x*j,size_y*i);//se le da la posicion en la matriz a la ficha
                v++;
            }
            if(board[i][j] == 2)
            {
                fichas_amarillas[am].setPosition(size_x*j,size_y*i);//se le da la posicion en la matriz a la ficha
                am++;
            }
            if(board[i][j] == 3)
            {
                fichas_rojas[r].setPosition(size_x*j,size_y*i);//se le da la posicion en la matriz a la ficha
                r++;
            }
            if(board[i][j] == 4)
            {
                fichas_azules[az].setPosition(size_x*j,size_y*i);//se le da la posicion en la matriz a la ficha
                az++;
            }
        }
    }
    tablero.setScale(((float)window.getSize().x/tablero.getTexture()->getSize().x),((float)window.getSize().y/tablero.getTexture()->getSize().y));
    //se le da al tablero el tamaño de la ventana
    while(window.isOpen())
    {
        Event e;
        while(window.pollEvent(e))
        {
            if(e.type == Event::Closed)
            {
                window.close();
            }
            if(e.type == Event::KeyPressed)
            {
                if(e.key.code == Keyboard::Left)
                {
                    n = rand()%5+1;
                }
            }
        }
        window.clear();
        //se dibuja el tablero
        window.draw(tablero);
        //se dibujan las fichas
        for(int i = 0; i < 4; i++)
        {
            window.draw(fichas_verdes[i]);
            window.draw(fichas_amarillas[i]);
            window.draw(fichas_rojas[i]);
            window.draw(fichas_azules[i]);
        }
        window.draw(dado[n-1]);
        window.display();
    }
    return 0;
}