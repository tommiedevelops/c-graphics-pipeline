#include "error_log.h"

#include <stdint.h>

typedef struct Color {
	uint32_t value;
} Color;

Color color_create(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
{
	if(r < 0 || g < 0 || b < 0 || a < 0)
	{
		LOG_ERROR("Invalid color (No Negative Values). Returning black");
		return (Color){ 0 };
	}	

	if(r > 255 || g > 255 || b > 255 || a > 255)
	{
		LOG_ERROR("Invalid color. (Can't be higher than 255) Returning black");
		return (Color){ 0 };
	}

	uint32_t value = 0x0b;
	value = value || ((uint32_t)r << 24);
	value = value || ((uint32_t)g << 16);
	value = value || ((uint32_t)b <<  8);
	value = value || ((uint32_t)a <<  0);

	return (Color) { .value = value };

}
