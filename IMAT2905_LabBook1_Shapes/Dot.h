#include"SFML/Graphics.hpp"

class Dot : public sf::Drawable
{

private:

	const int size = {2};
	sf::VertexArray dotArray;

public:

	Dot();
	Dot(sf::Vector2f point1,sf::Vector2f point2);
	void draw();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};
