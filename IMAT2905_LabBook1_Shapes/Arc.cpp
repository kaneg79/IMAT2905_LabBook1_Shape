#include "Arc.h"

Arc::Arc():xPos(), yPos(),radiusX(),radiusY()
{
	arcArray.setPrimitiveType(sf::LinesStrip);
	arcArray.resize(size);//Array size initialised to zero
}
Arc::Arc(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition)
{
	arcArray.setPrimitiveType(sf::LinesStrip);
	arcArray.resize(NumberOfPoints);//Array is now resized to the number of points defined by the shape being drawn
	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createArc();// Initialises the create shape function
}
void Arc::createArc()
{
	//Array is created here for plottting the vertices in 2d space
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


