#pragma once

class TransformD;
class Drawable;
class GameObject
{
private:
	Drawable* drawable;
	TransformD* transform;
public:
	GameObject();
	GameObject(TransformD* t, Drawable* d);

	TransformD* getTransform();
};

