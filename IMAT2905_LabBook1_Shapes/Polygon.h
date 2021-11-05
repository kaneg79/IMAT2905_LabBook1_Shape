#include"SFML/Graphics.hpp"
class Polygon :public sf::Drawable
{
protected:
	//sf::VertexArray vArray;
	const int size = { 0 };
	const double pi = { 3.14159265359 };
	double incrementAngle = { 0 };
	float theta = { 0 };
	int xPos;
	int yPos;
	int radiusX;
	int radiusY;
	int NumberOfPoints{ 0 };

public:
	Polygon();
	Polygon(int xPosition, int yPosition, int radiusXpos, int radiusYpos);//Overload Constructor with valus passed for X and Y positions, and raduis X and Y positions
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const = 0;
	//Polygon(int num);
	~Polygon();
};

