#include <SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include"van.cpp"
#include"platform.cpp"







//
/// /////
//
using namespace std;
using namespace sf;
int main()
{
	sf::RenderWindow window(sf::VideoMode(1080,800), "GYM");
	window.setFramerateLimit(61);
	
	//image/van.jpg
	


	//
	//Clock clock;
	
	Clock clock;
	vansama van;
	svaston svast;
	while (window.isOpen())
	{
		
		float time = clock.getElapsedTime().asMicroseconds();
		clock.restart();
		time = time / 600;
		van.frame(time);
		//
		if (Keyboard::isKeyPressed(Keyboard::W)) {

			van.side = 1;
			van.frame(time);
			van.side = 0;
		}
		if (Keyboard::isKeyPressed(Keyboard::D)) {
			
			van.side = 3;
			van.frame(time);
			van.side = 0;
		}
		if (Keyboard::isKeyPressed(Keyboard::A)) {

			van.side = 2;
			van.frame(time);
			van.side = 0;
		}








		sf::Event event;
		//
		while (window.pollEvent(event))//
		{//
			if (event.type == sf::Event::Closed)
				window.close();
		}//
		//------------------------------------


	
		
	


		
		
		window.clear();/////////////////////////////////CHISTKA///////////////////////////////////////
		
		//
		
		

		
			
		svast.genersvast();
		//govno gener;//
		window.draw(van.herospr);
		window.draw(svast.svastspr);
		//
		window.display();
		//---------------------------------
	}
	
	return 0;
}