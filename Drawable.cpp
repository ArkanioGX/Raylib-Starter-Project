#include "Drawable.h"

Drawable::Drawable() {
	Position = Vector2{ 0, 0 };
	Size = Vector2{ 1,1 };

	DrawableList.push_back(this);
}