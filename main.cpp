#include "raylib.h"
#include <iostream>

using namespace std;

int main() {

    
    cout << "Hello World" << endl;

    InitWindow(500, 500, "Raylib Gaming!");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}