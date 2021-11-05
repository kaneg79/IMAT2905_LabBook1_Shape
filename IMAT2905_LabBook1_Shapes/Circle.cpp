#include "Circle.h"

Circle::Circle() :xPos(), yPos(), radiusX(), radiusY()
{
	circleArray.setPrimitiveType(sf::LinesStrip);
	circleArray.resize(size);//Array size initialised to zero
}

Circle::Circle(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition)
{
	circleArray.setPrimitiveType(sf::LineStrip);
	circleArray.resize(NumberOfPoints+1);//Array is now resized to the number of points defined by the shape being drawn

	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createCircle();// Initialises the create shape function
}

void Circle::createCircle()
{	//Array is created here for plottting the vertices in 2d space
	for (int i = 0; i < NumberOfPoints; i++) 
	{
		circleArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		theta += incrementAngle;
		circleArray[i].color = sf::Color::Yellow;
	}
	circleArray[NumberOfPoints] = circleArray[0];//This is added along with the numberOfPoints+1, otherwise there will be a gap when the shapes are drawn
}

void Circle::draw(sf::RenderTarget& target, sf::RenderStates states)const
{
	target.draw(circleArray, states);
}

Circle::~Circle()
{
}
