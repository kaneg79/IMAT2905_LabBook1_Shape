#include "Octagon.h"
Octagon::Octagon(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition)
{
	octagonArray.setPrimitiveType(sf::LineStrip);
	octagonArray.resize(NumberOfPoints + 1);

	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createOctagon();
}

void Octagon::createOctagon()
{
	float theta = 0;
	float pi = 3.141;
	float incrementAngle = 2 * pi / NumberOfPoints;

	for (int i = 0; i < NumberOfPoints; i++) {
		octagonArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		theta += incrementAngle;
		octagonArray[0].color = sf::Color::Red;
		octagonArray[1].color = sf::Color::Magenta;
		octagonArray[2].color = sf::Color::Cyan;
		octagonArray[3].color = sf::Color::Yellow;
		octagonArray[4].color = sf::Color::Red;
		octagonArray[5].color = sf::Color::Magenta;
		octagonArray[6].color = sf::Color::Cyan;
		octagonArray[7].color = sf::Color::Yellow;
	}
	octagonArray[NumberOfPoints] = octagonArray[0];
}
void Octagon::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(octagonArray);
}
