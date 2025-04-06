#include <stdio.h>

float c_to_f(float c) {
	return (c*9/5) + 32;
}

int main() {
	printf("%.1f°F\n", c_to_f(0));
	return 0;
}
