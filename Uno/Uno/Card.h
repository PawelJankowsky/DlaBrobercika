#pragma once

class Card
{
private:


public:
	
	enum class Color { BLUE, GREEN, RED, YELLOW, WILD };
	Card();
	Color color{};
	int value{};
	Card(Color color, int value);

	~Card();
};


