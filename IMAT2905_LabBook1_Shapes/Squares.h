#pragma once
#include "Polygon.h"
class Squares : public Polygon
{
protected:
	sf::VertexArray circleArray;
	int NumberOfPoints = { 4 };

public:
	Squares();
	Squares(int xPosition, int yPosition, int radiusXpos, int radiusYpos);
	void createSquare();
	void draw(sf::RenderTarget& target, sf::RenderStates states)const override;
	~Squares();

};

