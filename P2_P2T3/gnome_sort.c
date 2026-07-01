#include <stdio.h>

void gnome_sort(int data[]){
    int tmp,index=1;
    while(index<data[0]+1){
        if(data[index-1]>data[index]){
            tmp=data[index-1];
            data[index-1]=data[index];
            data[index]=tmp;
            index--;
            if(index-1<=1)index=2;
        }else index++;
    }
}