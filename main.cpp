#include "raylib.h"
#include "Shape.h"
#include "TextureD.h"
#include <iostream>

using namespace std;

int main() {

    
    cout << "Hello World" << endl;

    InitWindow(500, 500, "Raylib Gaming!");
    SetTargetFPS(60);

    Shape* Square = new Shape(Vector2{ 245,175 }, Vector2{ 10,150 },ShapeType::Rectangle , RAYWHITE, 10);
    Shape* Ellipse = new Shape(Vector2{175,250}, Vector2{25,25}, ShapeType::Ellipse, RAYWHITE);
    Shape* Line = new Shape(Vector2{ 300,275 }, Vector2{ 350,225 }, ShapeType::Line, RAYWHITE,-5);

    TextureD* PH = new TextureD(Vector2{ 225,150 }, Vector2{ 3.125 ,0 }, "Images/PlaceholderTexture.png");

    TextureD* PHC1 = new TextureD(Vector2{ 225,300 }, Vector2{ 3.125 ,0 }, "Images/PlaceholderTexture.png", RED,20);
    TextureD* PHC2 = new TextureD(Vector2{ 150,300 }, Vector2{ 3.125 ,0 }, "Images/PlaceholderTexture.png", BLUE);
    TextureD* PHC3 = new TextureD(Vector2{ 300,300 }, Vector2{ 3.125 ,0 }, "Images/PlaceholderTexture.png", GREEN,30);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        Drawable::DrawAll();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}