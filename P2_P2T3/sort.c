#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"bubble_sort.h"

//void bubble_sort( int data[] );

void bubble_sort_ascending( int data[] );
void bubble_sort_descending( int data[] );

//void shaker_sort( int data[] );
void comb_sort( int data[] );
void gnome_sort( int data[] );
void selection_sort( int data[] );
void insertion_sort( int data[] );
//void shell_sort( int data[] );

/*
１．sort_data.csvからデータを読込み込む
２．1行目はデータの件数，2行目からソートするためのデータ
３．1行目を読込み，データのための配列(ポインタ)の領域を必要分確保(malloc)する
４．各ソートの関数を各自作成する
		プロトタイプ宣言しているので，別ファイルで作成しコンパイル時に読み込むようにすること
５．main関数に必要な変数は各自追記すること
６．データファイルはプログラム実行時の引数で与えるようにすること
７．main関数に既に記述している部分は誤りでない限り変更・削除しないようにする
*/

int main( int argc , char *argv[] )
{
	clock_t start_clock_as, end_clock_as, start_clock_de, end_clock_de;
	clock_t start_clock_comb, end_clock_comb;
	clock_t start_clock_gnome, end_clock_gnome;
	clock_t start_clock_sel, end_clock_sel;
	clock_t start_clock_isr, end_clock_isr;
	int *data,num,*data_as,*data_de,*data_comb,*data_gnome,*data_sel,*data_isr;
	FILE *fi,*fo;

    fi = fopen("sort_data.csv","r");
    fscanf(fi,"%d",&num);
	data = (int *)malloc(sizeof(int) * (num + 1));

	data_as = (int *)malloc(sizeof(int) * (num + 1));
	data_de = (int *)malloc(sizeof(int) * (num + 1));
	data_comb = (int *)malloc(sizeof(int) * (num + 1));
	data_gnome = (int *)malloc(sizeof(int)*(num+1));
	data_sel = (int *)malloc(sizeof(int)*(num+1));
	data_isr = (int *)malloc(sizeof(int)*(num+1));
	data[0]=num;
    for( int i=1;i<data[0]+1;i++){
        fscanf(fi,"%d",&data[i]);
    }

	for(int i=0;i<data[0]+1;i++){
		data_as[i] = data[i];
		data_de[i] = data[i];
		data_comb[i] = data[i];
		data_gnome[i] = data[i];
		data_sel[i] = data[i];
		data_isr[i] = data[i];
	}
	
	// bubble_sort( data ); // バブルソート
	// shaker_sort( data ); // シェーカーソート
	// comb_sort( data ); // コムソート
	// gnome_sort( data ); // ノームソート
	// selection_sort( data ); // 選択ソート
	// insertion_sort( data ); // 挿入ソート
	// shell_sort( data ); // シェルソート
	
	start_clock_as = clock();
	
	bubble_sort_ascending( data_as );

	end_clock_as = clock();
	fprintf( stderr,"Clock_as : %lf\n",(double)(end_clock_as - start_clock_as) / CLOCKS_PER_SEC );
	start_clock_de = clock();
	
	bubble_sort_descending( data_de );

	end_clock_de = clock();
	fprintf( stderr,"Clock_de : %lf\n",(double)(end_clock_de - start_clock_de) / CLOCKS_PER_SEC );

	start_clock_comb = clock();
	
	comb_sort( data_comb );

	end_clock_comb = clock();
	fprintf( stderr,"Clock_comb : %lf\n",(double)(end_clock_comb - start_clock_comb) / CLOCKS_PER_SEC );	

	start_clock_gnome = clock();
	
	gnome_sort( data_gnome );

	end_clock_gnome = clock();
	fprintf( stderr,"Clock_gnome : %lf\n",(double)(end_clock_gnome - start_clock_gnome) / CLOCKS_PER_SEC );
	
	start_clock_sel = clock();
	
	selection_sort( data_sel );

	end_clock_sel = clock();
	fprintf( stderr,"Clock_sel : %lf\n",(double)(end_clock_sel - start_clock_sel) / CLOCKS_PER_SEC );

	start_clock_isr = clock();
	
	insertion_sort( data_isr );

	end_clock_isr = clock();
	fprintf( stderr,"Clock_isr : %lf\n",(double)(end_clock_isr - start_clock_isr) / CLOCKS_PER_SEC );

	fclose(fi);
	
	fo = fopen("result_ascending.csv", "w");
    for (int i = 1; i <=data_as[0]; i++) {
        fprintf(fo, "%d\n", data_as[i]);
    }fclose(fo);

	fo = fopen("result_descending.csv", "w");
    for (int i = 1; i <=data_de[0]; i++) {
        fprintf(fo, "%d\n", data_de[i]);
    }fclose(fo);

	fo = fopen("result_comb.csv", "w");
    for (int i = 1; i <=data_comb[0]; i++) {
        fprintf(fo, "%d\n", data_comb[i]);
    }fclose(fo);

	fo = fopen("result_gnome.csv", "w");
    for (int i = 1; i <=data_gnome[0]; i++) {
        fprintf(fo, "%d\n", data_gnome[i]);
    }fclose(fo);

	fo = fopen("result_sel.csv", "w");
    for (int i = 1; i <=data_sel[0]; i++) {
        fprintf(fo, "%d\n", data_sel[i]);
    }fclose(fo);

	fo = fopen("result_isr.csv", "w");
    for (int i = 1; i <=data_isr[0]; i++) {
        fprintf(fo, "%d\n", data_isr[i]);
    }fclose(fo);

	free(data);
	free(data_as);
	free(data_de);
	free(data_comb);
	free(data_gnome);
	free(data_sel);
	free(data_isr);

	return 0;
}
