#pragma once
#include<SFML\Graphics.hpp>
using namespace sf;
#define Max_main_menu1 3
class menu1 {
public:
	menu1(float width, float hight);
	void draw(sf::RenderWindow &window);
	void moveDown();
	void moveUp();

	int mainMenuPressed()
	{
		return mainMenuSelected;
	}
	int mainMenuSelected;
	sf::Font font;
	sf::Text mainMenu[Max_main_menu1];
	~menu1();
private:
	int mainMenuSelected;
	sf::Font font;
	sf::Text mainMenu[Max_main_menu1];

};
