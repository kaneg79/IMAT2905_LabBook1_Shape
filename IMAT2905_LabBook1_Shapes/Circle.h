#include "SFML/Graphics.hpp"
	class Circle : public sf::Drawable
	{


	private:
		

		sf::VertexArray circleArray;
		const int size;
		const float pi = {3.141};
		float increment = 2 * pi / numCircPoints;
		int numCircPoints = {60 };
		int xCentre;
		int yCentre;
		int xPosition;
		int yPosition;
		int theta = 0;
		int radius = { 100 };


	public:

		//int radius = { 100 };
		//int numCircPoints = { 60 };
		//float theta = { 0.f };
		//float increment = 2 * pi / numCircPoints;
		
		Circle(); //Initialising constructor for the circle class
		//Circle(int xPosition, int yPosition, int raduis);
		Circle(int xPosition, int yPosition, int raduis, int numCircPoints);
		//~Circle();
		
		void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	};


