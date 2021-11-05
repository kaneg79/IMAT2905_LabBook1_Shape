#include "Square.h"
Square::Square() :xPos(), yPos(), radiusX(), radiusY()
{
	squareArray.setPrimitiveType(sf::LinesStrip);
	squareArray.resize(size);
}
Square::Square(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition)
{
	squareArray.setPrimitiveType(sf::LineStrip);
	squareArray.resize(NumberOfPoints +1);

	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createSquare();
}


void Square::createSquare()
{
	for (int i = 0; i < NumberOfPoints; i++) {
		squareArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		theta += incrementAngle;
		squareArray[i].color = sf::Color::Cyan;
	}
	squareArray[NumberOfPoints] = squareArray[0];
}

void Square::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(squareArray, states);
}

Square::~Square()
{
}

