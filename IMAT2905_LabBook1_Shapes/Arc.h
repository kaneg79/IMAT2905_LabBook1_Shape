#include "SFML/Graphics.hpp"
class Arc : public sf::Drawable
{
private:
	sf::VertexArray arcArray;
	const int size = { 0 };
	
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	float theta = { 0.0f };
	float pi = { 3.14159265359f };
	float NumberOfPoints = { 60.0f };
	float incrementAngle = { -1 * pi / NumberOfPoints };


public:
	Arc();//Default constructor
	Arc(int xPosition, int yPosition, int radiusXpos, int radiusYpos);					//Overload Constructor with valus passed for X and Y positions, and raduis X and Y positions
	void createArc();																	// A create function has been added, for code clarity and easier readability
	void draw(sf::RenderTarget& target, sf::RenderStates states)const override;			// A draw funnction, for drawing objects, transformations etc
	~Arc();																				//Deconstructor

};
