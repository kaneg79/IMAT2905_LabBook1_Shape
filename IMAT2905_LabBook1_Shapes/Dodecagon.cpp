#include "Dodecagon.h"
Dodecagon::Dodecagon(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition)
{
	dodecagonArray.setPrimitiveType(sf::LineStrip);
	dodecagonArray.resize(NumberOfPoints + 1);

	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createDodecagon();
}

void Dodecagon::createDodecagon()
{
	float theta = 0;
	float pi = 3.141;
	float incrementAngle = 2 * pi / NumberOfPoints;

	for (int i = 0; i < NumberOfPoints; i++) {
		dodecagonArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		theta += incrementAngle;
		dodecagonArray[0].color = sf::Color::Red;
		dodecagonArray[1].color = sf::Color::Magenta;
		dodecagonArray[2].color = sf::Color::Cyan;
		dodecagonArray[3].color = sf::Color::Yellow;
		dodecagonArray[4].color = sf::Color::Red;
		dodecagonArray[5].color = sf::Color::Magenta;
		dodecagonArray[6].color = sf::Color::Cyan;
		dodecagonArray[7].color = sf::Color::Yellow;
	}
		dodecagonArray[NumberOfPoints] = dodecagonArray[0];
}
void Dodecagon::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(dodecagonArray);
}
