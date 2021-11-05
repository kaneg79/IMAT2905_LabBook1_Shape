#include<SFML/Graphics.hpp>

class Triangle :public sf::Drawable
{
private:

	sf::VertexArray triangleArray;
	const int size = { 0 };
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	float theta = { 0.782f };
	float pi = { 3.14159265359 };
	float NumberOfPoints = { 3.0f };
	float incrementAngle = { 2 * pi / NumberOfPoints };
public:
	Triangle();
	Triangle(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition);
	void createTriangle();
	void draw(sf::RenderTarget& target, sf::RenderStates)const;
	~Triangle();
};

