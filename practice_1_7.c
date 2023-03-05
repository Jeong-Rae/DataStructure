#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:6031)
#pragma warning(disable:6385)


int main(void) {
	int N;
	int *p1, *p2;

	//메모리 동적 할당
	scanf("%d", &N);
	p1 = (int*)malloc(N * sizeof(int));
	if (p1 == NULL) {
		printf("memory allocation error\n");
		exit(1);
	}
	p2 = (int*)malloc(N * sizeof(int));
	if (p2 == NULL) {
		printf("memory allocation error\n");
		exit(1);
	}

	//배열 입력 받기
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &p1[i]);
	}
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &p2[i]);
	}
	
	//출력
	for (int i = 0; i < N; i++) {
		printf(" %d", p1[i] + p2[N - i - 1]);
	}

	free(p1);
	free(p2);

	return 0;
	
}