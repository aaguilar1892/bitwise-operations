# Major 1 Group Project

## Group Members and Responsibilities

- Corinna Martin: TDB

- Alexis Aguilar: parity.c

- Elizabeth Nguyen: TBD

- Nelli Salinas: TBD

- All: major1.h, major1.c

## Program Description

- **clz.c**: TODO

- **endian.c**: TODO

- **rotate.c**: TODO

- **parity.c**: The function takes a 32-bit unsigned integer as input. It uses bitwise operations to compute the number of 1’s in the binary representation of the integer. The XOR operation (^=) is used to toggle the parity variable whenever a 1 is found. The function returns 0 for even parity and 1 for odd parity.

- **major1.c**: TODO

- **major1.h**: TODO

## Compilation Methods

### Makefile

A Makefile is included in the repository. The purpose of this file is to facilitate the compilation process. To execute the compilation process, use the command `make`.

To clean up any files that were created in the process, use `make clean`.

### Manual Terminal Compilation

To compile the files manually from the terminal, you will have to type out the complete string command. The command is:

`gcc -Wall -o bitwisemenu major1.c clz.c endian.c rotate.c parity.c`

Executing the command will create an executable file called bitwisemenu.

To execute it, type `./bitwisemenu` into the terminal.

## Known Issues

Currently no issues are known. Issues may arise as we further develop this project.
