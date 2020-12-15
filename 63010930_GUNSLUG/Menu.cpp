#include "Menu.h"

Menu::Menu(float width, float height)
{
	if (!font.loadFromFile("font/metalslug.ttf"))
	{
		//handel error
	}
	menu[0].setFont(font);
	menu[0].setCharacterSize(60);
	menu[0].setFillColor(sf::Color::Red);
	menu[0].setString("Play");
	menu[0].setPosition(sf::Vector2f(650,  400));

	menu[1].setFont(font);
	menu[1].setCharacterSize(60);
	menu[1].setFillColor(sf::Color::White);
	menu[1].setString("Score Board");
	menu[1].setPosition(sf::Vector2f(550, 500));

	menu[2].setFont(font);
	menu[2].setCharacterSize(60);
	menu[2].setFillColor(sf::Color::White);
	menu[2].setString("Exit");
	menu[2].setPosition(sf::Vector2f(650, 600));

	selectedItemIndex = 0;
}

Menu::~Menu()
{

}
void Menu::draw(sf::RenderWindow& window)
{
	for (int i = 0; i < MAX_NUMBER_OF_ITEMS; i++)
	{
		window.draw(menu[i]);
	}
}
void Menu::MoveUp()
{
	if (selectedItemIndex - 1 >= 0)
	{
		menu[selectedItemIndex].setOutlineColor(sf::Color::Transparent);
		menu[selectedItemIndex].setOutlineThickness(0);
		menu[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex--;
		menu[selectedItemIndex].setFillColor(sf::Color::Red);
		menu[selectedItemIndex].setOutlineColor(sf::Color::Yellow);
		menu[selectedItemIndex].setOutlineThickness(5);


	}
}
void Menu::MoveDown()
{
	if (selectedItemIndex + 1 < MAX_NUMBER_OF_ITEMS)
	{
		menu[selectedItemIndex].setOutlineColor(sf::Color::Transparent);
		menu[selectedItemIndex].setOutlineThickness(0);
		menu[selectedItemIndex].setFillColor(sf::Color::White);
		selectedItemIndex++;
		menu[selectedItemIndex].setFillColor(sf::Color::Red);
		menu[selectedItemIndex].setOutlineColor(sf::Color::Yellow);
		menu[selectedItemIndex].setOutlineThickness(5);

	}
}