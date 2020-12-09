#include "Game.h"
#include "Deck.h"
#include "Card.h"
#include "Player.h"
#include "Global.h"
//#include <vld.h>

using namespace std;

class Exception {

public:
	Exception(const string& msg) : msg(msg) {}
	~Exception() {}
	string getMessage() const { return(msg); }

private:
	string msg;
};

void f() {
	throw(Exception("Unable to open file"));
}

int main()
{
	
	Game game;
	Deck deck;
	Player player;
	Global global;
	Card card;

	
	//system("mode 650");
	//global.intro();
	
	try {
		
		game.menu(deck, player, game);
		
	}
	catch (Exception e) {
		cout << "You threw an exception: " << e.getMessage() << endl;
		system("pause");
	}
	
	

	return 0;
}
