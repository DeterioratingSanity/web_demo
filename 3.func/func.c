#include <stdio.h>
#include <emscripten.h>

int mul5(int n) {
	return n * 5;
}

int main(void) {
	printf("This is being run from a webpage!\n");

	int ca = mul5(2);

	printf ("mul5(2) = %d\n", ca);

	return 0;
}

