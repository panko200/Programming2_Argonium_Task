#include<stdio.h>

//AIに書かせたコードです。
void insertion_sort(int data[]){
    int tmp,j;
    for(int i=2;i<data[0]+1;i++){
        tmp=data[i];
        for(j=i-1;j>0&&data[j]>tmp;j--){
            data[j+1]=data[j];
        }
        data[j+1]=tmp;
    }
}