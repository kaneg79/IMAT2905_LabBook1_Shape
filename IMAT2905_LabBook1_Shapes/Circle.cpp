#include<SFML/Graphics.hpp>
#include "Circle.h"

Circle::Circle() :size(), xCentre(), yCentre(), xPosition(), yPosition(), increment()
{
	//circleArray.setPrimitiveType(sf::LinesStrip);
	//circleArray.resize(size);
	//xCentre = xPosition;
	//yCentre = yPosition;


	//xCentre = 300;
	//yCentre = 300;
	
}

Circle::Circle(int xPosition, int yPosition, int raduis, int numCircPoints) :size(), xCentre(), yCentre(), xPosition(), yPosition(), increment()
{
	
	circleArray.setPrimitiveType(sf::LinesStrip);
	circleArray.resize(numCircPoints+1);
	xCentre = xPosition;
	yCentre = yPosition;
	numCircPoints = { 60};

	for (int i = 0; i < numCircPoints; i++) 
	{
		
		circleArray[i].position = sf::Vector2f((xCentre + cos(theta) * radius), (yCentre + sin(theta) * radius));
		//theta = theta += pi;
		//i++;
		//circleArray[0] = sf::Vector2f(xCentre, yCentre);
		theta = ((float)i)*360/numCircPoints;
	}
	circleArray[numCircPoints] = circleArray[0];
}

void Circle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(circleArray, states);
}


