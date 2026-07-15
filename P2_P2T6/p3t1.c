#include<stdio.h>

int main(void){
    int stack_Q=0;
    int list[1000]={0};
    int head=0,tail=0;
    int instructions,num;
    scanf("%d",&stack_Q);
    for(int i=0;i<stack_Q;i++){
        
        scanf("%d",&instructions);
        if(instructions==1){
            scanf("%d",&num);
            list[tail]=num;
            tail++;
        }else if(instructions==2){
            list[head]=0;
            head++;
        }
        for(int j=head;j<tail;j++){
            printf("%d",list[j]);
            if(j==tail-1)printf("\n");
            else printf(" ");
        }
        if(head==tail)printf("\n");
        
    }
    return 0;
}