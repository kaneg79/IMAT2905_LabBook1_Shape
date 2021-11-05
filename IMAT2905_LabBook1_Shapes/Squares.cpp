#include "Squares.h"

Squares::Squares() :Polygon(xPos, yPos, radiusX, radiusY)
{
	circleArray.setPrimitiveType(sf::LinesStrip);
	circleArray.resize(size);
}
Squares::Squares(int xPosition, int yPosition, int radiusXpos, int radiusYpos) : Polygon(xPosition, yPosition, radiusXpos, radiusYpos)
{
	circleArray.setPrimitiveType(sf::LinesStrip);
	circleArray.resize(NumberOfPoints + 1);
	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXpos;
	radiusY = radiusYpos;
	createSquare();
}

void Squares::createSquare()
{
	double incrementAngle = 2 * pi / NumberOfPoints;

	for (int i = 0; i < NumberOfPoints; i++) {
		circleArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		theta += incrementAngle;
		circleArray[i].color = sf::Color::Magenta;
	}
	circleArray[NumberOfPoints] = circleArray[0];
}
Squares::~Squares()
{
}
void Squares::draw(sf::RenderTarget& target, sf::RenderStates states)const
{
	target.draw(circleArray, states);
}

