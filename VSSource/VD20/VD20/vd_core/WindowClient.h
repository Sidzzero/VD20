#ifndef WINDOW_CLIENT
#define WINDOW_CLIENT

#include <iostream>
#include "BaseGame.h"

#include "glad.h"
#include "Core/glfw/includes/glfw3.h"



class WindowClient
{
public :
	WindowClient(BaseGame *game,int width,int height);
	void Run();
	void Cleanup();
	bool IsInitialized;

private:
	BaseGame* game;
	int width, height;
	GLFWwindow* window;
};

#endif // ! WINDOW_CLIENT