#include "Hexagon.h"
Hexagon::Hexagon(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition) 
{
	hexagonArray.setPrimitiveType(sf::LineStrip);
	hexagonArray.resize(NumberOfPoints + 1);

	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createhexagon();
}

void Hexagon::createhexagon()
{
	float theta = 0;
	float pi = 3.141;
	float incrementAngle = 2 * pi / NumberOfPoints;

	for (int i = 0; i < NumberOfPoints; i++) {
		hexagonArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		hexagonArray[0].color = sf::Color::Red;
		hexagonArray[1].color = sf::Color::Magenta;
		hexagonArray[2].color = sf::Color::Cyan;
		hexagonArray[3].color = sf::Color::Yellow;
		hexagonArray[4].color = sf::Color::Red;
		hexagonArray[5].color = sf::Color::Magenta;
		theta += incrementAngle;
	}
	hexagonArray[NumberOfPoints] = hexagonArray[0];
}

void Hexagon::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(hexagonArray);
}
