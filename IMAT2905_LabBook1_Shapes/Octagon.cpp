#include "Octagon.h"
Octagon::Octagon(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition) {
	xCentre = xPosition;
	yCentre = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	numberOfOctagonPoints = 8;
	octagonArray.setPrimitiveType(sf::LineStrip);
	octagonArray.resize(numberOfOctagonPoints + 1);
	createhexagon();
}

void Octagon::createhexagon() {
	float theta = 0;
	//int incrementAngle = 360 / numberOfPoints;
	float pi = 3.141;
	float incrementAngle = 2 * pi / numberOfOctagonPoints;

	for (int i = 0; i < numberOfOctagonPoints; i++) {
		octagonArray[i].position = sf::Vector2f((xCentre + cos(theta) * radiusX), (yCentre + sin(theta) * radiusY));
		octagonArray[0].color = sf::Color::Red;
		octagonArray[1].color = sf::Color::Magenta;
		octagonArray[2].color = sf::Color::Cyan;
		octagonArray[3].color = sf::Color::Yellow;
		octagonArray[4].color = sf::Color::Red;
		octagonArray[5].color = sf::Color::Magenta;
		octagonArray[6].color = sf::Color::Cyan;
		octagonArray[7].color = sf::Color::Yellow;
		theta += incrementAngle;
	}
	octagonArray[numberOfOctagonPoints] = octagonArray[0];
}

void Octagon::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(octagonArray);
}
