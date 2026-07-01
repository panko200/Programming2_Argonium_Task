#include <stdio.h>

void selection_sort(int data[]){
    int tmp,sindex=1,mindex;
    while(1){
        mindex=sindex;
        for(int i=sindex;i<data[0]+1;i++){
            if(data[i]<data[mindex])mindex=i;
        }
        tmp = data[sindex];
        data[sindex] = data[mindex];
        data[mindex] = tmp;
        sindex++;
        if(sindex>=data[0])break;
    }
}