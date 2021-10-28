#include "Test.h"
#include<iostream>
using namespace std;

Test::Test(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition, int numOfP)
{
	arcAttempt.setPrimitiveType(sf::LineStrip);
	arcAttempt.resize(NumberOfPoints);

	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createArcAttempt();
}


void Test::createArcAttempt()
{
	float theta = 0;
	float pi = 3.141;
	float incrementAngle = -1 * pi / NumberOfPoints;

	for (int i = 0; i < NumberOfPoints; i++) {
		arcAttempt[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		arcAttempt[i].color = sf::Color::Red;
		theta += incrementAngle;
	}
	
}





















	//int minTheta = 0;
	//int maxTheta = 70;
	//int incrementAngle = 180 / NumberOfPoints;
	//float pi = 3.141;
	//float incrementAngle = 2 * pi / numberOfArcPoints;
	//int totalPoints =  maxTheta / incrementAngle;
	//cout << "Total points" << totalPoints << endl;
	//int i = 0;
	//arcAttempt[NumberOfPoints] = arcAttempt[i];

	/*for (int i = 0; i < NumberOfPoints; i++) {
		arcAttempt[i].position = sf::Vector2f((xPos + cos(minTheta) * radiusX), (yPos + sin(minTheta) * radiusX));
		arcAttempt[i].color = sf::Color::Cyan;
		minTheta += incrementAngle;
		cout << "min theta is:" << minTheta << endl;
	}*/

	//while (minTheta < maxTheta)
	//{
	//	do
	//	{
	//		arcAttempt[i].position = sf::Vector2f((xPos + cos(minTheta) * radiusXPosition), (yPos + sin(minTheta) * radiusYPosition));

	//		minTheta += incrementAngle;

	//		i++;
	//	} while (true);
	//}	//while (minTheta < maxTheta)
	//{
	//	do
	//	{
	//		arcAttempt[i].position = sf::Vector2f((xPos + cos(minTheta) * radiusXPosition), (yPos + sin(minTheta) * radiusYPosition));

	//		minTheta += incrementAngle;

	//		i++;
	//	} while (true);
	//}
	/*do {
		arcAttempt[i].position = sf::Vector2f((xPos + cos(minTheta) * radiusX), (yPos + sin(minTheta) * radiusY));

		minTheta += incrementAngle;

		i++;

	} while (minTheta < maxTheta);*/

	//arcArray.resize(totalPoints+1);
	//int arcSize = sizeof(arcArray);

	//for (int i = 0; i < arcSize; i++)
	//{
	//
	//	cout << "x position is" << arcArray[i].position.x << "Y position is:" << arcArray[i].position.y << endl;
	//}
	


void Test::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(arcAttempt, states);
}

Test::~Test()
{
}
