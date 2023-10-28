#include "GameObject.h"
#include "Shape.h"
#include "TextureD.h"
#include "TransformD.h"

GameObject::GameObject() {
	transform = new TransformD;
	drawable = new Shape;
}
GameObject::GameObject(TransformD* t, Drawable* d) {
	transform = t;
	drawable = d;
}

TransformD* GameObject::getTransform()
{
	return transform;
}
