/*A GameState object is an object that should contain 
all the game info for a particular frame.

Currently it contains a list for all the objects that need to be drawn to the screen, 
and a struct for the keys being pressed
*/
 
#pragma once
#include <list>
#include <SFML/Graphics.hpp>

struct KeyState {

	bool lmb;
	bool rmb;

	bool a;
	bool d;
	bool w;
	bool s;

	bool space;
	bool lshift;
	

};

class GameState{

private:

	//list of sprites to display to the screen
	std::list<sf::Sprite>* spriteList;

	bool currentPlayer;

	//TileMap level;

	//struct of keys currently held down
	KeyState keys;


public:
	GameState();
	~GameState();

	std::list<sf::Sprite>* & getSprites();
	//std::list<UI>* & getUIElements();

	KeyState & getKeys();

	void endTurn();
};