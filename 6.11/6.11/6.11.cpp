#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// �����ơA�� qsort �ϥ�
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

	printf("�H���ͦ����}�C�G\n");
	for (int i = 0; i < arraySize; ++i) {
		printf("%d ", randomArray[i]);
	}
	printf("\n");

	// �ϥ� qsort ��}�C�i��Ƨ�
	qsort(randomArray, arraySize, sizeof(int), compare);

	printf("�Ƨǫ᪺�}�C�G\n");
	for (int i = 0; i < arraySize; ++i) {
		printf("%d ", randomArray[i]);
	}
	printf("\n");

	return 0;
}