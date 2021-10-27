#include "Square.h"
#include"SFML/Graphics.hpp"

Square::Square()
{
	squareArray.resize(size);
	squareArray.setPrimitiveType(sf::LinesStrip);
	squareArray[0] = sf::Vector2f(100, 100);
	squareArray[1] = sf::Vector2f(150, 150);
	squareArray[2] = sf::Vector2f(200, 200);
	squareArray[3] = sf::Vector2f(250, 250);
	squareArray[4] = sf::Vector2f(300, 300);
}
Square::Square(sf::Vector2f point1, sf::Vector2f point2, sf::Vector2f point3, sf::Vector2f point4, sf::Vector2f point5)
{
	squareArray.resize(size);
	squareArray.setPrimitiveType(sf::LinesStrip);
	squareArray[0] = point1;
	squareArray[0].color = sf::Color::Magenta;
	squareArray[1] = point2;
	squareArray[1].color = sf::Color::Green;
	squareArray[2] = point3;
	squareArray[2].color = sf::Color::Yellow;
	squareArray[3] = point4;
	squareArray[3].color = sf::Color::Red;
	squareArray[4] = point5;
	squareArray[4].color = sf::Color::Magenta;

}

void Square::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(squareArray, states);
}