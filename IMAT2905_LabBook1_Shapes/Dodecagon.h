#include"SFML/Graphics.hpp"

class Dodecagon : public sf::Drawable
{
private:

	sf::VertexArray dodecagonArray;
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	int NumberOfPoints = 10;

public:

	Dodecagon(int xPosition, int yPosition, int radiusX, int radiusY);
	void createDodecagon();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

