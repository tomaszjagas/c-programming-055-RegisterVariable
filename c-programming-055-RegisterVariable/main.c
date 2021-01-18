#include <stdio.h>

int main() {
	int x = 15; // register variable (counter)
	register int* a = &x;

	for (x = 1; x <= 15; x++) {
		printf("%d\n", x);
	}

	return 0;
}