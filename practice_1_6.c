#include <stdio.h>

struct student
{
    char name[10];
    int grade;
};

int main(void){
    struct student student[5];
    double mean;

    //데이터 입력받기
    for (int i=0; i<5; i++){
        scanf("%s %d",&student[i].name,&student[i].grade);
    }


    //mean 계산
    for (int i=0; i<5; i++){
        mean+=student[i].grade;
    }
    mean = mean/5;

    // 결과 출력
    for (int i=0; i<5; i++){
        if (student[i].grade <= mean){
            printf("%s",student[i].name);
        }
    }

    return 0;
    
}