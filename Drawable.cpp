#include "Drawable.h"

vector<Drawable*> Drawable::drawableList = {  };

Drawable::Drawable() {
	position = Vector2{ 0, 0 };
	size = Vector2{ 1,1 };
	depth = 0;

	InsertDrawableInList(this);
}

Drawable::Drawable(Vector2 p, Vector2 s) {
	position = p;
	size = s;
	depth = 0;

	InsertDrawableInList(this);
}

Drawable::Drawable(Vector2 p, Vector2 s, float d) {
	position = p;
	size = s;
	depth = d;

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

Vector2 Drawable::getPos() {return position;}
Vector2 Drawable::getSize() { return size; }