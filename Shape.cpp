#include "Shape.h"

Shape::Shape():Drawable() {
	shColor = RAYWHITE;
	shType = ShapeType::Rectangle;
}

Shape::Shape(Vector2 p, Vector2 s, ShapeType st, Color c) :Drawable(p,s) {
	shType = st;
	shColor = c;
}

Shape::Shape(Vector2 p, Vector2 s, ShapeType st, Color c, float r) :Drawable(p, s, r) {
	shType = st;
	shColor = c;
}

Shape::Shape(Vector2 p, Vector2 s, ShapeType st, Color c, float r, float d) :Drawable(p, s,r , d) {
	shType = st;
	shColor = c;
}

Shape::Shape(Vector2 p, Vector2 s, ShapeType st, Color c, float r, float d, TransformD* t) :Drawable(p, s, r, d, t) {
	shType = st;
	shColor = c;
}


void Shape::Draw() {
	TransformD* t = getTransform();
	switch (shType) {
	case ShapeType::Rectangle:
		DrawRectangleV(Vector2{t->position.x + getOffset().x,t->position.y+getOffset().y}, Vector2{ t->size.x + getSize().x,t->size.y + getSize().y }, shColor);
		break;
	case ShapeType::Ellipse:
		DrawEllipse((t->position.x + getOffset().x), (t->position.y + getOffset().y), (t->size.x*getSize().x), (t->size.y * getSize().y), shColor);
		break;
	case ShapeType::Line:
		DrawLineV(Vector2{ t->position.x + getOffset().x,t->position.y + getOffset().y }, Vector2{ t->size.x + getSize().x,t->size.y + getSize().y }, shColor);
		break;
	default:

		break;
	}
}

Color Shape::getColor() {
	return shColor;
}