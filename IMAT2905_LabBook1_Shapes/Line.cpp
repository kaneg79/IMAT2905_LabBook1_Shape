#include "Line.h"
Line::Line() :xPos(), yPos(), radiusX(), radiusY()
{
	lineArray.setPrimitiveType(sf::LinesStrip);
	lineArray.resize(size);
}
Line::Line(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition)
{
	lineArray.setPrimitiveType(sf::LineStrip);
	lineArray.resize(NumberOfPoints);

	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createLine();
}

void Line::createLine()
{
	for (int i = 0; i < NumberOfPoints; i++) 
	{
		lineArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		theta += incrementAngle;
		lineArray[0].color = sf::Color::Red;
		lineArray[1].color = sf::Color::Magenta;
	}
	
}

void Line::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(lineArray);
}

Line::~Line()
{
}
