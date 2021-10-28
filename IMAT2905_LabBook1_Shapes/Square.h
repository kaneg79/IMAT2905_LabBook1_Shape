#include<SFML/Graphics.hpp>

class Square :public sf::Drawable
{
private:

	sf::VertexArray squareArray;
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	int NumberOfPoints = 4;

public:

	Square(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition);
	void createSquare();
	void draw(sf::RenderTarget& target, sf::RenderStates states)const;
	
};
