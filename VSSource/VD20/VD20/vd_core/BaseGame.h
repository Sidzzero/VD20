#ifndef  BASE_GAME
#define BASE_GAME
#include <string>
class BaseGame
{
public:

	virtual void  Init()=0;
	//These needs to be implemented in game
	virtual void ProcessInput(float dt) =0;
	virtual void Update(float dt)=0;
	virtual void Render() = 0;


	std::string Name;

};

#endif // ! 