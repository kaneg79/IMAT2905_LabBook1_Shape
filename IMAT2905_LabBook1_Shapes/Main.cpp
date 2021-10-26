#include<SFML/Graphics.hpp>
#include"Circle.h"

int main()

{
    
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");



    Circle newCircle(300,300,100,60);

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
       window.draw(newCircle);
       
        window.display();
        
    }

    return 0;
}