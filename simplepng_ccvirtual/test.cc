#include "simplepng.h"



class PNG:public SimplePNG
{
public:
	virtual void process_file(void);
}; // class PNG



void PNG::process_file(void)
{
	/* Expand any grayscale, RGB, or palette images to RGBA */
	png_set_expand(png_ptr);

	/* Reduce any 16-bits-per-sample images to 8-bits-per-sample */
	png_set_strip_16(png_ptr);

	for (y=0; y<height; y++) {
		png_byte* row = row_pointers[y];
		for (x=0; x<width; x++) {
			png_byte* ptr = &(row[x*4]);
			printf("Pixel at position [ %d - %d ] has RGBA values: %d - %d - %d - %d\n",
					x, y, ptr[0], ptr[1], ptr[2], ptr[3]);

			/* perform whatever modifications needed, for example to set red value to 0 and green value to the blue one:
				 ptr[0] = 0;
				 ptr[1] = ptr[2]; */
		}
	}
} // process_file()



int main(int argc, char **argv)
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: program_name <file_in> <file_out>\n");
		return 1;
	}

	PNG png;

	png.read_png_file(argv[1]);
	png.process_file();
	png.write_png_file(argv[2]);

	return 0;
}
