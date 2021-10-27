#include<SFML/Graphics.hpp>
#include"Circle.h"
#include"Circle2.h"
#include"Elipse.h"
#include"Arc.h"
#include"Triangle.h"
#include"Square.h"
#include<iostream>

using namespace std;
int main()

{
    
    sf::RenderWindow window(sf::VideoMode(1900, 1080), "Its Broken");
    window.setFramerateLimit(60);
    //sf::Clock clock;

    //Circle newCircle(850,590,150,60);
    Circle2 newCircle2(300, 300, 120, 60);
    Elipse newElipse(600, 500, 100, 60);
    Arc newArc(900, 800, 80, 80);
    Triangle newTriangle (sf::Vector2f(800, 150), sf::Vector2f(650,350),sf::Vector2f(950, 350),sf::Vector2f(800, 150));
    Square newSquare(sf::Vector2f(100, 500), sf::Vector2f(100, 700), sf::Vector2f(300, 700), sf::Vector2f(300, 500), (sf::Vector2f(100, 500)));
    //sf::CircleShape shape(100.f);
    //shape.setFillColor(sf::Color::Green);
    //sf::VertexArray rectang(sf::Quads, 4);
    //sf::VertexArray triangle(sf::Triangles, 3);
    //sf::RectangleShape rectang;
    //sf::Vector2f(rect)

    //// define the position of the quad's points
    //rectang[0].position = sf::Vector2f(10, 10);
    //rectang[1].position = sf::Vector2f(100, 10);
    //rectang[2].position = sf::Vector2f(100, 100);
    //rectang[3].position = sf::Vector2f(10, 100);
    // define the color of the triangle's points
    //rectang[0].color = sf::Color::Red;
    //rectang[1].color = sf::Color::Blue;
    //rectang[2].color = sf::Color::Green;
   // rectang[3].color = sf::Color::Yellow;

   

    //float xVelocity = {1};
    //float yVelocity = {1};

  

    while (window.isOpen())
    {
        sf::Event event; 
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)window.close();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))window.close();
        }

        //rectang[0].position.x += xVelocity;
        //rectang[2].position.x += yVelocity;
        window.clear();
       window.draw(newElipse);
       window.draw(newCircle2);
       window.draw(newArc);
       window.draw(newTriangle);
       window.draw(newSquare);
        window.display();
        //sf::Time elapsed = clock.getElapsedTime();
        //cout << elapsed.asSeconds() << endl;
    }

    return 0;
}