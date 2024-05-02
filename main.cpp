#include<SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>
#include<SFML/System.hpp>
#include"hero.cpp"
using namespace sf;
using namespace std;





int main(){
	/////
	

	vansama van;

	Clock clock;
	
	RenderWindow window(VideoMode(1080, 800), "GYM");
	
//////
	while (window.isOpen())
	{
		window.setFramerateLimit(60);
		float time = clock.getElapsedTime().asMicroseconds();
		clock.restart();
		time = time / 900;
		///////////////////////////////////////////////////////
		van.frame(time);


		if (!Keyboard::isKeyPressed(Keyboard::D))
		{
			
			if (van.xup > 0)
			{
			
				van.xup -= 0.2;
				if (van.xup<0) {
					van.xup = 0;
				}
			}
	    }
		if (!Keyboard::isKeyPressed(Keyboard::A))
		{

			if (van.yup < 0)
			{

				van.yup += 0.2;
				if (van.yup > 0) {
					van.yup = 0;
				}
			}
		}
		if (Keyboard::isKeyPressed(Keyboard::Space)) { van.spr.setPosition(400, 700); }//setpos
		if (Keyboard::isKeyPressed(Keyboard::D)) { van.side = 1; van.xup += 0.1; }
		if (Keyboard::isKeyPressed(Keyboard::A)) { van.side = 2; ; van.yup -= 0.1;
		}
		if (Keyboard::isKeyPressed(Keyboard::W)) { van.side = 3; }








		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}


		///////////////////////////////////////////Управление персонажем с анимацией////////////////////////////////////////////////////////////////////////
	

		
			
	


		window.clear();
		window.draw(van.spr);
	


		
		window.display();
	}








}
