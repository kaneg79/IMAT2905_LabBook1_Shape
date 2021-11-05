//#include "Arcs.h"
//Arcs::Arcs() :Polygon(xPos, yPos, radiusX, radiusY)
//{
//	arcArray.setPrimitiveType(sf::LinesStrip);
//	arcArray.resize(size);
//}
//Arcs::Arcs(int xPosition, int yPosition, int radiusXpos, int radiusYpos) : Polygon(xPosition, yPosition, radiusXpos, radiusYpos)
//{
//	arcArray.setPrimitiveType(sf::LinesStrip);
//	arcArray.resize(NumberOfPoints);
//	xPos = xPosition;
//	yPos = yPosition;
//	radiusX = radiusXpos;
//	radiusY = radiusYpos;
//	createArc();
//
//}
//void Arcs::createArc()
//{
//	double incrementAngle = -1 * pi / NumberOfPoints;
//
//	for (int i = 0; i < NumberOfPoints; i++) 
//	{
//		arcArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
//		theta += incrementAngle;
//		arcArray[i].color = sf::Color::Cyan;
//	}
//
//}
//
//void Arcs::draw(sf::RenderTarget& target, sf::RenderStates states) const
//{
//	target.draw(arcArray, states);
//}
//
//Arcs::~Arcs()
//{
//}
