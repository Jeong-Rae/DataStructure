#include <stdio.h>

struct time{
    int hour;
    int minute;
    int second;
};

int main(void){
    struct time t1,t2,t3;

    //시간 입력받기
    scanf("%d %d %d",&t1.hour,&t1.minute,&t1.second);
    scanf("%d %d %d",&t2.hour,&t2.minute,&t2.second);

    //sec 계산
    if (t2.second >= t1.second){
        t3.second = t2.second - t1.second;
    }
    else{
        t3.second = t2.second - t1.second +60;
        t2.minute=t2.minute-1;
    }
    //min 계산
    if (t2.minute >= t1.minute){
        t3.minute = t2.minute - t1.minute;
    }
    else{
        t3.minute = t2.minute - t1.minute +60;
        t2.hour=t2.hour-1;
    }
    t3.hour = t2.hour - t1.hour;

    printf("%d %d %d",t3.hour,t3.minute,t3.second);

    return 0;
    
}