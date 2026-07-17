#include <stdio.h>

int quick_sort(int *list,int left,int right,int *count){
    if(left+1 >= right)return 0;
    int pivot = list[right-1];
    int cur_index = left;
    for(int i=left;i<right-1;i++){
        if(list[i]<pivot){
            int tmp = list[i];
            list[i] = list[cur_index];
            list[cur_index] = tmp;
            cur_index++;
            (*count)++;
        }
    }
    int tmp = list[right-1];
    list[right-1] = list[cur_index];
    list[cur_index] = tmp;

    quick_sort(list,left,cur_index,count);
    quick_sort(list,cur_index+1,right,count);
}

int main(void){
    int list[1000000],count=0;
    int left=0,right;
    scanf("%d",&right);
    for(int i=0;i<right;i++){
        scanf("%d",&list[i]);
    }
    quick_sort(list,left,right,&count);
    for(int i=0;i<right;i++){
        printf("%d",list[i]);
        if(i!=right-1)printf(" ");
    }
    printf("\n%d",count);
    return 0;
}