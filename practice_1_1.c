#include <stdio.h>

//sum 함수 선언, 수열합 이용
int sum(int n){
    int result;
    result = n*(n+1)/2;
    return result;
}

int main(void){
    int x;
    int total=0;
    //x입력받기
    scanf("%d",&x);

    for(int i=1; i<=x; i++){
        total=total+sum(i);
    }
    printf("%d\n", total);

    return 0;
    
}
