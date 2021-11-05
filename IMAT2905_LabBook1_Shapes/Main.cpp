#include<SFML/Graphics.hpp>
#include"Circle.h"
#include"Elipse.h"
#include"Squares.h"
#include"Square.h"
#include"Dodecagon.h"
#include"Line.h"
#include"Dot.h"
#include"Triangle.h"
#include"Arc.h"
#include"Pentagon.h"
#include"Hexagon.h"
#include"Octagon.h"

#include<iostream>

using namespace std;
int main()

{
    sf::RenderWindow window(sf::VideoMode(1900, 1080), "IMAT2905_Lab_Book_1");
    window.setFramerateLimit(60);
    /*New instances of each class have been created here and positioned
    * on screen with the X and Y coordinates
    */
    Circle newCircle(200, 200, 120, 120);
    Elipse newElipse(300, 550, 120, 60);
    Square newSquare(400, 800, 100, 100);
    Squares newSquareInherited(900, 200, 100, 100);
    Dodecagon newDodecagon(750, 500, 120, 120);
    Line newLine(800,800,200,10);
    Dot newDot(sf::Vector2f(1400, 902), sf::Vector2f(1399, 902));
    Triangle newtriangle(1650, 550, 100, 100);
    Arc newArc(1600, 850, 80, 80);
    Pentagon newPentagon(100, 850, 90, 90);
    Hexagon newHexagon(1450, 150, 90, 90);
    Octagon newOctagon(1200, 600, 90, 90);


    while (window.isOpen())
    {

        
        sf::Event event; 
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)window.close();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))window.close();

            if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                 window.clear();
            }
         

        }
      /*Each instance has been sent for the window to draw
      */
       window.draw(newCircle);
       window.draw(newPentagon);
       window.draw(newElipse);
       window.draw(newSquare);
       window.draw(newSquareInherited);
       window.draw(newDodecagon);
       window.draw(newLine);
       window.draw(newDot);
       window.draw(newtriangle);
       window.draw(newArc);
       window.draw(newHexagon);
       window.draw(newOctagon);
       window.display();
       
    }

    return 0;
}