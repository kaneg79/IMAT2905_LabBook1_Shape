#include "Circle.h"

Circle::Circle(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition)
{
	arcAttempt.setPrimitiveType(sf::LineStrip);
	arcAttempt.resize(NumberOfPoints+1);

	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createCircle();
}


void Circle::createCircle()
{
	float theta = 0;
	float pi = 3.141;
	float incrementAngle = 2 * pi / NumberOfPoints;

	for (int i = 0; i < NumberOfPoints; i++) {
		arcAttempt[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		arcAttempt[i].color = sf::Color::Magenta;
		theta += incrementAngle;
	}
	arcAttempt[NumberOfPoints] = arcAttempt[0];
}

void Circle::draw(sf::RenderTarget& target, sf::RenderStates states)const
{
	target.draw(arcAttempt, states);
}