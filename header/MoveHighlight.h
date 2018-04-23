#pragma once
#include "UI.h"
class MoveHighlight : public UI {

private:
	int tSize;
	int posY;
	int posX;

public:

	MoveHighlight();
	MoveHighlight(int tileSize, sf::Texture* inTex,int  x,int y, Camera* cam);

	void update(KeyState &curState, Camera* cam);

	int getY();
	int getX();

};
