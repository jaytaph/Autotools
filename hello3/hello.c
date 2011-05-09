#include <stdio.h>

#include "hello.h"
#include "world.h"

#include "config.h"

void hello(void) {
	printf("%s", STR_HELLO);
}

int main(int argc, char* argv[]) {
	hello();
	world();
	return 0;
}
