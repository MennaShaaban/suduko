#include<SFML/Graphics.hpp>
#include<iostream>
#include "menu1.h"
using namespace std;
using namespace sf;

int main() {
	RenderWindow window(sf::VideoMode(600, 600), "suduko");

	menu1 Menu(600, 600);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))  
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::KeyReleased) {
				if (event.key.code == sf::Keyboard::Up) {
					Menu.moveUp();
					break;
				}
				if (event.key.code == sf::Keyboard::Down) {
					Menu.moveDown();
					break;
			 }
		}
		window.clear();
		Menu.draw(window);
		window.display();
	}

	return 0;
}
