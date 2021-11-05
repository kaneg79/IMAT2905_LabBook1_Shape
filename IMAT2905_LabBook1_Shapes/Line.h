#include"SFML/Graphics.hpp"

class Line : public sf::Drawable
{
private:

	sf::VertexArray lineArray;
	const int size = { 0 };
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	float theta = {0.0f};
	float pi = { 3.14159265359f };
	float NumberOfPoints = {2.0f};
	float incrementAngle = 2 * pi / NumberOfPoints;
	

public:
	Line();
	Line(int xPosition, int yPosition, int radiusXPosition, int radiusYPosition);
	void createLine();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	~Line();
};
