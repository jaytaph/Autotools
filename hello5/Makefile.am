bin_PROGRAMS = hello

AM_CFLAGS = $(INTI_CFLAGS)

hello_SOURCES = hello.c hello.h 

if COMPILE_WITH_WORLD
hello_SOURCES += world.c world.h world2.h
endif

hello_LDADD = $(INTI_LIBS)
