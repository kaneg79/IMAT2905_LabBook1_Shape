#include "Triangle.h"
Triangle::Triangle() :xPos(), yPos(), radiusX(), radiusY()
{
	triangleArray.setPrimitiveType(sf::LinesStrip);
	triangleArray.resize(size);//Array size initialised to zero
}
Triangle::Triangle(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition)
{
	triangleArray.setPrimitiveType(sf::LineStrip);
	triangleArray.resize(NumberOfPoints+1);//Array is now resized to the number of points defined by the shape being drawn

	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createTriangle();// Initialises the create shape function
}
void Triangle::createTriangle()
{	//Array is created here for plottting the vertices in 2d space
	for (int i = 0; i < NumberOfPoints; i++) 
	{
		triangleArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		theta += incrementAngle;
		triangleArray[0].color = sf::Color::Cyan;
		triangleArray[1].color = sf::Color::Magenta;
		triangleArray[2].color = sf::Color::Yellow;
	}
	triangleArray[NumberOfPoints] = triangleArray[0];//This is added along with the numberOfPoints+1, otherwise there will be a gap when the shapes are drawn
}

void Triangle::draw(sf::RenderTarget& target, sf::RenderStates states)const
{
	target.draw(triangleArray, states);
}

Triangle::~Triangle()
{
}
