#include"SFML/Graphics.hpp"

	class Octagon : public sf::Drawable
{
private:
	int xCentre;
	int yCentre;
	int radiusX;
	int radiusY;
	float numberOfOctagonPoints;
	sf::VertexArray octagonArray;

public:

	Octagon(int xPosition, int yPosition, int radiusX, int radiusY);
	void createhexagon();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};
