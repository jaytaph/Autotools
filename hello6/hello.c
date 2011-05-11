#include <stdio.h>
#include "config.h"

#include "hello.h"
#include "world.h"

#ifdef HAVE_JSON
#include "json/json.h"

void json_helloworld() {
	struct json_object *obj = json_object_new_object();
	json_object_object_add(obj, "Hello_msg", json_object_new_string(STR_HELLO));
	json_object_object_add(obj, "World_msg", json_object_new_string(STR_WORLD));
	printf("%s\n", json_object_to_json_string(obj));
}

#endif

void hello(void) {
	printf("%s", STR_HELLO);
}

int main(int argc, char* argv[]) {

#ifdef HAVE_JSON
	json_helloworld();
#else
	hello();
	world();
#endif
	return 0;
}
