#include <stdio.h>
void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}
int main() {
	int a = 1, b = 3;
	swap(&a, &b);
	printf("a = %d, b=%d\n", a, b);
}