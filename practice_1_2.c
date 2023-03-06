#include <stdio.h>

void ABC(int arr[], int k){//selection sort
    int temp, most=arr[k] ,j;
    for (int i=k; i<10; i++){
        if(arr[i]>most){
            most=arr[i];
            j=i;
        }    
    }
    if(arr[k]!=most){
        temp=arr[k];
        arr[k]=arr[j];
        arr[j]=temp;
    }
        
}

int main(void){
    int numArr[10];

    //배열입력받기
    for(int i=0; i<10; i++){
        scanf("%d", &numArr[i]);
    }
    for (int i=0; i<10; i++){//ABC 반복 호출
        ABC(numArr,i);
    }
    printf("\n");
    for(int i=0; i<10; i++){
        printf(" %d", numArr[i]);
    }
    
    return 0;

}