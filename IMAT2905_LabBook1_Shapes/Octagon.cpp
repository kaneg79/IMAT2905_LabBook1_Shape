#include "Octagon.h"
Octagon::Octagon() :xPos(), yPos(), radiusX(), radiusY()
{
	octagonArray.setPrimitiveType(sf::LinesStrip);
	octagonArray.resize(size);//Array size initialised to zero
}
Octagon::Octagon(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition)
{
	octagonArray.setPrimitiveType(sf::LineStrip);
	octagonArray.resize(NumberOfPoints + 1);//Array is now resized to the number of points defined by the shape being drawn

	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createOctagon();// Initialises the create shape function
}

void Octagon::createOctagon()
{	//Array is created here for plottting the vertices in 2d space
	for (int i = 0; i < NumberOfPoints; i++) 
	{
		octagonArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		theta += incrementAngle;
		octagonArray[0].color = sf::Color::Red;
		octagonArray[1].color = sf::Color::Magenta;
		octagonArray[2].color = sf::Color::Cyan;
		octagonArray[3].color = sf::Color::Yellow;
		octagonArray[4].color = sf::Color::Red;
		octagonArray[5].color = sf::Color::Magenta;
		octagonArray[6].color = sf::Color::Cyan;
		octagonArray[7].color = sf::Color::Yellow;
	}
	octagonArray[NumberOfPoints] = octagonArray[0];//This is added along with the numberOfPoints+1, otherwise there will be a gap when the shapes are drawn
}
void Octagon::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(octagonArray);
}

Octagon::~Octagon()
{
}
