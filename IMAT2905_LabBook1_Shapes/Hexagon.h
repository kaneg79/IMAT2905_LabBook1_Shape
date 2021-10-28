#include"SFML/Graphics.hpp"

class Hexagon : public sf::Drawable
{
private:

	sf::VertexArray hexagonArray;
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	float NumberOfPoints = 6;
	
public:

	Hexagon(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition);
	void createhexagon();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};


