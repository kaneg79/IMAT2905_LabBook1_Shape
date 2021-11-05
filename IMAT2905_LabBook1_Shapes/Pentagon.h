#pragma once
#include"SFML/Graphics.hpp"

class Pentagon : public sf::Drawable
{
private:
	/*All variables here have been initialised with pre set values, ready to use in the array
	*/
	sf::VertexArray pentagonArray;
	const int size = { 0 };
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	float theta = 0.0f;
	float pi = { 3.14159265359 };
	float NumberOfPoints = { 5.0f };//This is what the circle is divisible by.
	float incrementAngle = { 2 * pi / NumberOfPoints };// As 2 * pi gives us a full circle, we can use this to divide our circle by the number of points required
public:
	Pentagon();
	Pentagon(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition);	//Overload Constructor with valus passed for X and Y positions, and raduis X and Y positions
	void createPentagon();																// A create function has been added, for code clarity and easier readability
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;					// A draw function, for drawing objects, transformations etc
	~Pentagon();																		//Deconstructor

};



