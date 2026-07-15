#include<stdio.h>

int main(void){
    int stack_Q=0;
    int list[1000]={0};
    int nowp=0;
    int instructions,num;
    scanf("%d",&stack_Q);
    for(int i=0;i<stack_Q;i++){
        
        scanf("%d",&instructions);
        if(instructions==1){
            scanf("%d",&num);
            list[nowp]=num;
            nowp++;
        }
    }
    printf("%d\n",nowp);
    for(int j=0;j<nowp;j++){
            printf("%d",list[j]);
            if(j!=nowp-1)printf("\n");
    }
    return 0;
}