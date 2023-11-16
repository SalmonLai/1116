#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 比較函數，供 qsort 使用
int compare(const void *a, const void *b) {
	return (*(int*)a - *(int*)b);
}

int main() {
	srand((unsigned int)time(NULL));

	//int arraySize = rand() % 8 + 3;
	int arraySize = 10;
	//int randomArray[arraySize];
	int randomArray[10];

	for (int i = 0; i < arraySize; ++i) {
		randomArray[i] = rand() % 101;
	}

	printf("隨機生成的陣列：\n");
	for (int i = 0; i < arraySize; ++i) {
		printf("%d ", randomArray[i]);
	}
	printf("\n");

	// 使用 qsort 對陣列進行排序
	qsort(randomArray, arraySize, sizeof(int), compare);

	printf("排序後的陣列：\n");
	for (int i = 0; i < arraySize; ++i) {
		printf("%d ", randomArray[i]);
	}
	printf("\n");

	return 0;
}