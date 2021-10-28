#include "Arc.h"

Arc::Arc(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition, int numOfP)
{
	arcArray.setPrimitiveType(sf::LineStrip);
	arcArray.resize(NumberOfPoints);

	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createArc();
}


void Arc::createArc()
{
	float theta = 0;
	float pi = 3.141;
	float incrementAngle = -1 * pi / NumberOfPoints;

	for (int i = 0; i < NumberOfPoints; i++) {
		arcArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		theta += incrementAngle;
		arcArray[i].color = sf::Color::Magenta;
		
	}
	
}

void Arc::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(arcArray, states);
}


