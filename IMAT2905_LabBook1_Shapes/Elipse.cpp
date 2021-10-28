#include "Elipse.h"

Elipse::Elipse(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition) 
{
	elipseArray.setPrimitiveType(sf::LineStrip);
	elipseArray.resize(NumberOfPoints + 1);
	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createElipse();
}

void Elipse::createElipse() {
	float theta = 0;
	float pi = 3.141;
	float incrementAngle = 2 * pi / NumberOfPoints;

	for (int i = 0; i < NumberOfPoints; i++) {
		elipseArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		elipseArray[i].color = sf::Color::Magenta;
		theta += incrementAngle;
	}
	elipseArray[NumberOfPoints] = elipseArray[0];
}

void Elipse::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(elipseArray);
}








