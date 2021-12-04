// C++_Random_Map_Generation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "raylib.h"
#include "TileMap.h"
#include "Walker.h"

int main()
{
    // Initialization
//--------------------------------------------------------------------------------------
    int screenWidth = 800;
    int screenHeight = 440;

    InitWindow(screenWidth, screenHeight, "Map Generator");

    SetTargetFPS(60);

    srand((unsigned int)time(NULL));

    TileMap map(40, 22, 20, 20);

    map.InitMap(DARKGREEN);

    Walker W1(map, DARKGREEN, 6, 6, 300);
    W1.Move();
    Walker W2(map, GOLD, 10, 10, 200);
    W2.Move();
    Walker W3(map, DARKBLUE, 40, 20, 60);
    W3.Move();

    //Walker W5(map, RED, 20, 11, 1);
    


    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        //W5.Move();
        map.Draw();

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    CloseWindow();
}