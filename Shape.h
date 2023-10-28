#pragma once
#include "Drawable.h"
#include "ShapeType.h"

class Shape : public Drawable 
{
	Color shColor;

	ShapeType shType;

public:
	Shape();
	Shape(Vector2 p, Vector2 s,ShapeType st, Color c);
	Shape(Vector2 p, Vector2 s, ShapeType st, Color c, float r);
	Shape(Vector2 p, Vector2 s, ShapeType st, Color c, float r, float d);
	Shape(Vector2 p, Vector2 s, ShapeType st, Color c, float r, float d, TransformD* t);

	Color getColor();

	void Draw();
};

