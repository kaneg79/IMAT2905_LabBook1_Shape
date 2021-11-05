#include "Circle.h"

Circle::Circle() :xPos(), yPos(), radiusX(), radiusY()
{
	circleArray.setPrimitiveType(sf::LinesStrip);
	circleArray.resize(size);
}

Circle::Circle(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition)
{
	circleArray.setPrimitiveType(sf::LineStrip);
	circleArray.resize(NumberOfPoints+1);

	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createCircle();
}

void Circle::createCircle()
{
	for (int i = 0; i < NumberOfPoints; i++) 
	{
		circleArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		theta += incrementAngle;
		circleArray[i].color = sf::Color::Yellow;
	}
	circleArray[NumberOfPoints] = circleArray[0];
}

void Circle::draw(sf::RenderTarget& target, sf::RenderStates states)const
{
	target.draw(circleArray, states);
}

Circle::~Circle()
{
}
