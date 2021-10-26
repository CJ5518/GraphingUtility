#include "SFML/Graphics.hpp"

#include "imgui.h"
#include "imgui-SFML.h"


int main() {
	sf::RenderWindow window(sf::VideoMode(800,600), "Le bon titre");
	window.setFramerateLimit(60);
	

	sf::Event event;
	sf::Clock deltaClock;
	bool running = true;
	while (running) {
		while (window.pollEvent(event)) {
			
			if (event.type == sf::Event::Closed) {
				running = false;
			}
			// catch the resize events
			if (event.type == sf::Event::Resized) {
				// update the view to the new size of the window
				sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
				window.setView(sf::View(visibleArea));
			}
		}
		
		

		window.clear(sf::Color(15, 81, 94));
		
		window.display();
	}
	window.close();

	return 0;
}