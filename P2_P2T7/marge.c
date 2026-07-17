#include <stdio.h>

void merge(int *L,int *R,int *list, int left, int mid, int right, int *count){
    int nl = mid - left;
    int nr = right - mid;
    for(int i=0;i<nl;i++){
        L[i] = list[left+i];
    }
    for(int i=0;i<nr;i++){
        R[i] = list[mid+i];
    }

    L[nl] = 2147483647;
    R[nr] = 2147483647;

    int lindex = 0;
    int rindex = 0;

    for(int i=left;i<right;i++){
        if(L[lindex]<R[rindex]){
            list[i] = L[lindex];
            lindex++;
        }
        else{
            list[i] = R[rindex];
            rindex++;
            (*count)++;
        }
    }
}
void merge_sort(int *list, int left, int right,int *count){
    int L[1000000],R[1000000];
    if(left+1<right){
        int mid = (left+right)/2;
        merge_sort(list, left, mid, count);
        merge_sort(list, mid, right, count);
        merge(L,R,list, left, mid, right, count);
    }
}

int main(void){
    int list[1000000],count=0;
    int left=0,right;
    scanf("%d",&right);
    for(int i=0;i<right;i++){
        scanf("%d",&list[i]);
    }
    merge_sort(list,left,right,&count);
    for(int i=0;i<right;i++){
        printf("%d",list[i]);
        if(i!=right-1)printf(" ");
    }
    printf("\n%d",count);
    return 0;
}