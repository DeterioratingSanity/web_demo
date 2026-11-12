#include <stdio.h>
#include <emscripten.h>

int main(void) {
	printf("This is being run from a webpage!\n");
	
	printf("WASM Running.\n");

	EM_ASM(
		console.log("Inline javascript is a wonderful thing.");
		console.log("EM_ASM_ specifies a parameter input, and EM_ASM_INT specifies a parameter and an integer return.");
		console.log("I return nothing, and now I will.");	
	);
	
	return 0;
}

