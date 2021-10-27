#include "Arc.h"
#include<iostream>
using namespace std;

Arc::Arc(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition):size() {
	xCentre = xPosition;
	yCentre = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	numberOfArcPoints = 60;
	arcArray.setPrimitiveType(sf::LineStrip);
	arcArray.resize(12);
	createArc();
}


void Arc::createArc()
{
	int minTheta = 0;
	int maxTheta = 70;
	int incrementAngle = 360 / numberOfArcPoints;
	//float pi = 3.141;
	//float incrementAngle = 2 * pi / numberOfArcPoints;
	//int totalPoints =  maxTheta / incrementAngle;
	//cout << "Total points" << totalPoints << endl;
	int i = 0;
	//arcArray[numberOfArcPoints] = arcArray[n];
/*
	for (int i = 0; i < numberOfArcPoints; i++) {
		arcArray[i].position = sf::Vector2f((xCentre + cos(minTheta) * radiusX), (yCentre + sin(minTheta) * radiusY));
		arcArray[i].color = sf::Color::Cyan;
		minTheta += incrementAngle;
		cout << "min theta is:" << minTheta << endl;
	}
*/
do{
	arcArray[i].position = sf::Vector2f((xCentre + cos(minTheta)* radiusX), (yCentre + sin(minTheta)* radiusY));
	
	minTheta += incrementAngle;
	
	i++;
	
} while (minTheta < maxTheta);

//arcArray.resize(totalPoints+1);
//int arcSize = sizeof(arcArray);

//for (int i = 0; i < arcSize; i++)
//{
//
//	cout << "x position is" << arcArray[i].position.x << "Y position is:" << arcArray[i].position.y << endl;
//}
	arcArray[0].color = sf::Color::White;
	arcArray[1].color = sf::Color::Cyan;
	arcArray[2].color = sf::Color::Red;
	arcArray[3].color = sf::Color::Magenta;
	arcArray[4].color = sf::Color::Cyan;
	arcArray[5].color = sf::Color::Yellow;
	arcArray[6].color = sf::Color::Red;

}
void Arc::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(arcArray, states);
}
