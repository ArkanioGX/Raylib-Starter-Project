#pragma once
#include "raylib.h"
class TransformD
{
public :
	TransformD();
	TransformD(Vector2 p);
	TransformD(Vector2 p, Vector2 s, float r);

	Vector2 position;
	Vector2 size;
	float rotation;

	void Move(Vector2 p);
	void Move(float x, float y);

	void SetPosition(Vector2 p);
	void SetPosition(float x, float y);

	void Rotate(float r);
};

