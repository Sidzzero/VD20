#ifndef GAME_H
#define GAME_H


class Game
{
public:
	Game(unsigned int width, unsigned int height);
	~Game();

	bool Keys[1024];
	unsigned int Width, Height;

	void Init();
	// game loop
	void ProcessInput(float dt);
	void Update(float dt);
	void Render();

};

#endif

