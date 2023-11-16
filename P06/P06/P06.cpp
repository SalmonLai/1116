#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main() {
	int a[SIZE] = { 0 };

	for (int i = 0;i < SIZE;i++) {
		a[i] = 2 + 2 * i;
	}

	printf("%s%13s\n", "Element", "Value");
	for (int i = 0;i < SIZE;i++)
		printf("%7d%13d\n", i, a[i]);
	system("pause");
}