# Define the compiler and flags
CC = gcc
CFLAGS = -Wall -g  # Enable all warnings and debugging information

# Define the source files
SOURCES = major1.c clz.c endian.c rotate.c parity.c

# Define the header file
HEADERS = major1.h

# Define the output binary
TARGET = bitwisemenu

# Define the object files (one for each source file)
OBJECTS = $(SOURCES:.c=.o)

# Default target to build the program
all: $(TARGET)

# Rule to build the target executable
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

# Rule to compile individual source files into object files
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and the executable
clean:
	rm -f $(OBJECTS) $(TARGET) a.out

# Phony targets to ensure these are not mistaken for files
.PHONY: all clean