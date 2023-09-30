# STATIC LIBRARIES
-	Static libraries are collections of compiled object files bundled together into a single file.
-	They contain precompiled code and data that can be linked directly into programs.
-	Each object file within a static library corresponds to one compiled source file.
-	Static libraries are represented as archive files with the `.a` file extension.
-	They are created using tools like `ar` and can be linked with programs to create standalone executables.
-	When linked with a program, only the functions and data that are actually used by the program are included in the executable.
-	Static libraries increase the size of the resulting executable as they include all required code directly.
-	They are beneficial for simple deployment as they eliminate the need to distribute separate library files.
-	Changes in the library require recompilation and relinking of the entire program.
-	Shared libraries offer an alternative, where code is shared among multiple programs, reducing memory usage and providing more flexibility.
# some commands related to working with static libraries in a Unix-like environment:

1. **ar**: The command used to create, modify, and extract files from archive libraries (static libraries).

   Example: `ar rcs libmy.a file1.o file2.o`

2. **ranlib**: Generates an index (table of contents) for an archive library to improve linking efficiency.

   Example: `ranlib libmy.a`

3. **nm**: Lists symbols from object files and static libraries. It shows the names of functions and variables.

   Example: `nm libmy.a`

4. **gcc**: The GNU Compiler Collection, used to compile and link programs with static libraries.

   Example: `gcc main.c -L. -lmy -o my_program`

5. **ld**: The linker that combines object files, including those from static libraries, to create executable programs.

   Example: `ld -o my_program main.o libmy.a`

6. **size**: Displays the size of various sections in an object file or executable, including the size of static libraries.

   Example: `size libmy.a`

7. **objdump**: Displays information about object files and executables, including the contents of sections.

   Example: `objdump -h libmy.a`

8. **ldd**: Lists the shared libraries that an executable links against (not directly related to static libraries).

   Example: `ldd my_program`

9. **readelf**: Displays detailed information about ELF format files, including object files and executables.

   Example: `readelf -h libmy.a`
