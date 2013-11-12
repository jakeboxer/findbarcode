#include <stdio.h>
#include "stb_image.c"

#define FILENAME "wikipedia_barcode.png"

int main(int argc, char **argv)
{
	int width, height, bytes_per_pixel;
	unsigned char *data = stbi_load(FILENAME, &width, &height, &bytes_per_pixel, STBI_default);

	if (data) {
		// Run through every pixel and print its greyscale value.
		for (int row = 0; row < height; row++) {
			int row_offset = row * width;

			for (int col = 0; col < width; col++) {
				char grey = data[row_offset + col];
				printf("row %d, col %d: %u\n", row, col, grey);
			}
		}

		stbi_image_free(data);

		printf("width: %d\nheight: %d\nbytes per pixel: %d\n", width, height, bytes_per_pixel);
	} else {
		printf("stbi_load() failed with error: \"%s\"\n", stbi_failure_reason());
	}

	return 0;
}
