#pragma once
#include "Drawable.h"
class Shape : public Drawable 
{
	Color shColor;

	enum ShapeType{Ellipse, Rectangle, Line};

	ShapeType shType;

public:
	Shape();

	Color getColor();

	void Draw() {
		switch(shType)
	}
};

