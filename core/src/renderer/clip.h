#ifndef CLIP_H
#define CLIP_H

#include "vert_shader.h"

void clip_tri_against_clip_planes(const VSout in[3], VSout* out, int* out_n);

#endif
