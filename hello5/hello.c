#include <stdio.h>
#include "config.h"

#include "hello.h"

#ifdef HAVE_WORLD
  #include "world.h"
#endif

void hello(void) {
	printf("%s", STR_HELLO);
}

int main(int argc, char* argv[]) {
	hello();
#ifdef HAVE_WORLD
	world();
#endif
	return 0;
}
