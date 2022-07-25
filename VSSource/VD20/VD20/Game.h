#ifndef GAME_H
#define GAME_H


/// <summary>
/// A Game Application where logics for particular game will sit.
/// Need to see if the virtual setup is good praticse according to C++ lords or not !
/// </summary>
class Game
{
public:
	Game(unsigned int width, unsigned int height);
	virtual ~Game();

	bool Keys[1024];
	unsigned int Width, Height;

	virtual void Init();
	// game loop
	virtual void ProcessInput(float dt);
	virtual void Update(float dt);
	virtual void Render();

};

#endif

