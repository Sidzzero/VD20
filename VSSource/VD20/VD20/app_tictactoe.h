#ifndef  APP_TICTACTOE_H
#define APP_TICTACTOE_H
#include "Game.h"

#include <stdio.h>
#include <iostream>
class app_tictactoe : public  Game
{
public:
	app_tictactoe(unsigned int width , unsigned int height);
	virtual void Init();
};
#endif // ! APP_TICTACTOE_H

