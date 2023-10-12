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
	Shape(Vector2 p, Vector2 s, ShapeType st, Color c, float d);

	Color getColor();

	void Draw();
};

