#include<stdio.h>

void comb_sort(int data[]){
    int gap = data[0],tmp,swp=1;
    while(gap>1||swp){
        gap /= 1.3;
        if(gap<1)gap=1;
        swp=0;
        for(int i=1;i+gap<data[0]+1;i++){
            if(data[i]>data[i+gap]){
                tmp = data[i];
                data[i] = data[i+gap];
                data[i+gap] = tmp;
                swp=1;
            }
        }
    }
}