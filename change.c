#include<stdio.h>
int main(){
    int dodo,gogo,total,deposit,change,rest,menu,w500,w100,w50,w10,cnt_dodo,cnt_gogo;
    while(1){
        printf("또또면 70원 꽁꽁바 30원 입니다.\n각각의 개수를 띄어서 입력하시오.\n");
        scanf("%d %d",&cnt_dodo,&cnt_gogo);
        dodo=70*cnt_dodo;
        gogo=30*cnt_gogo;
        total=dodo+gogo;
        printf("\n총 금액은 %d입니다.\n투입할 금액을 입력하시오.\n",total);
        scanf("%d",&deposit);
        if(deposit>=total){
            change=deposit-total;
            w500=change/500;
            rest=change%500;
            w100=rest/100;
            rest=rest%100;
            w50=rest/50;
            rest=rest%50;
            w10=rest/10;
            printf("\n또또면 전체 금액:%d\n꽁꽁바 전체 금액:%d\n거스름돈:%d\n\n#### 거스름돈 동전의 최소 개수 ####\n\n500원:%d개\n100원:%d개\n50원:%d개\n10원:%d개\n\n###################################\n\n계속하시겠습니까? 다시 입력하려면 1 나가려면 0을 눌러주세요.\n",dodo,gogo,change,w500,w100,w50,w10);
            scanf("%d",&menu);
            if(menu==0)break;
            else continue;}
        else{
            printf("금액이 부족합니다. 다시 입력하려면 1 나가려면 0을 눌러주세요.\n");
            scanf("%d",&menu);
            if(menu==0)break;
            else continue;}}
    return 0;}