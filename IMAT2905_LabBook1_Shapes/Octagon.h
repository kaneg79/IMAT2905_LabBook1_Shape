#include"SFML/Graphics.hpp"

class Octagon : public sf::Drawable
{
private:

	sf::VertexArray octagonArray;
	const int size = { 0 };
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	float theta = 0;
	float pi = { 3.14159265359 };
	float NumberOfPoints = { 8 };
	float incrementAngle = { 2 * pi / NumberOfPoints };
public:
	Octagon();
	Octagon(int xPosition, int yPosition, int radiusX, int radiusY);
	void createOctagon();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	~Octagon();
};
