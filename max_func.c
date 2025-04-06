#include <stdio.h>

int max(int a, int b) {
	return (a > b) ? a : b;
}

int main() {
	printf("Max is %d\n", max(666, 123));
	return 0;
}
