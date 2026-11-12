#include <stdio.h>
#include <emscripten.h>

int main(void) {
	printf("This is being run from a webpage!\n");

	emscripten_run_script("something(5)");

	return 0;
}
