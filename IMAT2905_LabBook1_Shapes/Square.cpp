#include "Square.h"
Square::Square() :xPos(), yPos(), radiusX(), radiusY()
{
	squareArray.setPrimitiveType(sf::LinesStrip);
	squareArray.resize(size);//Array size initialised to zero
}
Square::Square(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition)
{
	squareArray.setPrimitiveType(sf::LineStrip);
	squareArray.resize(NumberOfPoints +1);//Array is now resized to the number of points defined by the shape being drawn

	xPos = xPosition;
	yPos = yPosition;
	radiusX = radiusXPosition;
	radiusY = radiusYPosition;
	createSquare();// Initialises the create shape function
}


void Square::createSquare()
{	//Array is created here for plottting the vertices in 2d space
	for (int i = 0; i < NumberOfPoints; i++) {
		squareArray[i].position = sf::Vector2f((xPos + cos(theta) * radiusX), (yPos + sin(theta) * radiusY));
		theta += incrementAngle;
		squareArray[i].color = sf::Color::Cyan;
	}
	squareArray[NumberOfPoints] = squareArray[0];//This is added along with the numberOfPoints+1, otherwise there will be a gap when the shapes are drawn
}

void Square::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(squareArray, states);
}

Square::~Square()
{
}

