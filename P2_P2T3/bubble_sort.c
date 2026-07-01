#include <stdio.h>

// 昇順
void bubble_sort_ascending( int data[] ){
    int tmp;
    for(int i=1;i<data[0]+1;i++){
        for(int j=i+1;j<data[0]+1;j++){
            if(!(data[i]<data[j])){
                tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }
}

// 降順
void bubble_sort_descending( int data[] ){
    int tmp;
    for(int i=1;i<data[0]+1;i++){
        for(int j=i+1;j<data[0]+1;j++){
            if(!(data[i]>data[j])){
                tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }
}