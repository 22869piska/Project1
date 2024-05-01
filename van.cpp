#include<SFML/Graphics.hpp>


using namespace std;
using namespace sf;
class vansama {
private:
public:
	Image heroico;

	Texture herotex;


	Sprite herospr;
public:
	float x = 0, y = 0, d= 0, h = 0, xup = 0, yup = 0, speed=0;
	int side=0;
	int a = 0;
	//


public:



	void frame(float time) {

		if (side == 1) {
			d += 0.2 * time;
			herospr.move(0, -d);
			herospr.move(0, -0.2);
			d = 0;
		}
			
		if (side == 2) {
			y += 0.7 * time;
			herospr.move(-y, 0);
			//herospr.setScale(-1, 0);
			y = 0;
		}
		if(side==3){
			x += 0.7*time;
			herospr.move(x, 0);
			//herospr.setScale(1, 0);
			x = 0;
		}
			
		




	}


	vansama() {

		//
		
	
			heroico.loadFromFile("image/van.jpg");
			herotex.loadFromImage(heroico);
			herospr.setTexture(herotex);
			herospr.setPosition(300, 500);
		
		
		
		//
	



	}
	~vansama() {




	}
};
