#include <stdio.h>
#include <xorg-server.h>

#include "pixmaputil.h"

char *drawable_desc(DrawablePtr pDraw, char *str, size_t n)
{
	if (!pDraw)
		snprintf(str, n, "None");
	else
		snprintf(str, n, "%p: %d (%dx%d+%d+%d)",
			 pDraw, pDraw->bitsPerPixel,
			 pDraw->width, pDraw->height, pDraw->x, pDraw->y);

	return str;
}
