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

TextureD::TextureD(Vector2 p, Vector2 s, string fp, Color tnt, float r) :Drawable(p, s, r) {
	Image img = LoadImage(fp.c_str());
	tTex = LoadTextureFromImage(img);
	UnloadImage(img);

	tTint = tnt;
}

TextureD::TextureD(Vector2 p, Vector2 s, Texture2D tex, Color tnt, float r ) :Drawable(p, s, r) {
	tTex = tex;
	tTint = tnt;
}

TextureD::TextureD(Vector2 p, Vector2 s, string fp, Color tnt, float r, float d) :Drawable(p, s, r, d) {
	Image img = LoadImage(fp.c_str());
	tTex = LoadTextureFromImage(img);
	UnloadImage(img);

	tTint = tnt;
}

TextureD::TextureD(Vector2 p, Vector2 s, Texture2D tex, Color tnt, float r, float d) :Drawable(p, s, r, d) {
	tTex = tex;
	tTint = tnt;
}

TextureD::TextureD(Vector2 p, Vector2 s, string fp, Color tnt, float r, float d, TransformD* t) :Drawable(p, s, r, d, t) {
	Image img = LoadImage(fp.c_str());
	tTex = LoadTextureFromImage(img);
	UnloadImage(img);

	tTint = tnt;
}

TextureD::TextureD(Vector2 p, Vector2 s, Texture2D tex, Color tnt, float r, float d, TransformD* t) :Drawable(p, s, r, d, t) {
	tTex = tex;
	tTint = tnt;
}

void TextureD::Draw() {
	TransformD* t = getTransform();
	Rectangle r2 = { t->position.x + getOffset().x,t->position.y + getOffset().y, t->size.x * getSize().x,t->size.y * getSize().y };
	Vector2 sizeAdded = Vector2{ t->size.x * getSize().x,t->size.y * getSize().y };
	DrawTexturePro(tTex, { 0, 0, float(tTex.width), float(tTex.height)}, r2, {float(sizeAdded.x/2 ),float(sizeAdded.y/2)}, getRotation() + t->rotation, tTint);
}