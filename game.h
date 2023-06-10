#pragma once
#include "Player.h"
#include "settings.h"
#include "Textobj.h"


class Game {
private:
	int score;
	Player player;
	sf::Sprite sprite;
	sf::Texture texture;
public:
	Game() {
	}
	
	void update() {
		player.update();
	}
	void draw(sf::RenderWindow& window) {
		player.draw(window);
	}

};

