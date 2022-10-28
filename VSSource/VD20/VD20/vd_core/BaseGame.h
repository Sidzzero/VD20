#pragma once
#include "Core/glfw/includes/glfw3.h"
class BaseGame
{
public:

	//These needs to be implemented in game
	void ProcessInput(float dt);
	void Update(float dt);
	void Render();

};

