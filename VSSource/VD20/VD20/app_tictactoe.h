#ifndef  APP_TICTACTOE_H
#define APP_TICTACTOE_H
#include "Game.h"

#include <stdio.h>
#include <iostream>

#include "ResourceManager.h"
#include "SpriteRenderer.h"
class app_tictactoe : public  Game
{
public:
	app_tictactoe(unsigned int width , unsigned int height);
	virtual void Init();
	SpriteRenderer *testSpriteRender;
};
#endif // ! APP_TICTACTOE_H

