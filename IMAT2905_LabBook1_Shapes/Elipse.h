#include"SFML/Graphics.hpp"

class Elipse : public sf::Drawable
{
private:
	int xCentre;
	int yCentre;
	int radiusX;
	int radiusY;
	float numberOfElipsePoints;
	sf::VertexArray elipseArray;


public:

	Elipse(int xPosition, int yPosition, int radiusX, int radiusY);
	void createElipse();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

