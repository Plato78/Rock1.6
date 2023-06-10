
#include <SFML/Graphics.hpp>
#include "settings.h"
#include "Grass.h"
#include "Player.h"
#include "Textobj.h"
#include "game.h"
using namespace sf;

int main()
{
	// Объект, который, собственно, является главным окном приложения
	RenderWindow window(VideoMode(width, height), WINDOW_TITLE);
	window.setFramerateLimit(FPS);
	Player player;
	startScreen start(Vector2f{500.f,0.f},"image.png");
	Weed weed(Vector2f{ 0.f,0.f }, "Weed1.jpg");
	Score score(Vector2f{ 1400.f,10.f });
	Game game;
	// Главный цикл приложения. Выполняется, пока открыто окно
	while (window.isOpen())
	{
		// Обрабатываем очередь событий в цикле
		Event event;
		while (window.pollEvent(event))
		{
			// Пользователь нажал на «крестик» и хочет закрыть окно?
			if (event.type == Event::Closed)
				// тогда закрываем его
				window.close();
		}
		player.update();
		score.updateText(player.getScore());
		game.update();
		// Отрисовка окна 
		window.clear();
		weed.draw(window);
		score.draw(window);
		player.draw(window);
		game.draw(window);
		start.draw(window);
		window.display();
	}

	return 0;
}