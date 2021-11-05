#include<SFML/Graphics.hpp>

class Circle:public sf::Drawable
{
private:

	sf::VertexArray circleArray;
	const int size = { 0 };
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	float theta = 0;
	float pi = { 3.14159265359 };
	float NumberOfPoints = { 60.0f };
	float incrementAngle = { 2 * pi / NumberOfPoints };
public:
	Circle();
	Circle(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition);
	void createCircle();
	void draw(sf::RenderTarget& target, sf::RenderStates)const;
	~Circle();

	
};
