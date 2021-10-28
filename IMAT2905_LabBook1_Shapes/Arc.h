#include"SFML/Graphics.hpp"

class Arc:public sf::Drawable
{
private:

	sf::VertexArray arcArray;
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	int NumberOfPoints = 60;

public:

	Arc(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition, int numOfP);
	void createArc();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	
};

