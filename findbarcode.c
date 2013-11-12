#include <stdio.h>
#include "stb_image.c"

int main(int argc, char **argv)
{
	int width, height, components;
	unsigned char *data = stbi_load("wikipedia_barcode.png", &width, &height, &components, 0);
	printf("width=%d, height=%d, components=%d\n", width, height, components);
}
