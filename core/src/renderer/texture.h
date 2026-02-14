#ifndef TEXTURE_H
#define TEXTURE_H

typedef struct Vec4f Vec4f;

typedef struct Texture {
	int width;
	int height;
	Vec4f* map;
} Texture;

Texture* texture_create(int width, int height);
void     texture_set_map_value(Texture* tex, int x, int y, Vec4f value);
void     texture_destroy(Texture* tex);
Vec4f    texture_sample(Texture* tex, float u, float v);

#endif
