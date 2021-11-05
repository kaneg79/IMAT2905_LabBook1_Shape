#include "Pentagon.h"
Pentagon::Pentagon() :xPos(), yPos(), radiusX(), radiusY()
{
	pentagonArray.setPrimitiveType(sf::LinesStrip);
	pentagonArray.resize(size);
}
Pentagon::Pentagon(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition)
{
	pentagonArray.setPrimitiveType(sf::LineStrip);
	pentagonArray.resize(NumberOfPoints + 1);

	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createPentagon();
}

void Pentagon::createPentagon()
{
	for (int i = 0; i < NumberOfPoints; i++)
	{
		pentagonArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		theta += incrementAngle;
		pentagonArray[0].color = sf::Color::Red;
		pentagonArray[1].color = sf::Color::Magenta;
		pentagonArray[2].color = sf::Color::Cyan;
		pentagonArray[3].color = sf::Color::Yellow;
		pentagonArray[4].color = sf::Color::Red;
	}
	pentagonArray[NumberOfPoints] = pentagonArray[0];
}

void Pentagon::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(pentagonArray);
}

Pentagon::~Pentagon()
{
}
