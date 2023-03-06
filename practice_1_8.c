#include <stdio.h>
#include <stdlib.h>

typedef struct student{
	char name[7];
	int korean;
	int english;
	int math;
	double average;
}STUDENT;

int main(void){
	int N;
	scanf("%d",&N);
	
	//구조체배열 선언 및 동적할당
	STUDENT* arr = (STUDENT*)malloc(N*sizeof(STUDENT));
	if (arr == NULL) {
		printf("memory allocation error\n");
		exit(1);
	}

	//배열입력받기
	for (int i=0; i<N; i++){
		scanf("%s %d %d %d", &arr[i].name, &arr[i].korean, &arr[i].english, &arr[i].math);
		arr[i].average = ((double)arr[i].korean + (double)arr[i].english + (double)arr[i].math) / 3;		
	}

	//결과출력
	for (int i=0; i < N; i++) {
		if (arr[i].korean >= 90 || arr[i].english >= 90 || arr[i].math >= 90) {
			if (arr[i].korean < 70 || arr[i].english < 70 || arr[i].math < 70) {
				printf("%s %.1f GREAT BAD\n", arr[i].name, arr[i].average);
			}
			else {
				printf("%s %.1f GREAT\n", arr[i].name, arr[i].average);
			}
		}
		else {
			if (arr[i].korean < 70 || arr[i].english < 70 || arr[i].math < 70) {
				printf("%s %.1f BAD\n", arr[i].name, arr[i].average);
			}
		}
	}

	free(arr);
	return 0;
	}