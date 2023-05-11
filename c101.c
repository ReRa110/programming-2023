#include<stdio.h>
int main(){
    int input_sec,hr,min,sec;
    printf("몇초?:"),scanf("%d",&input_sec);
    hr=input_sec/3600;
    min=input_sec%3600/60;
    sec=input_sec%60;
    printf("%2d시간 %2d분 %2d초\n",hr,min,sec);
    return 0;}