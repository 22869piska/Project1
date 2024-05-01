#include <SFML/Graphics.hpp>
using namespace sf;

class svaston{
public:
	int i = 0;
	int size = 12;
	sf::String platform = { "===========" };
RenderWindow wind;
	Image svast;
	Texture tex;
	Sprite svastspr;
	//
	void genersvast() {
		
		for (i; i < size; i++) {
			if (platform[i] == '=') {
				svastspr.setTexture(tex);

				svastspr.setPosition( i*161, 620);

			}
		}
	}
	svaston() {
		svast.loadFromFile("image/govno.png");
		tex.loadFromImage(svast);
		svastspr.setTexture(tex);

	}
	~svaston() {

	}

};