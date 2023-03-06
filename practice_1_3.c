#include <stdio.h>
void swap();

//메인함수
int main(void){
    int N,a,b;

    //배열입력받기
    scanf("%d",&N);
    int numArr[N];

    for(int i=0;i<N;i++){
        scanf("%d",&numArr[i]);
    }
    
    //a,b 입력받기
    
    scanf("%d %d",&a,&b);
    
    //swap하기
    swap(&numArr[a],&numArr[b]);

    //결과출력
    for (int i = 0; i < N; i++) {
        printf(" %d", numArr[i]);
    }

    return 0;
    
}
//스왑함수
void swap(int *pa,int *pb){
    int temp;

    temp=*pa;
    *pa=*pb;
    *pb=temp;
}