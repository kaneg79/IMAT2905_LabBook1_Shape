#include "Hexagon.h"
Hexagon::Hexagon(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition) {
	xCentre = xPosition;
	yCentre = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	numberOfHexagonPoints = 6;
	hexagonArray.setPrimitiveType(sf::LineStrip);
	hexagonArray.resize(numberOfHexagonPoints + 1);
	createhexagon();
}

void Hexagon::createhexagon() {
	float theta = 0;
	//int incrementAngle = 360 / numberOfPoints;
	float pi = 3.141;
	float incrementAngle = 2 * pi / numberOfHexagonPoints;

	for (int i = 0; i < numberOfHexagonPoints; i++) {
		hexagonArray[i].position = sf::Vector2f((xCentre + cos(theta) * radiusX), (yCentre + sin(theta) * radiusY));
		hexagonArray[0].color = sf::Color::Red;
		hexagonArray[1].color = sf::Color::Magenta;
		hexagonArray[2].color = sf::Color::Cyan;
		hexagonArray[3].color = sf::Color::Yellow;
		hexagonArray[4].color = sf::Color::Red;
		hexagonArray[5].color = sf::Color::Magenta;
		theta += incrementAngle;
	}
	hexagonArray[numberOfHexagonPoints] = hexagonArray[0];
}

void Hexagon::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(hexagonArray);
}
