#include<stdio.h>

// C_P2T1Q4.c

/*
    1クラスの人数がa人である時，野球(9人)をbチーム，バレー(6人)をcチーム作れば何人が参加できな
    いかを計算するプログラムを作りなさい．
*/

int main(void){
    int a,b,c;
    const int baseball_member = 9;
    const int volleyball_member = 6;
    printf("一クラスの人数は？:");
    scanf("%d",&a);
    printf("野球チームの数は？:");
    scanf("%d",&b);
    printf("バレーチームの数は？:");
    scanf("%d",&c);
    int join_member = (baseball_member * b) + (volleyball_member * c);
    int result = a - join_member;
    if(result < 0){
        printf("そもそもクラス人数が足りません。\n");
        printf("%d人足りません。",-result);
        return 0;
    } else if(result == 0){
        printf("全員が参加できます！");
        return 0;
    }
    printf("%d人が参加できません。",result);
    return 0;
}