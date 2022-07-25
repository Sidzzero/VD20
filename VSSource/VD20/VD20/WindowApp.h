#ifndef WINDOW_APP_H
#define WINDOW_APP_H
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <string>

#include "Game.h"

class WindowApp
{
public:
	GLFWwindow* window;
	Game* gameApp;
	unsigned int width,height;
	WindowApp();
	void Init(std::string windowName, unsigned int Width, unsigned int Height,Game * Gameapp);
	void Loop();
	void Cleanup();
};
#endif
