#include "Elipse.h"



Elipse::Elipse(int xPosition, int yPosition, int radiusX, int radiusY, int pointTotal) {
	xCentre = xPosition;
	yCentre = yPosition;
	numberOfElipsePoints = pointTotal;
	elipseArray.setPrimitiveType(sf::LineStrip);
	elipseArray.resize(numberOfElipsePoints);
	createElipse();
}

Elipse::Elipse(int xPosition, int yPosition, int centreOfXDiameter, int centreOfYDiameter) {
	xCentre = xPosition;
	yCentre = yPosition;
	radiusX = centreOfXDiameter;
	radiusY = centreOfYDiameter;
	numberOfElipsePoints = 60;
	elipseArray.setPrimitiveType(sf::LineStrip);
	elipseArray.resize(numberOfElipsePoints+1);
	createElipse();
}


void Elipse::createElipse() {
	float theta = 0;
	//int incrementAngle = 360 / numberOfPoints;
	float pi = 3.141;
	float incrementAngle = 2 * pi / numberOfElipsePoints;

	for (int i = 0; i < numberOfElipsePoints; i++) {
		elipseArray[i].position = sf::Vector2f((xCentre + cos(theta) * radiusX), (yCentre + sin(theta) * radiusY));
		elipseArray[i].color = sf::Color::Red;
		theta += incrementAngle;
	}
	elipseArray[numberOfElipsePoints] = elipseArray[0];
}

void Elipse::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(elipseArray);
}








