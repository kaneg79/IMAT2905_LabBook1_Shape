#pragma once
#include"SFML/Graphics.hpp"

class Pentagon : public sf::Drawable
{
private:

	sf::VertexArray pentagonArray;
	const int size = { 0 };
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	float theta = 0.0f;
	float pi = { 3.14159265359 };
	float NumberOfPoints = { 5.0f };
	float incrementAngle = { 2 * pi / NumberOfPoints };
public:
	Pentagon();
	Pentagon(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition);
	void createPentagon();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	~Pentagon();
};



