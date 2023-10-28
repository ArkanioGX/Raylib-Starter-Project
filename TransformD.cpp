#include "TransformD.h"

TransformD::TransformD(){
	position = Vector2{ 0,0 };
	size = Vector2{ 1,1 };
	rotation = 0;
}
TransformD::TransformD(Vector2 p){
	position = p;
	size = Vector2{ 1,1 };
	rotation = 0;
}
TransformD::TransformD(Vector2 p, Vector2 s, float r) {
	position = p;
	size = s;
	rotation = r;
}

void TransformD::Move(Vector2 p) {
	position = Vector2{ position.x + p.x, position.y + p.y };
}
void TransformD::Move(float x, float y) {
	position = Vector2{ position.x + x, position.y + y };
}

void TransformD::SetPosition(Vector2 p) {
	position = Vector2{ p.x, p.y };
}
void TransformD::SetPosition(float x, float y) {
	position = Vector2{ x, y };
}

void TransformD::Rotate(float r) {
	rotation += r;
}

