#include "menu.h"

  menu::menu(float width,float hight) {
	//play
	if (!font.loadFromFile("OpenSans-Bold.ttf")) {
		mainMenu[0].setFont(font);
		mainMenu[0].setColor(sf::Color::Green);
		mainMenu[0].setString("Play");
		mainMenu[0].setCharacterSize(50);
		mainMenu[0].setPosition(sf::Vector2f(width / 2 - 50, hight / (Max_main_menu + 1)));
	

    //options (i will remove it to the next page)
		
		mainMenu[1].setFont(font);
		mainMenu[1].setColor(sf::Color::White);
		mainMenu[1].setString("Options");
		mainMenu[1].setCharacterSize(50);
		mainMenu[1].setPosition(sf::Vector2f(width / 2 - 50, hight / (Max_main_menu + 1)));


    //exit
			
		mainMenu[2].setFont(font);
		mainMenu[2].setColor(sf::Color::White);
		mainMenu[2].setString("Exit");
		mainMenu[2].setCharacterSize(50);
		mainMenu[2].setPosition(sf::Vector2f(width / 2 - 50, hight / (Max_main_menu + 1)));

		mainMenuSelected = 0;
	} 
	//function to draw the main menu
	void menu::draw(sf::RenderWindow & window); {
		for (int i = 0; i < 3; i++) {
			window.draw(mainMenu[i]);
		}
	}
//move down
	void menu::moveDown();
	{
		if (mainMenuSelected + 1 <= Max_main_menu) //check the items
		{ 
			mainMenu[mainMenuSelected].setColor(sf::Color::White);
			// go to the next item
			mainMenuSelected++;// go to the next item
				if (mainMenuSelected == 3)
				{
					mainMenuSelected = 0;
		        }
		
			mainMenu[mainMenuSelected].setColor(sf::Color::Blue);  //change the item's color

		}
	}



//move up
	void menu::moveUp();
{
	if (mainMenuSelected - 1 >= -1) //check if not play
	{
		mainMenu[mainMenuSelected].setColor(sf::Color::White);
		mainMenuSelected--;
		if (mainMenuSelected == -1)
		{
			mainMenuSelected = 2;
		}
        mainMenu[mainMenuSelected].setColor(sf::Color::Blue)
	}

}
}
