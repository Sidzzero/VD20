#include "WindowApp.h"
#include <iostream>

WindowApp::WindowApp():
	width(0),
	height(0)
{

}
void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void WindowApp::Init(std::string windowName,unsigned int Width, unsigned int Height, Game* Gameapp)
{
	width = Width;
	height = Height;
	gameApp = Gameapp;
	std::cout << "Initialising Window"<<std::endl;
	// glfw: initialize and configure
	// ------------------------------
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// glfw window creation
   // --------------------
	 window = glfwCreateWindow(width, height, windowName.c_str(), NULL, NULL);
	if (window == NULL)
	{
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return;
	}
	glfwMakeContextCurrent(window);
	glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

	//TODO: should we abstract it later...
	// glad: load all OpenGL function pointers
	// ---------------------------------------
	
	
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "Failed to initialize GLAD" << std::endl;
		return;
	}
	
	gameApp->Init();
}
void WindowApp::Loop()
{
	float fPreviousTime = 0;
	float fCurrentTime = 0;

	while (!glfwWindowShouldClose(window))
	{
		fCurrentTime = glfwGetTime();
		float delta = fCurrentTime - fPreviousTime;
		glfwPollEvents();

		gameApp->ProcessInput(delta);
		gameApp->Update(delta);
		gameApp->Render();

		glfwSwapBuffers(window);
		
	}
	//glfwTerminate();
	glfwDestroyWindow(window);
	std::cout <<"Closing down the LOOP"<<std::endl;
}

void WindowApp::Cleanup()
{

	std::cout <<"Cleaning up window..." << std::endl;
}
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
	// make sure the viewport matches the new window dimensions; note that width and 
	// height will be significantly larger than specified on retina displays.
	glViewport(0, 0, width, height);
}