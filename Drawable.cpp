#include "Drawable.h"

vector<Drawable*> Drawable::drawableList = {  };

Drawable::Drawable() {
	offsetPosition = Vector2{ 0, 0 };
	size = Vector2{ 1,1 };
	depth = 0;
	transform = new TransformD;

	InsertDrawableInList(this);
}

Drawable::Drawable(Vector2 p, Vector2 s) {
	offsetPosition = p;
	size = s;
	depth = 0;
	transform = new TransformD;

	InsertDrawableInList(this);
}

Drawable::Drawable(Vector2 p, Vector2 s, float r) {
	offsetPosition = p;
	size = s;
	rotation = r;
	transform = new TransformD;

	InsertDrawableInList(this);
}

Drawable::Drawable(Vector2 p, Vector2 s, float r, float d) {
	offsetPosition = p;
	size = s;
	rotation = r;
	depth = d;
	transform = new TransformD;

	InsertDrawableInList(this);
}

Drawable::Drawable(Vector2 p, Vector2 s, float r, float d, TransformD* t) {
	offsetPosition = p;
	size = s;
	rotation = r;
	depth = d;
	transform = t;

	InsertDrawableInList(this);
}

void Drawable::InsertDrawableInList(Drawable* d) {
	if (drawableList.size() != 0) {
		int i = 0;
		while (i < drawableList.size() && drawableList[i]->depth > d->depth ) {
			i++;
		}
		if (drawableList.size() == i) {
			drawableList.push_back(d);
		}
		else {
			auto it = drawableList.begin() + i;
			drawableList.insert(it, d);
		}
	}
	else {
		drawableList.push_back(d);
	}
}

Drawable::~Drawable() {
	drawableList.erase(std::remove(drawableList.begin(), drawableList.end(), this), drawableList.end());
}

void Drawable::DrawAll() {
	for (Drawable* d : drawableList)
	{
		d->Draw();
	}
}

Vector2 Drawable::getOffset() {return offsetPosition;}
TransformD* Drawable::getTransform() { return transform; }
Vector2 Drawable::getSize() { return size; }
float Drawable::getRotation() { return rotation; }