// sandbox.cpp : This file contains the 'main' function. Program execution begins and ends there.
// NEED TO LINK TO Actual head file also
// I have directed the include files and lib files in this project also!


#include <iostream>
#include "WindowApp.h"

#include "app_tictactoe.h"
int main()
{
    std::cout << "Welocme to Sandbox!\n";
    WindowApp* winApp = nullptr;
    WindowApp* winEditorApp = nullptr;
    winApp = new WindowApp();
    winEditorApp = new WindowApp();
    Game* game = new app_tictactoe(800, 600);
    game->Init();

    winApp->Init("VD Engine", 800, 700,game);
    winEditorApp->Init("VD_Engine_Editor",800,700,game);
    winApp->Loop();
    winApp->Cleanup();
    std::cout << "Starting window 2..";
    winEditorApp->Loop();
    winEditorApp->Cleanup();
    std::cout << "Press something to continue...";
    getchar();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
