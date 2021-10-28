#include<SFML/Graphics.hpp>

class Circle:public sf::Drawable
{
private:

	sf::VertexArray arcAttempt;
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	int NumberOfPoints = 60;

public:

	Circle(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition);
	void createCircle();
	void draw(sf::RenderTarget& target, sf::RenderStates)const;//If I add const to this I get a linker error, this works fine on all the other header files
	
};
