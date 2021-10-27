#include"SFML/Graphics.hpp"

class Line : public sf::Drawable
{

private:

	const float size = 2;
	sf::VertexArray lineArray;

public:

	Line();
	Line(sf::Vector2f point1, sf::Vector2f point2);
	void draw();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};