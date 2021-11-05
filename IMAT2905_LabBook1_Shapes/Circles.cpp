//#include "Circles.h"
//Circles::Circles() :Polygon(xPos, yPos, radiusX, radiusY)
//{
//	circleArray.setPrimitiveType(sf::LinesStrip);
//	circleArray.resize(size);
//}
//Circles::Circles(int xPosition, int yPosition, int radiusXpos, int radiusYpos) : Polygon(xPosition, yPosition, radiusXpos, radiusYpos)
//{
//	circleArray.setPrimitiveType(sf::LinesStrip);
//	circleArray.resize(NumberOfPoints + 1);
//	xPos = xPosition;
//	yPos = yPosition;
//	radiusX = radiusXpos;
//	radiusY = radiusYpos;
//	createCircles();
//
//}
//
//void Circles::createCircles()
//{
//	double incrementAngle = 2 * pi / NumberOfPoints;
//
//	for (int i = 0; i < NumberOfPoints; i++) {
//		circleArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
//		theta += incrementAngle;
//		circleArray[i].color = sf::Color::Magenta;
//	}
//	circleArray[NumberOfPoints] = circleArray[0];
//}
//void Circles::draw(sf::RenderTarget& target, sf::RenderStates states)const
//{
//	target.draw(circleArray, states);
//}
//
//Circles::~Circles()
//{
//}
