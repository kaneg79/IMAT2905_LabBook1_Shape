#include"SFML/Graphics.hpp"

class Elipse : public sf::Drawable
{
private:

	sf::VertexArray elipseArray;
	const int size = { 0 };
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	float theta = 0;
	float pi = { 3.14159265359 };
	float NumberOfPoints = { 30.0f };
	float incrementAngle = { 2 * pi / NumberOfPoints };

public:
	Elipse();
	Elipse(int xPosition, int yPosition, int radiusX, int radiusY);
	void createElipse();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	~Elipse();
};

