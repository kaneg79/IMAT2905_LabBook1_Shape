#include<SFML/Graphics.hpp>
#include"Circle.h"
#include"Elipse.h"
#include"Square.h"
#include"Dodecagon.h"
#include"Line.h"
#include"Dot.h"
#include"Triangle.h"
#include"Arc.h"
#include"Hexagon.h"
#include"Octagon.h"

#include<iostream>
using namespace std;
int main()

{
    sf::RenderWindow window(sf::VideoMode(1900, 1080), "Better Code");
    window.setFramerateLimit(60);
    sf::Clock clock;
    sf::Time deltaTime;

   
 
    Circle newCircle(200, 200, 120, 120);
    Elipse newElipse(300, 800, 120, 60);
    Square newSquare(900, 200, 100, 100);
    Dodecagon newDodecagon(650, 500, 120, 120);
    Line newLine(sf::Vector2f(700, 700), sf::Vector2f(950, 950));
    Dot newDot(sf::Vector2f(1400, 902), sf::Vector2f(1399, 902));
    Triangle newtriangle(1650, 550, 100, 100);
    Arc newArc(1600, 850, 80, 80, 60);
    Hexagon newHexagon(1450, 150, 90, 90);
    Octagon newOctagon(1200, 600, 90, 90);

    
    float xVelocity = {1};
    float yVelocity = {1};
    sf::Transform transform;
    //transform.rotate(45, sf::Vector2f(10,10));
    //float rotation = transform.rotate(0,0);
    
    sf::RenderStates states;
    states.transform = transform;

    while (window.isOpen())
    {

        
        sf::Event event; 
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)window.close();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))window.close();

            if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                //sf::Vector2f(xVelocity, yVelocity) / deltaTime;
               // newArc.xPosition.rotate* deltaTime;
                transform.transformPoint(10.f, 10.f);
                //transform.scale(4.f, 1.6f);
                sf::Transform;transform.rotate(15, sf::Vector2f(10, 0));
      
                window.clear();
            }
         

        }
       
        deltaTime = clock.restart();
       
       
       window.draw(newCircle);
       window.draw(newElipse);
       window.draw(newSquare, transform);
       window.draw(newDodecagon, transform);
       window.draw(newLine);
       window.draw(newDot);
       window.draw(newtriangle);
       window.draw(newArc);
       window.draw(newHexagon);
       window.draw(newOctagon);
       window.display();
       //sf::Time elapsed = clock.getElapsedTime();
       cout << deltaTime.asSeconds() << endl;
    }

    return 0;
}