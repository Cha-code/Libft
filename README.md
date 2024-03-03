# libft

libft is the first project of common core of ecole 42. The aim of this project is to code a C library regrouping usual functions that we’ll be allowed to use in all our other projects
at ecole 42, becuase we are not allowed to use standard C library functions, we can use only functions we coded ourself. 
So the longer term goal of this library is to grow with our own coded functions.

# 🛠️ Usage
Requirements

This program is written in C language for Linux distributions and thus needs the clang compiler and some standard C libraries to run.

Instructions

Compiling the program

$ make

After compilation you will get an archive file with .a extention (which is a static library archive) to link and compile it with your other programs, you need to follow these steps:

Compilation: Compile your main program files (*.c) along with any necessary header files using the clang compiler.

$ clang -c main.c -o main.o

Linking: Link your main program with the static library file (.a file) using the -l option followed by the name of the library, and optionally specify the path to the library using the -L option.

$ clang main.o -o my_program -L/path/to/library -lmylibrary

# 📑 Index
@root

📁 inc: contains the program's headers.

📁 src: contains the source code of the program.

Makefile - contains instructions for compiling the program and testing it.
