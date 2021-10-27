#include"SFML/Graphics.hpp"

class Hexagon : public sf::Drawable
{
private:
	int xCentre;
	int yCentre;
	int radiusX;
	int radiusY;
	float numberOfHexagonPoints;
	sf::VertexArray hexagonArray;

public:

	Hexagon(int xPosition, int yPosition, int radiusX, int radiusY);
	void createhexagon();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};


