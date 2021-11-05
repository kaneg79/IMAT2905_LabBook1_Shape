#include "Dodecagon.h"
Dodecagon::Dodecagon() :xPos(), yPos(), radiusX(), radiusY()
{
	dodecagonArray.setPrimitiveType(sf::LinesStrip);
	dodecagonArray.resize(size);//Array size initialised to zero
}
Dodecagon::Dodecagon(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition)
{
	dodecagonArray.setPrimitiveType(sf::LineStrip);
	dodecagonArray.resize(NumberOfPoints + 1);//Array is now resized to the number of points defined by the shape being drawn

	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createDodecagon();// Initialises the create shape function
}

void Dodecagon::createDodecagon()
{
	for (int i = 0; i < NumberOfPoints; i++) 
	{	//Array is created here for plottting the vertices in 2d space
		dodecagonArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		theta += incrementAngle;
		dodecagonArray[0].color = sf::Color::Red;
		dodecagonArray[1].color = sf::Color::Magenta;
		dodecagonArray[2].color = sf::Color::Cyan;
		dodecagonArray[3].color = sf::Color::Yellow;
		dodecagonArray[4].color = sf::Color::Red;
		dodecagonArray[5].color = sf::Color::Magenta;
		dodecagonArray[6].color = sf::Color::Cyan;
		dodecagonArray[7].color = sf::Color::Yellow;
	}
		dodecagonArray[NumberOfPoints] = dodecagonArray[0];//This is added along with the numberOfPoints+1, otherwise there will be a gap when the shapes are drawn
}
void Dodecagon::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(dodecagonArray);
}

Dodecagon::~Dodecagon()
{
}
