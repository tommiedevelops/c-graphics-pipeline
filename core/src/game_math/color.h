#ifndef COLOR_H
#define COLOR_H
typedef struct Color Color;

Color color_create(uint8_t r, uint8_t g, uint8_t b, uint8_t a);
Color color_create(float r, float g, float b, float a);

#endif

