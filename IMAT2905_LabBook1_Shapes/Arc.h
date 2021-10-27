#include"SFML/Graphics.hpp"

	class Arc : public sf::Drawable
{


private:
	int xCentre;
	int yCentre;
	int radiusX;
	int radiusY;
	float numberOfArcPoints;
	sf::VertexArray arcArray;




public:



	Arc(int xPosition, int yPosition, int radiusX, int radiusY);
	void createArc();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

