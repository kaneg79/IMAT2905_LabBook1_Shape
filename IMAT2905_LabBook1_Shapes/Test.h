#include"SFML/Graphics.hpp"

class Test:public sf::Drawable
{
private:

	sf::VertexArray arcAttempt;
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	int NumberOfPoints = 60;

public:

	Test();
	Test(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition, int numOfP);
	void createArcAttempt();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	~Test();
};

