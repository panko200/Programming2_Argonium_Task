#include <stdio.h>

void bubble(int *list,int size){
    for(int i=0;i<size-1;i++){
        for(int j=size-1;j>i;j--){
            if(list[j-1]>list[j]){
                int tmp = list[j-1];
                list[j-1] = list[j];
                list[j] = tmp;
            }
        }
        for(int k=0;k<size;k++){
            if(k!=size-1)printf("%d ",list[k]);
            else printf("%d\n",list[k]);
        }
    }
}

int main(void){
    int size;
    int list[10000];
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&list[i]);
    }
    bubble(list,size);
    return 0;
}