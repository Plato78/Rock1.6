#pragma once
#include "Player.h"
#include "settings.h"

class Player {
private:
	int score;
	sf::Sprite sprite;
	sf::Texture texture;
public:
	Player() : score(0) {
		texture.loadFromFile(player_file_name);
		sprite.setTexture(texture);
	}

	void update() {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
			score++;
		}
		if (score >= 100) {
			// Меняем картинку на вторую
			texture.loadFromFile(next_lvl_file_name);
	}
		if (score >= 200) {
			texture.loadFromFile(next_lvl2_file_name);
		}
		if (score >= 350) {
			texture.loadFromFile(next_lvl3_file_name);
		}
		if (score >= 400) {
			texture.loadFromFile(next_lvl4_file_name);
		}
		if (score >= 500) {
			texture.loadFromFile(next_lvl5_file_name);
		}
		if (score >= 600) {
			texture.loadFromFile(final_lvl_file_name);
		}
		if (score >= 666) {
			texture.loadFromFile(finalfinal_lvl_file_name);
		}
		if (score >= 700) {
			texture.loadFromFile(finalSUS_lvl_file_name);
		}
};

	void draw(sf::RenderWindow& window) {
		window.draw(sprite);
	}

	int getScore() {
		return score;
	}
};