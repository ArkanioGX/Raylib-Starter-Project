#include "raylib.h"
#include "Shape.h"
#include "TextureD.h"
#include "GameObject.h"
#include <iostream>

using namespace std;

int main() {
    const int screenWidth = 500;
    const int screenHeight = 500;
    
    cout << "Hello World" << endl;

    InitWindow(screenWidth, screenHeight, "Raylib Gaming!");
    SetTargetFPS(60);

    Shape* Square = new Shape(Vector2{ 245,175 }, Vector2{ 10,150 },ShapeType::Rectangle , RAYWHITE, 0,10);
    Shape* Ellipse = new Shape(Vector2{175,250}, Vector2{25,25}, ShapeType::Ellipse, RAYWHITE);
    Shape* Line = new Shape(Vector2{ 300,275 }, Vector2{ 350,225 }, ShapeType::Line, RAYWHITE,0,-5);

    TextureD* PH = new TextureD(Vector2{ 250,175 }, Vector2{ 100,50 }, "Images/PlaceholderTexture.png");

    
    TextureD* PHC2 = new TextureD(Vector2{ 175,325 }, Vector2{50,50}, "Images/PlaceholderTexture.png", BLUE);
    //TextureD* PHC3 = new TextureD(Vector2{ 300,300 }, Vector2{ 3.125 ,0 }, "Images/PlaceholderTexture.png", GREEN,0,30);

    TransformD* tGo2 = new TransformD(Vector2{ 250, 325 });
    TextureD* texGo2 = new TextureD(Vector2{0}, Vector2{ 50,50 }, "Images/PlaceholderTexture.png", RED, 0, 20, tGo2);
    GameObject* GO2 = new GameObject(tGo2, texGo2);

    TransformD* tGo = new TransformD(Vector2{ 325,325 });
    TextureD* texGo = new TextureD(Vector2{0,0}, Vector2{50,50}, "Images/PlaceholderTexture.png", GREEN, 0, 30, tGo);
    GameObject* GO = new GameObject(tGo,texGo);

    while (!WindowShouldClose()) {
        GO2->getTransform()->SetPosition(250 + (cos(PI * (fmod(GetTime(),2)) - 1) / 2) * 100, 325);
        GO->getTransform()->Rotate(1);

        BeginDrawing();
        ClearBackground(BLACK);
        Drawable::DrawAll();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}