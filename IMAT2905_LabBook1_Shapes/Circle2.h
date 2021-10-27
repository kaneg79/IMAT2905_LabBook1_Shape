#include"SFML/Graphics.hpp"
class Circle2 : public sf::Drawable
{


private:
	int xCentre;
	int yCentre;
	int radius;
	int numOfPoints;
	sf::VertexArray circle2Array;




public:


	Circle2();
	Circle2(int xPosition, int yPosition, int radiusCentre);
	Circle2(int xPosition, int yPosition, int radiusCentre, int numOfPoints);
	~Circle2();
	void makeCircle2();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};



