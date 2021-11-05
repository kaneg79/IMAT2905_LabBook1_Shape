#include "Elipse.h"

Elipse::Elipse() :xPos(), yPos(), radiusX(), radiusY()
{
	elipseArray.setPrimitiveType(sf::LinesStrip);
	elipseArray.resize(size);//Array size initialised to zero
}

Elipse::Elipse(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition)
{
	elipseArray.setPrimitiveType(sf::LineStrip);
	elipseArray.resize(NumberOfPoints + 1);//Array is now resized to the number of points defined by the shape being drawn
	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createElipse();// Initialises the create shape function
}
void Elipse::createElipse() 
{	//Array is created here for plottting the vertices in 2d space
	for (int i = 0; i < NumberOfPoints; i++) 
	{
		elipseArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		elipseArray[i].color = sf::Color::Magenta;
		theta += incrementAngle;
	}
	elipseArray[NumberOfPoints] = elipseArray[0];//This is added along with the numberOfPoints+1, otherwise there will be a gap when the shapes are drawn
}

void Elipse::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(elipseArray);
}

Elipse::~Elipse()
{
}








