#include"SFML/Graphics.hpp"

class Hexagon : public sf::Drawable
{
private:

	sf::VertexArray hexagonArray;
	const int size = { 0 };
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	float theta = { 0.0f };
	float pi = { 3.14159265359f };
	float NumberOfPoints = { 6.0f };
	float incrementAngle = { 2 * pi  / NumberOfPoints};
public:
	Hexagon();
	Hexagon(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition);
	void createhexagon();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	~Hexagon();
};


