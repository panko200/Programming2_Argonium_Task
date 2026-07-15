#include<stdio.h>

int main(void){
    int stack_Q=0;
    char list[1000];
    int nowp=0;
    int instructions;
    char c[10];
    scanf("%d",&stack_Q);
    for(int i=0;i<stack_Q;i++){
        
        scanf("%d",&instructions);
        if(instructions==1){
            scanf("%s",c);
            list[nowp]=*c;
            nowp++;
        }else if(instructions==2){
            nowp--;
            printf("%c\n",list[nowp]);
            list[nowp]=0;
        }
        for(int j=0;j<nowp;j++){
            printf("%c",list[j]);
            if(j==nowp-1)printf("\n");
            else printf(" ");
        }
        if(nowp==0)printf("\n");
        
    }
    return 0;
}