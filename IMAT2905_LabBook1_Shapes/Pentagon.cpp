#include "Pentagon.h"
Pentagon::Pentagon() :xPos(), yPos(), radiusX(), radiusY()
{
	pentagonArray.setPrimitiveType(sf::LinesStrip);
	pentagonArray.resize(size);//Array size initialised to zero
}
Pentagon::Pentagon(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition)
{
	pentagonArray.setPrimitiveType(sf::LineStrip);
	pentagonArray.resize(NumberOfPoints + 1);//Array is now resized to the number of points defined by the shape being drawn

	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createPentagon();// Initialises the create shape function
}

void Pentagon::createPentagon()
{	//Array is created here for plottting the vertices in 2d space
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
	pentagonArray[NumberOfPoints] = pentagonArray[0];//This is added along with the numberOfPoints+1, otherwise there will be a gap when the shapes are drawn
}

void Pentagon::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(pentagonArray);
}

Pentagon::~Pentagon()
{
}
