simplePngEx
===========

A Simple libpng Example.


The original C code was repackaged into a C++ class for modularity and ease of use.
This repository includes Makefiles and a sample png for easy testing.

The class contains methods for reading and writing a PNG, but its process() method is pure virtual.
This means you can simply inherit the class to any other class to give them reading and writing functionality.

The simplepng_c directory contains the original C program.
The simplepng_cc directory contains an unsafe version of the C++ program that was made via copying and pasting.
The simplepng_ccvirtual directory contains a safer C++ version. If you're going to actually use one of these, this is the one to choose.

Please look at the code and check them for errors before actually using them.
The code is intended to be just an example.

Compilation dependencies include libpng and standard C libraries.

The original program was found at http://zarb.org/~gc/html/libpng.html and was written by Guillaume Cottenceau under the X11 license.
