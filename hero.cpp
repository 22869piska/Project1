#include<SFML/Graphics.hpp>
#include<iostream>
using namespace sf;
using namespace std;



class vansama {
public:
	int side = 0;
	float x = 0;
	float y = 0;
	float xup = 0 , yup = 0;
	float jmp = 0;
	Image image;
	Texture texture;
	Sprite spr;

	
	//


	void frame(float time) {



		


		if (xup < 2.2) {

			x = xup; spr.move(x * time, 0); 
			if (xup>2) {
				xup = 2;
				
			}
			cout <<"(x"<< x << "x)";
		}

		if (yup > -2.2) {

			y = yup; spr.move(y * time, 0);
			if (y < -2) {
				yup = -2;
				
			}
			cout << "{y" << y << "y}";
		}

		
	
		if (side==3) 
		{
		
		
		}


		

	}


	vansama() {

		image.loadFromFile("image/van.jpg");
		texture.loadFromImage(image);
		spr.setTexture(texture);
		spr.setPosition(400, 700);
	
		



	}
	~vansama() {




	}






};