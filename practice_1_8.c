#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:6031)
#pragma warning(disable:6385)

struct student{
	char name[7];
	int korean;
	int english;
	int math;
	double average;
};

int main(void) {
	struct student *arr;
	int N;

	//memory allocation of 'arr'
	scanf_s("%d", &N);
	arr = malloc(N * sizeof(struct student));
	if (arr == NULL) {
		printf("memory allocation error\n");
		exit(1);
	}

	//scanf 학생 정보
	for (int i=0; i < N; i++) {
		scanf("%s %d %d %d", &arr[i].name, &arr[i].korean, &arr[i].english, &arr[i].math);
	}

	printf("%d", arr[0].korean);
	/*
	//if 문
	for (int i=0; i < N; i++) {
		arr[i].average = (arr[i].korean + arr[i].english + arr[i].math) / 3;
		if (arr[i].korean >= 90 || arr[i].english >= 90 || arr[i].math >= 90) {
			if (arr[i].korean < 70 || arr[i].english < 70 || arr[i].math < 70) {
				printf("%s %.1f GREAT BAD", arr[i].name, arr[i].average);
			}
			else {
				printf("%s %.1f GREAT", arr[i].name, arr[i].average);
			}
		}
		else {
			if (arr[i].korean < 70 || arr[i].english < 70 || arr[i].math < 70) {
				printf("%s %.1f BAD", arr[i].name, arr[i].average);
			}
		}
	}*/

	free(arr);
	return 0;
}