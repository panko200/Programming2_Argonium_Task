#include<stdio.h>

// C_P2T1Q3.c

/*
    りんご1個100円，オレンジ1個88円，苺1パック398円で販売されている．各購入数を入力し，合計
金額を表示するプログラムを作りなさい．ただし，これらの価格は税込み価格とする．
*/

//個数なので、実数ではなく整数だと信じて作成する。

#define N 3

int main(void){
    const int apple_value = 100;
    const int orange_value = 88;
    const int strawberry_value = 398;
    int value[N] = {apple_value, orange_value, strawberry_value};
    int num;
    int result = 0;
    char *name[N] = {"りんご", "オレンジ", "苺1パック"};
    for(int i = 0;i < N;i++){
        printf("%sの購入数は？価格:%d,個数:",name[i],value[i]);
        scanf("%d",&num);
        result += value[i] * num;
    }
    printf("合計金額:%d円\n",result);
    
    return 0;
}