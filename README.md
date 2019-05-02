# CBS
A custom build system I created to simplify creating large c++ projects
The system expects a regular directory structure with .cpp files contained in the src folder and .h files contained in headers.  The directory structure in src and headers must be identical to each other.
The system simply compiles and links all files in all sub directories
use #include <file.h> for all includes rather than #include "file.h"
build system will assemble the "build" directory with identical structure and .o files then build the final
system is ran using make
