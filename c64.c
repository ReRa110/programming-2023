#include<stdio.h>
int main(){
    int korean=0,math=0,english=0,science=97,history=97,total=0;
    float average;
    char grade='A';
    total=korean+math+english+science+history;
    average=total/5.0;
    printf("total:%d, average:%.1f, grade:%c\n",total,average,grade);
    return 0;}