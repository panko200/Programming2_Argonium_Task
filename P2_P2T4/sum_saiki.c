#include <stdio.h>

int sum(int n){
    if (n==1)return 1;
    else return n+sum(n-1);
}

int gomi_sum(int n){
    if(n<=-10000)return 1;
    else return n+gomi_sum(n-1);
}

int main(void){
    printf("%d\n",sum(10));
    printf("%d",gomi_sum(10));
    return 0;
}