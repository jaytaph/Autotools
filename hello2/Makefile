# We use "gcc" as our compiler
CC=gcc

# "gcc" is also our linker
LD=gcc

# There are the flags for "gcc"
CFLAGS=-g -Wall

# THere are no linker flags we specify
LDFLAGS=

# Makedepend
MAKEDEPEND=makedepend

# These are the objects we need to create
OBJS=hello.o world.o

# Source files are the same as object files, except with .o changed into .c
SRCS=$(OBJS:.o=.c)

# This is the main binary
PROG=hello

# This is our install program
INSTALL=install

# This is the path where we need to install our program
INSTALL_PATH=/usr/local/bin

# This is the default target. It only depends on the main program
all: depend $(PROG)

# Main binary depends on our objects. After the objects are
# created, link them into the main binary
$(PROG): $(OBJS)
	$(LD) $(LDFLAGS) $(OBJS) -o $(PROG)

# This rule will be triggered when we need to convert a .c file into a .o file
# The $< stands for the .c file, the $@ for the .o file.
.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

install: $(PROG)
	$(INSTALL) -m 0755 $(PROG) $(INSTALL_PATH)

# This target will cleanup everything so we can start from scratch again
clean:
	$(RM) *.o $(PROG)

depend:
	$(MAKEDEPEND) -Y $(SRCS) 2>/dev/null


.PHONY: install clean depend
# DO NOT DELETE

hello.o: hello.h world.h
world.o: world.h world2.h hello.h
