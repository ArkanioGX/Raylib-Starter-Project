#include "TextureD.h"

TextureD::TextureD() :Drawable() {
	Image img = LoadImage("Images/PlaceholderTexture.png");
	tTex = LoadTextureFromImage(img);
	UnloadImage(img);

	tTint = WHITE;
}

TextureD::TextureD(Vector2 p, Vector2 s, string fp) :Drawable(p,s) {
	Image img = LoadImage(fp.c_str());
	tTex = LoadTextureFromImage(img);
	UnloadImage(img);

	tTint = WHITE;
}

TextureD::TextureD(Vector2 p, Vector2 s, Texture2D tex) :Drawable(p,s) {
	tTex = tex;
	tTint = WHITE;
}

TextureD::TextureD(Vector2 p, Vector2 s, string fp, Color tnt) :Drawable(p, s) {
	Image img = LoadImage(fp.c_str());
	tTex = LoadTextureFromImage(img);
	UnloadImage(img);

	tTint = tnt;
}

TextureD::TextureD(Vector2 p, Vector2 s, Texture2D tex, Color tnt) :Drawable(p, s) {
	tTex = tex;
	tTint = tnt;
}

TextureD::TextureD(Vector2 p, Vector2 s, string fp, Color tnt, float d) :Drawable(p, s, d) {
	Image img = LoadImage(fp.c_str());
	tTex = LoadTextureFromImage(img);
	UnloadImage(img);

	tTint = tnt;
}

TextureD::TextureD(Vector2 p, Vector2 s, Texture2D tex, Color tnt, float d ) :Drawable(p, s, d) {
	tTex = tex;
	tTint = tnt;
}

void TextureD::Draw() {
	DrawTextureEx(tTex, getPos(), getSize().y, getSize().x, tTint);
}