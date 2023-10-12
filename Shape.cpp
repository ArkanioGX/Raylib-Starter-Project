#include "Shape.h"

Shape::Shape():Drawable() {
	shColor = BLACK;
	shType = ShapeType::Rectangle;
}

Shape::Shape(Vector2 p, Vector2 s, ShapeType st, Color c) :Drawable(p,s) {
	shType = st;
	shColor = c;
}

Shape::Shape(Vector2 p, Vector2 s, ShapeType st, Color c, float d) :Drawable(p, s, d) {
	shType = st;
	shColor = c;
}


void Shape::Draw() {
	switch (shType) {
	case ShapeType::Rectangle:
		DrawRectangleV(getPos(), getSize(), shColor);
		break;
	case ShapeType::Ellipse:
		DrawEllipse(getPos().x, getPos().y, getSize().x, getSize().y, shColor);
		break;
	case ShapeType::Line:
		DrawLineV(getPos(), getSize(), shColor);
		break;
	default:

		break;
	}
}

Color Shape::getColor() {
	return shColor;
}