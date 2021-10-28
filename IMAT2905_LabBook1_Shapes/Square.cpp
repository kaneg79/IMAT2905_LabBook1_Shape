#include "Square.h"
Square::Square(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition)
{
	squareArray.setPrimitiveType(sf::LineStrip);
	squareArray.resize(NumberOfPoints+1);

	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createSquare();
}


void Square::createSquare()
{
	float theta = 0.782;
	float pi = 3.141;
	float incrementAngle = 2 * pi / NumberOfPoints;

	for (int i = 0; i < NumberOfPoints; i++) {
		squareArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		theta += incrementAngle;
		squareArray[i].color = sf::Color::Cyan;
	}
	squareArray[NumberOfPoints] = squareArray[0];
}

void Square::draw(sf::RenderTarget& target, sf::RenderStates states)const
{
	target.draw(squareArray, states);

}