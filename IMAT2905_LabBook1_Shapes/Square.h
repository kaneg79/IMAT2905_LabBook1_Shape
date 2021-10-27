#include<SFML/Graphics.hpp>
	class Square : public sf::Drawable
{

private:

	const float size = 5;
	sf::VertexArray squareArray;

public:

	Square();
	Square(sf::Vector2f point1, sf::Vector2f point2, sf::Vector2f point3, sf::Vector2f point4, sf::Vector2f point5);
	void draw();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};