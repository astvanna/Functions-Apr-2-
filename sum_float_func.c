#include <stdio.h>

float add_floats(float x, float y) {
	return x + y;
}

int main() {
	printf("%.2f\n", add_floats(3.14, 6.66));
	return 0;
}
