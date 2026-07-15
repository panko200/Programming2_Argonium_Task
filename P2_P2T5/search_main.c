#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 配列の要素数（1,00万件）
#define ARRAY_SIZE 10000000

// 全探索
int linear_search(int *list,int cnt, int num){
    for(int i=0;i<cnt;i++){
        if(list[i]==num)return i;
    }return -1;
}

// 二部探索
int binary_search(int *list,int cnt, int num){
    int low = 0;
    int high = cnt-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(list[mid]<num)low=mid+1;
        else if (list[mid]>num)high=mid-1;
        else return mid;
    }return -1;
}

int main() {
    // 1000万件の配列を動的に確保（スタックオーバーフロー防止）
    int *data_list = (int *)malloc(sizeof(int) * ARRAY_SIZE);
    if (data_list == NULL) {
        printf("メモリの確保に失敗しました。\n");
        return 1;
    }

    printf("データを生成中（%d件）...\n", ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; i++) {
        data_list[i] = i + 1; // [1, 2, 3, ..., 10000000] のソート済み配列
    }

    // ほぼ末尾の要素をターゲットにする（全探索に最も時間がかかるケース）
    int target = ARRAY_SIZE - 1; 
    printf("探索する値: %d\n", target);

    clock_t start, end;
    double cpu_time_used;

    // --------------------------------------------------
    // 全探索（線形探索）の実行と計測
    // --------------------------------------------------
    printf("\n--- 全探索（Linear Search）を開始 ---\n");
    start = clock();
    int linear_result = linear_search(data_list, ARRAY_SIZE, target);
    end = clock();
    
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("見つかった位置（インデックス）: %d\n", linear_result);
    printf("全探索の実行時間: %f 秒\n", cpu_time_used);
    double linear_time = cpu_time_used;

    // --------------------------------------------------
    // 二分探索（バイナリサーチ）の実行と計測
    // --------------------------------------------------
    printf("\n--- 二分探索（Binary Search）を開始 ---\n");
    start = clock();
    int binary_result = binary_search(data_list, ARRAY_SIZE, target);
    end = clock();
    
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("見つかった位置（インデックス）: %d\n", binary_result);
    printf("二分探索の実行時間: %f 秒\n", cpu_time_used);
    double binary_time = cpu_time_used;
    // メモリの解放
    free(data_list);
    return 0;
}