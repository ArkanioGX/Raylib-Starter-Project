#pragma once

class Drawable;
class GameObject
{
private:
	Drawable* drawable;
	Vector2 position;
public:
	Vector2 getPosition();
};

