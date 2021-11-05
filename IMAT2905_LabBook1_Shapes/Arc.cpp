#include "Arc.h"

Arc::Arc():xPos(), yPos(),radiusX(),radiusY()
{
	arcArray.setPrimitiveType(sf::LinesStrip);
	arcArray.resize(size);
}
Arc::Arc(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition)
{
	arcArray.setPrimitiveType(sf::LinesStrip);
	arcArray.resize(NumberOfPoints);
	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createArc();
}
void Arc::createArc()
{
	
	for (int i = 0; i < NumberOfPoints; i++) 
	{
		arcArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		theta += incrementAngle;
		arcArray[i].color = sf::Color::Cyan;
	}
	
}

void Arc::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(arcArray, states);
}

Arc::~Arc()//Deconstructor
{
}


