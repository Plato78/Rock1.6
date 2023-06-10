#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
class Weed {
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	Weed(sf::Vector2f pos, std::string fileName) {
		texture.loadFromFile(fileName);
		sprite.setTexture(texture);
		sprite.setPosition(pos);
	}

	void draw(sf::RenderWindow& window) {
		window.draw(sprite);
	}
};

class startScreen {
private:
	sf::Texture texture;
	sf::Sprite sprite;
public:
	startScreen(sf::Vector2f pos, std::string fileName) {
		texture.loadFromFile(fileName);
		sprite.setTexture(texture);
		sprite.setPosition(pos);
	}
	void removeImageOnSpace(int score = 0) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
			texture.loadFromFile(""); 
			sprite.setTexture(texture);
		}
	}
	void draw(sf::RenderWindow& window) {
		window.draw(sprite);
	}
};
