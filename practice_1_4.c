#include <stdio.h>
#include <string.h>

int main(){

    //���ڿ� �Է¹ޱ�
    char str[100];
    scanf("%s", str);
    int len = strlen(str);

    //���ڿ� �ݺ����
    for (int i = 0;i <len; i++){
        printf("%s\n", &str[0+i]);
        str[len+i] = str[0+i];
        str[len+1+i] = '\0';
    }

    return 0;
}