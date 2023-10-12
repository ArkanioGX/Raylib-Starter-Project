#pragma once
#include "raylib.h"
#include <vector>

using namespace std;

class Drawable
{
	Vector2 position;
	Vector2 size;

	float depth;

	static vector<Drawable*> drawableList;
	
public:
	Drawable();
	Drawable(Vector2 p, Vector2 s);
	Drawable(Vector2 p, Vector2 s, float d);

	~Drawable();

	void InsertDrawableInList(Drawable* d);

	virtual void Draw() = 0;

	static void DrawAll();

	Vector2 getPos();

	Vector2 getSize();

};

