#include "SFML/Graphics.hpp"
class Arc : public sf::Drawable
{
private:
	/*All variables here have been initialised with pre set values, ready to use in the array
	*/
	sf::VertexArray arcArray;
	const int size = { 0 };
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	float theta = { 0.0f };
	float pi = { 3.14159265359f };
	float NumberOfPoints = { 60.0f }; //This is what the circle is divisible by.
	float incrementAngle = { -1 * pi / NumberOfPoints };// As 2 * pi gives us a full circle, we can use this to divide our circle by the number of points required


public:
	Arc();//Default constructor
	Arc(int xPosition, int yPosition, int radiusXpos, int radiusYpos);					//Overload Constructor with valus passed for X and Y positions, and raduis X and Y positions
	void createArc();																	// A create function has been added, for code clarity and easier readability
	void draw(sf::RenderTarget& target, sf::RenderStates states)const override;			// A draw funnction, for drawing objects, transformations etc
	~Arc();																				//Deconstructor

};
