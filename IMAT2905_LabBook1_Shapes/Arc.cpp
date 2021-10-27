#include "Arc.h"


Arc::Arc(int xPosition, int yPosition, int centreOfXDiameter, int centreOfYDiameter) {
	xCentre = xPosition;
	yCentre = yPosition;
	radiusX = centreOfXDiameter;
	radiusY = centreOfYDiameter;
	numberOfArcPoints = 60;
	arcArray.setPrimitiveType(sf::LineStrip);
	arcArray.resize(numberOfArcPoints-1);
	createArc();
}


void Arc::createArc()
{
	int minTheta = 0;
	int maxTheta = 70;
	int incrementAngle = 360 / numberOfArcPoints;
	//float pi = 3.141;
	//float incrementAngle =2* pi / numberOfArcPoints;

	int i = 0;
	//arcArray[numberOfArcPoints] = arcArray[n];

do {
	arcArray[i].position = sf::Vector2f((xCentre + cos(minTheta)* radiusX), (yCentre + sin(minTheta)* radiusY));
	arcArray[i].color = sf::Color::White;
	arcArray[10].color = sf::Color::Cyan;
	minTheta += incrementAngle;
	i++;

} while (minTheta < maxTheta);

	

}
void Arc::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(arcArray, states);
}
