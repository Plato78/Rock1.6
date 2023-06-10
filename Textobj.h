#pragma once
#include "settings.h"
#include "Player.h"

class Score {
private:
	int score=0;
	sf::Font font;
	sf::Text text;

public:

Score(sf::Vector2f pos) {
font.loadFromFile("DS-DIGIB.ttf");
text.setFont(font);
text.setCharacterSize(CHAR_SIZE);
text.setFillColor(sf::Color::White);
text.setPosition(pos);
}

void updateText(int score) {
text.setString("Score: " + std::to_string(score)); 
}

	void draw(sf::RenderWindow& window ) {
		window.draw(text);
	}
};