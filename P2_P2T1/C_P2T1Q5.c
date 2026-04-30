#include<stdio.h>

// C_P2T1Q5.c

/*
    三角形の高さと底辺の長さを入力し，三角形の面積を求めるプログラムを作りなさい．ただし．高
    さと底辺は実数とする．
*/

int main(void){
    double height,width,result;
    printf("三角形の高さは？:");
    scanf("%lf",&height);
    printf("三角形の底辺の長さは？:");
    scanf("%lf",&width);
    if(height < 0 || width < 0){
        printf("高さか底辺の長さが負の数です。");
        return 0;
    }
    result = (height * width) / 2.0;
    printf("三角形の面積は、%.3lfです。",result);
    return 0;
}