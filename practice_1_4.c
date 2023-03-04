#include <stdio.h>
#include <string.h>

int main(){

    //문자열 입력받기
    char str[100];
    scanf("%s", str);
    int len = strlen(str);

    //문자열 반복출력
    for (int i = 0;i <len; i++){
        printf("%s\n", &str[0+i]);
        str[len+i] = str[0+i];
        str[len+1+i] = '\0';
    }

    return 0;
}