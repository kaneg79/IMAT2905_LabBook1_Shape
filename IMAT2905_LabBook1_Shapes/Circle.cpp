#include<SFML/Graphics.hpp>
#include "Circle.h"

Circle::Circle():size()
{
	circleArray.setPrimitiveType(sf::LinesStrip);
	circleArray.resize(size);
	//xCentre = xPosition;
	//yCentre = yPosition;


	//numCircPoints = {30};
	
	//drawCircle();
	
	
}

Circle::Circle(int xPosition, int yPosition, int raduis, int numCircPoints):size()
{
	
	circleArray.setPrimitiveType(sf::LinesStrip);
	circleArray.resize(numCircPoints);
	xCentre = xPosition;
	yCentre = yPosition;


	//numCircPoints = { 30 };

	
	//int i_angleIncrement = 360 / numCircPoints;
	//	// x' = x+ cos(theta)*r ;
	//	//y' = y+ sin(theta)*r ;
	for (int i = 0; i < numCircPoints; i++) {
		circleArray[i].position = sf::Vector2f((xCentre + cos(theta) * radius), (yCentre + sin(theta) * radius));
		theta = theta + pi;
		circleArray[0] = sf::Vector2f(xPosition, yPosition);
	}
	//circleArray[numCircPoints] = circleArray[0];
}






void Circle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(circleArray, states);
}


