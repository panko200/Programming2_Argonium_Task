#include<stdio.h>

int main(void){
    int num;
    int p;
    scanf("%d",&num);
    printf("%d\n",num);
    for(int i=0;i<num;i++){
        scanf("%d",&p);
        printf("%d\n",p);
    }
    return 0;
}