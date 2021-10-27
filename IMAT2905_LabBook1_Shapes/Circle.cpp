#include<SFML/Graphics.hpp>
#include "Circle.h"
/*

Circle::Circle() :xPosition(), yPosition(), increment()
{

}
	
Circle::Circle(int xPosition, int yPosition, int raduis, int numCircPoints):xPosition(), yPosition(), increment()
{

	circleArray.setPrimitiveType(sf::LinesStrip);
	circleArray.resize(numCircPoints);
	sf::Time second = sf::seconds(0.01f);
	sf::Clock clock;

	numCircPoints = {60};

	for (int i = 0; i < numCircPoints; i++)
	{
		circleArray[i].position = sf::Vector2f((xPosition + cos(theta) * radius), (yPosition + sin(theta) * radius));
		circleArray[i].color = sf::Color::Blue;
		theta = ((float)i) * 360 / numCircPoints;
	}
	

}

void Circle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(circleArray, states);
}


*/