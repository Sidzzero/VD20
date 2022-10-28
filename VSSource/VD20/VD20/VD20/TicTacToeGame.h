#ifndef  TIC_TAC_TOE_GAME
#define TIC_TAC_TOE_GAME

#include <BaseGame.h>

class TicTacToeGame :
    public BaseGame
{
  public:
    void Init() override;
    void ProcessInput(float dt) override;
    void Update(float dt) override;
    void Render() override;
};

#endif // ! TicTacToeGame
