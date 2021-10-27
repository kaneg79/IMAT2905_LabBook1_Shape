#include "Line.h"
#include"SFML/Graphics.hpp"

Line::Line()
{
	lineArray.resize(size);
	lineArray.setPrimitiveType(sf::LinesStrip);
	lineArray[0] = sf::Vector2f(100, 100);
	lineArray[1] = sf::Vector2f(150, 150);
	
}
Line::Line(sf::Vector2f point1, sf::Vector2f point2)
{
	lineArray.resize(size);
	lineArray.setPrimitiveType(sf::LinesStrip);
	lineArray[0] = point1;
	lineArray[0].color = sf::Color::Magenta;
	lineArray[1] = point2;
	lineArray[1].color = sf::Color::Green;


}

void Line::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(lineArray, states);
}