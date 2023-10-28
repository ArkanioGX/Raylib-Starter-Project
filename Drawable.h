#pragma once
#include "raylib.h"
#include <vector>
#include "GameObject.h"

using namespace std;

class Drawable
{
<<<<<<< HEAD
	GameObject* gameObject;
	Vector2 offsetPosition;
	Vector2 size;
=======
	Vector2 Position;
	Vector2 Size;
>>>>>>> parent of cba29f9 (Dessin Texture Forme + ZDepth)

	static vector<Drawable*> DrawableList;
	
public:
	Drawable();
	Drawable(Vector2 pos);
	virtual void Draw() = 0;
<<<<<<< HEAD

	static void DrawAll();

	Vector2 getPos();

	Vector2 getOffset();

	Vector2 getSize();

=======
>>>>>>> parent of cba29f9 (Dessin Texture Forme + ZDepth)
};

