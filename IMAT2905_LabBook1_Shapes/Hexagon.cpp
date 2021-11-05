#include "Hexagon.h"
Hexagon::Hexagon():xPos(), yPos(), radiusX(), radiusY()
{
	hexagonArray.setPrimitiveType(sf::LinesStrip);
	hexagonArray.resize(size);//Array size initialised to zero
}
Hexagon::Hexagon(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition)
{
	hexagonArray.setPrimitiveType(sf::LineStrip);
	hexagonArray.resize(NumberOfPoints + 1);//Array is now resized to the number of points defined by the shape being drawn

	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createhexagon();// Initialises the create shape function
}

void Hexagon::createhexagon()
{
	for (int i = 0; i < NumberOfPoints; i++) 
	{	//Array is created here for plottting the vertices in 2d space
		hexagonArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		theta += incrementAngle;
		hexagonArray[0].color = sf::Color::Red;
		hexagonArray[1].color = sf::Color::Magenta;
		hexagonArray[2].color = sf::Color::Cyan;
		hexagonArray[3].color = sf::Color::Yellow;
		hexagonArray[4].color = sf::Color::Red;
		hexagonArray[5].color = sf::Color::Magenta;
	}
	hexagonArray[NumberOfPoints] = hexagonArray[0];//This is added along with the numberOfPoints+1, otherwise there will be a gap when the shapes are drawn
}

void Hexagon::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(hexagonArray);
}

Hexagon::~Hexagon()
{
}
