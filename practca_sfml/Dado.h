#ifndef PRACTCA_SFML_DADO_H
#define PRACTCA_SFML_DADO_H
#include <SFML/Graphics.hpp>
using namespace sf;
class Dado {
private:
	Texture* d1;
	Sprite* dado;
	int valor;
public:
	Dado();
	int get_valor();
	Sprite* get_sprite();
	//Vector2f get_coordenadas();
};
#endif //PRACTCA_SFML_DADO_H
