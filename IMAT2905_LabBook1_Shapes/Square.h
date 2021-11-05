#include<SFML/Graphics.hpp>

class Square :public sf::Drawable
{
private:

	sf::VertexArray squareArray;
	const int size = { 0 };
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	float theta = { 0.782f };
	float pi = { 3.14159265359 };
	float NumberOfPoints = { 4.0f };
	float incrementAngle = { 2 * pi / NumberOfPoints };

public:
	Square();
	Square(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition);
	void createSquare();
	void draw(sf::RenderTarget& target, sf::RenderStates states)const;
	~Square();
};
