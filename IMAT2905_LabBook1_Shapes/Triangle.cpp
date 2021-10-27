#include"SFML/Graphics.hpp"
#include "Triangle.h"
Triangle::Triangle()
{
	triangleArray.resize(size);
	triangleArray.setPrimitiveType(sf::LinesStrip);
	triangleArray[0] = sf::Vector2f(100,100);
	triangleArray[1] = sf::Vector2f(150, 150);
	triangleArray[2] = sf::Vector2f(200, 200);
	triangleArray[3] = sf::Vector2f(250, 250);
}
Triangle::Triangle(sf::Vector2f point1, sf::Vector2f point2, sf::Vector2f point3, sf::Vector2f point4)
{
	triangleArray.resize(size);
	triangleArray.setPrimitiveType(sf::LinesStrip);
	triangleArray[0] = point1;
	triangleArray[0].color = sf::Color::Cyan;
	triangleArray[1] = point2;
	triangleArray[1].color = sf::Color::Magenta;
	triangleArray[2] = point3;
	triangleArray[2].color = sf::Color::Red;
	triangleArray[3] = point1;
	triangleArray[3].color = sf::Color::Yellow;

}

void Triangle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(triangleArray, states);
}