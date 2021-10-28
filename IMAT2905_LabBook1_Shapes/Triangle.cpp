#include "Triangle.h"
Triangle::Triangle(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition)
{
	triangleArray.setPrimitiveType(sf::LineStrip);
	triangleArray.resize(NumberOfPoints+1);

	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createTriangle();
}
void Triangle::createTriangle()
{
	float theta = 0.524;
	float pi = 3.141;
	float incrementAngle = 2 * pi / NumberOfPoints;

	for (int i = 0; i < NumberOfPoints; i++) {
		triangleArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		theta += incrementAngle;
		triangleArray[0].color = sf::Color::Cyan;
		triangleArray[1].color = sf::Color::Magenta;
		triangleArray[2].color = sf::Color::Yellow;
	}
	triangleArray[NumberOfPoints] = triangleArray[0];
}

void Triangle::draw(sf::RenderTarget& target, sf::RenderStates states)const
{
	target.draw(triangleArray, states);
}