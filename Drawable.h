#pragma once
#include "raylib.h"
#include <vector>
#include "GameObject.h"
#include "TransformD.h"

using namespace std;

class Drawable
{
	TransformD* transform;
	Vector2 offsetPosition;
	Vector2 size;

	float depth;
	float rotation;

	static vector<Drawable*> drawableList;
	
public:
	Drawable();
	Drawable(Vector2 p, Vector2 s);
	Drawable(Vector2 p, Vector2 s, float r);
	Drawable(Vector2 p, Vector2 s, float r, float d);
	Drawable(Vector2 p, Vector2 s, float r, float d, TransformD* t);


	~Drawable();

	void InsertDrawableInList(Drawable* d);

	virtual void Draw() = 0;

	static void DrawAll();

	TransformD* getTransform();

	Vector2 getOffset();

	Vector2 getSize();

	float getRotation();

};

