#include <stdio.h>

int is_positive(int n) { 
	return n > 0;
}

int main() {
	printf("%d\n", is_positive(-3));
	printf("%d\n", is_positive(7));
	return 0;
}
