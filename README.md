# my_lib

Hi ! It's Noki and this repo is for all the functions of the LIB C and some util functions that I code.

There are some Unit Tests made with Criterion for the functions.

## Unit Test with Criterion

![coverage](https://user-images.githubusercontent.com/72025226/138173352-f47d264a-2445-4b0a-abb4-95a765279cad.jpeg)

Coverage :

         - Lines : 100%
         - Branches : 93.3%

## How to test to compile the Lib and see the tests :
         # Prerequires :
                  - Criterion
                  - CMake

         - make re -> Compile the lib.
         - firefox covr.html -> See the tests on HTML page.
         - make clean -> clean .html, .gcda, .gcno and test executable.
         - make cleanobjs -> clean all the .o files.
         - make fclean -> make clean and make cleanobjs at the same time.

Enjoy :)
