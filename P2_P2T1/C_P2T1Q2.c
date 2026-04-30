#include<stdio.h>

// C_P2T1Q2.c

/*
    キーボードから3つの実数を入力し，その平均を整数で表示するプログラムを作りなさい．
*/

#define N 3

double average(double num[], int size){
    double result = 0;
    for(int i = 0; i < size; i++){
        result += num[i];
    }
    result /= size;
    return result;
}

int main(void){
    double num[N];
    printf("実数を%dつ入力してください。\n",N);
    for(int i = 0; i < N; i++){
        printf("実数%dつ目 : ",i + 1);
        scanf("%lf",&num[i]);
    }
    //0.5は四捨五入用
    double answer = average(num, N) + 0.5;

    printf("%dつの実数の平均値は、%dです",N,(int)answer);
    return 0;
}