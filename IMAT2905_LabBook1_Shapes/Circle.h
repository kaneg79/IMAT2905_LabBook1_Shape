#include "SFML/Graphics.hpp"
	class Circle : public sf::Drawable
	{


	private:
		

		sf::VertexArray circleArray;
		const int size;
		const float pi = 3.141;
		float increment = 2 * pi / numCircPoints;
		int numCircPoints;
		int xCentre;
		int yCentre;
		int xPosition;
		int yPosition;
		int theta = 0;
		float radius = { 200 };
		

	public:

		
		Circle(); //Initialising constructor for the circle class
		
		Circle(int xPosition, int yPosition, int raduis, int numCircPoints);
		//~Circle();
		
		void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	};


