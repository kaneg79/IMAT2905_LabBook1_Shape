#include"SFML/Graphics.hpp"

class Octagon : public sf::Drawable
{
private:

	sf::VertexArray octagonArray;
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	int NumberOfPoints = 8;
	
public:

	Octagon(int xPosition, int yPosition, int radiusX, int radiusY);
	void createOctagon();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};
