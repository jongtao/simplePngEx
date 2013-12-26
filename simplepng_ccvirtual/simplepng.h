#ifndef SIMPLEPNG_H
#define SIMPLEPNG_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

#define PNG_DEBUG 3
#include <png.h>


class SimplePNG
{
protected:
	int x, y;

	int width, height, rowbytes;
	png_byte color_type;
	png_byte bit_depth;

	png_structp png_ptr;
	png_infop info_ptr;
	int number_of_passes;
	png_bytep * row_pointers;

	void abort_(const char *s, ...);
	void dealloc();

public:
	~SimplePNG();

	void read_png_file(char* file_name);
	void write_png_file(char* file_name);
	virtual void process_file(void) = 0;

}; // class SimplePNG

#endif

