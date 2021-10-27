#include "Dot.h"
#include"SFML/Graphics.hpp"

Dot::Dot()
{
	dotArray.resize(size);
	dotArray.setPrimitiveType(sf::LineStrip);
	dotArray[0] = sf::Vector2f(100, 100);
	dotArray[1] = sf::Vector2f(100, 100);

}
Dot::Dot(sf::Vector2f point1, sf::Vector2f point2)
{
	dotArray.resize(size);
	dotArray.setPrimitiveType(sf::LinesStrip);
	dotArray[0] = point1;
	dotArray[0].color = sf::Color::Yellow;
	dotArray[1] = point2;


}

void Dot::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(dotArray, states);
}