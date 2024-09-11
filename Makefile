# compiler and flags
CC = gcc
CFLAGS = -Wall -g  # enable all warnings and debugging information

# source files
SOURCES = major1.c clz.c endian.c rotate.c parity.c

# header file
HEADERS = major1.h

# output binary
TARGET = bitwisemenu

# object files
OBJECTS = $(SOURCES:.c=.o)

# target to build the program
all: $(TARGET)

# rule to build the target executable
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

# rule to compile individual source files into object files
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# clean up object files and executables
clean:
	rm -f $(OBJECTS) $(TARGET) a.out

# phony targets to ensure these are not mistaken for files
.PHONY: all clean