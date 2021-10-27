#include<SFML/Graphics.hpp>
class Triangle: public sf::Drawable
{

private:

		const float size = 4;
		sf::VertexArray triangleArray;

public:

	Triangle();
	Triangle(sf::Vector2f point1, sf::Vector2f point2, sf::Vector2f point3, sf::Vector2f point4);
	void draw();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

