#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[10] = { 0 };

	printf("%s%13s\n", "Element", "Value");
	for (int i = 0;i < 10;i++)
		printf("%7d%13d\n", i, a[i]);
	system("pause");
}