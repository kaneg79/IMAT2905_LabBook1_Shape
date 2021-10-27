#include "Circle2.h"

Circle2::Circle2(int xPosition, int yPosition, int radiusCentre, int totalPoints) {
	xCentre = xPosition;
	yCentre = yPosition;
	radius = radiusCentre;
	numOfPoints = totalPoints;
	circle2Array.setPrimitiveType(sf::LineStrip);
	circle2Array.resize(numOfPoints);
	createCircle2();
}
Circle2::Circle2(int xPosition, int yPosition, int radiusCentre) {
	xCentre = xPosition;
	yCentre = yPosition;
	radius = radiusCentre;
	numOfPoints = 60;
	circle2Array.setPrimitiveType(sf::LineStrip);
	circle2Array.resize(numOfPoints);
	createCircle2();
}

void Circle2::createCircle2() {
	int theta = 0;
	float pi = 3.141;
	float incrementAngle = 360 / numOfPoints;

	for (int i = 0; i < numOfPoints; i++) {
		circle2Array[i].position = sf::Vector2f((xCentre + cos(theta) * radius), (yCentre + sin(theta) * radius));
		circle2Array[i].color = sf::Color::Cyan;
		theta += incrementAngle;
	}
	//circle2Array[numOfPoints] = circle2Array[0];
}


void Circle2::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(circle2Array, states);
}




