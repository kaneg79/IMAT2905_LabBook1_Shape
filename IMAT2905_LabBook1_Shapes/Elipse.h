#include"SFML/Graphics.hpp"

class Elipse : public sf::Drawable
{
private:

	sf::VertexArray elipseArray;
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	float NumberOfPoints = 60;
	


public:

	Elipse(int xPosition, int yPosition, int radiusX, int radiusY);
	void createElipse();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

