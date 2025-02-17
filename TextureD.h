#pragma once
#include "raylib.h"
#include "Drawable.h"
#include <string>

class TextureD : public Drawable
{
	Texture2D tTex;

	Color tTint;

public:
	TextureD();
	TextureD(Vector2 p, Vector2 s,string fp);
	TextureD(Vector2 p, Vector2 s, Texture2D tex);

	TextureD(Vector2 p, Vector2 s, string fp, Color tnt);
	TextureD(Vector2 p, Vector2 s, Texture2D tex, Color tnt);

	TextureD(Vector2 p, Vector2 s, string fp, Color tnt, float r);
	TextureD(Vector2 p, Vector2 s, Texture2D tex, Color tnt, float r);

	TextureD(Vector2 p, Vector2 s, string fp, Color tnt, float r, float d);
	TextureD(Vector2 p, Vector2 s, Texture2D tex, Color tnt, float r, float d);

	TextureD(Vector2 p, Vector2 s, string fp, Color tnt, float r, float d, TransformD* t);
	TextureD(Vector2 p, Vector2 s, Texture2D tex, Color tnt, float r, float d, TransformD* t);

	void Draw();
};

