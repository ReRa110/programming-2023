#include<stdio.h>
int main(){
    int dodo,gogo,total,deposit,change,rest,menu,w500,w100,w50,w10,cnt_dodo,cnt_gogo;
    while(1){
        printf("�ǶǸ� 70�� �ǲǹ� 30�� �Դϴ�.\n������ ������ �� �Է��Ͻÿ�.\n");
        scanf("%d %d",&cnt_dodo,&cnt_gogo);
        dodo=70*cnt_dodo;
        gogo=30*cnt_gogo;
        total=dodo+gogo;
        printf("\n�� �ݾ��� %d�Դϴ�.\n������ �ݾ��� �Է��Ͻÿ�.\n",total);
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
            printf("\n�ǶǸ� ��ü �ݾ�:%d\n�ǲǹ� ��ü �ݾ�:%d\n�Ž�����:%d\n\n#### �Ž����� ������ �ּ� ���� ####\n\n500��:%d��\n100��:%d��\n50��:%d��\n10��:%d��\n\n###################################\n\n����Ͻðڽ��ϱ�? �ٽ� �Է��Ϸ��� 1 �������� 0�� �����ּ���.\n",dodo,gogo,change,w500,w100,w50,w10);
            scanf("%d",&menu);
            if(menu==0)break;
            else continue;}
        else{
            printf("�ݾ��� �����մϴ�. �ٽ� �Է��Ϸ��� 1 �������� 0�� �����ּ���.\n");
            scanf("%d",&menu);
            if(menu==0)break;
            else continue;}}
    return 0;}