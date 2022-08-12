#include "app_tictactoe.h"

app_tictactoe::app_tictactoe(unsigned int width, unsigned int height):Game(width,height)
{
	testSpriteRender = nullptr;
}


void app_tictactoe::Init()
{
	std::cout << " App_TicTacToe Initialized" << std::endl;
	ResourceManager::LoadShader("shaders/simple_tex.vert", "shaders/simple_tex.frag", "sh_simpleTex");
//	ResourceManager::LoadTexture("Resources/Images/container.jpg", "tex_container");
//	ResourceManager::LoadTexture("Resources/Images/tiger.jpg", "tex_tiger");
//	auto textTOTest = ResourceManager::GetTexture("tex_container");
	//testSpriteRender = new SpriteRenderer(*textTOTest);
}
