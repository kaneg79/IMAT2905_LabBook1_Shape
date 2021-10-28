#include<SFML/Graphics.hpp>

class Triangle :public sf::Drawable
{
private:

	sf::VertexArray triangleArray;
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	int NumberOfPoints = 3;

public:

	Triangle(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition);
	void createTriangle();
	void draw(sf::RenderTarget& target, sf::RenderStates)const;
};

