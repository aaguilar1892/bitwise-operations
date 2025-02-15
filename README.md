# Major 1 Group Project

## Group Members and Responsibilities

- Corinna Martin: clz.c

- Alexis Aguilar: parity.c

- Elizabeth Nguyen: endian.c

- Nelli Salinas: rotate.c

- All: major1.h, major1.c

## Program Description

- **clz.c**: The function takes a 32-bit unsigned integer as input. It then uses bitwise operations to compute the number of leading 0's in the binary representation of the integer. The AND operation (&) is used to detect the first 1 bit and return the number of leading 0 bits, otherwise the number of leading 0's is incremented by one.

- **endian.c**: The function endianSwap() takes a 32-bit unsigned integer as input. It uses bitwise operators to swap the endianness of the input. E.g. if the input is in big endian format, it will switch to little endian format and vice versa. The function isolates each byte using left and right shifts, and then reverses the order of the bytes to change the endianness.

- **rotate.c**: The function takes two 32-bit unsigned integers, one as input and the other as the number of places the input will be rotated by. The function utilizes both the right shift and left shift operations in order to rotate the input. To combine the outcomes of both the right shift and left shift operations the OR operation (|) is used. The function then returns the outcome of the OR operation.

- **parity.c**: The function takes a 32-bit unsigned integer as input. It uses bitwise operations to compute the number of 1’s in the binary representation of the integer. The XOR operation (^=) is used to toggle the parity variable whenever a 1 is found. The function returns 0 for even parity and 1 for odd parity.

- **major1.c**: This file outputs the menu and allows the user to select which operation to perform.

- **major1.h**: This file contains the function prototypes for the count leading 0's, parity, endian swap, and rotate right operations.

## Compilation Methods

### Makefile

A Makefile is included in the repository. The purpose of this file is to facilitate the compilation process. To execute the compilation process, use the command `make`.

To clean up any files that were created in the process, use `make clean`.

### Manual Terminal Compilation

To compile the files manually from the terminal, you will have to type out the complete string command. The command is:

`gcc -Wall -o bitwisemenu major1.c clz.c endian.c rotate.c parity.c`

## Execution
Both of the compilation methods will create an executable file called bitwisemenu.

To execute it, type `./bitwisemenu` into the terminal.

## Known Issues

Currently no issues are known. Issues may arise as we further develop this project.
