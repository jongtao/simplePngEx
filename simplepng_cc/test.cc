#include "simplepng.h"

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: program_name <file_in> <file_out>\n");
		return 1;
	}

	SimplePNG png;

	png.read_png_file(argv[1]);
	png.process_file();
	png.write_png_file(argv[2]);

	return 0;
}
