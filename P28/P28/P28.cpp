#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void modifyArray(int a[], int size) {
	for (int i = 0;i < size;i++) {
		a[i] *= 2;
	}
}

void modifyElement(int e) {
	printf("Value in modifyElement is %d\n", e *= 2);
}

int main(void)
{
	int a[SIZE] = { 0,1,2,3,4 };

	printf("Effect of passing entire array by reference:\n\nThe"
		"value of original are:\n");

	for (int i = 0;i < SIZE;i++) printf("%3d", a[i]);
	putchar('\n');

	modifyArray(a, SIZE);

	printf("The values of the modified arrays are :\n");
	for (int i = 0;i < SIZE;i++) printf("%3d", a[i]);
	printf("\n\n\nEffect of passing array element"
		"by value :\n\nThe value of a[3] is %d\n", a[3]);
	modifyElement(a[3]);
	printf("The array of a[3] is %d\n", a[3]);

	system("pause");
	return 0;
}