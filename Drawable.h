#pragma once
#include "raylib.h"
#include <vector>

using namespace std;

class Drawable
{
	Vector2 Position;
	Vector2 Size;

	static vector<Drawable*> DrawableList;
	
public:
	Drawable();
	Drawable(Vector2 pos);
	virtual void Draw() = 0;
};

