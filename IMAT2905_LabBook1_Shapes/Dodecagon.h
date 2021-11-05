#include"SFML/Graphics.hpp"

class Dodecagon : public sf::Drawable
{
private:

	sf::VertexArray dodecagonArray;
	const int size = { 0 };
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	float theta = 0;
	float pi = { 3.14159265359 };
	float NumberOfPoints = { 10.0f };
	float incrementAngle = { 2 * pi / NumberOfPoints };
public:
	Dodecagon();
	Dodecagon(int xPosition, int yPosition, int radiusX, int radiusY);//Overload Constructor with valus passed for X and Y positions, and raduis X and Y positions
	void createDodecagon();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	~Dodecagon();
};

