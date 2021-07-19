#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
第１問
以下の2進数の計算に答えよ。
1011 + 0101  = 1 0000
110100 + 11011 = 100 1111
1011 + 110011 = 11 1110
*/

/*
第２問
以下の16進数の計算に答えよ。
FF + FF = 1FE
ed + 10 = FD
563 + cd = 630
*/

/*
第３問
char、int、float、doubleのサイズはそれぞれいくつか答えよ。

char 1byte
int  4byte
float 4byte
double 8byte
*/

/*
第４問
int judge = true;
if(judge)
{
①
}
else
{
②
}
①と②どちらが処理されるか答えよ。
①
*/

/*
第５問
for( int i = 0; i < 100; i = i + 3)
{
①
}
①の処理が何回実行されるか答えよ。
34回
*/


/*
第６問
int i = 0;
while( i < 100)
{
    i = i + 5;
    ①
}
①の処理は何回実行されるか答えよ。
20回
*/

/*
第７問
int array[4][5];
上記配列のサイズはいくつか答えよ。
20
*/


/*
第８問
int array[5][20]
for( int i = 0; i < 5; ++i)
{
	for( int j = 0; j < ①; ++j)
	{
		array[i][j] = i * ① + j;
	}
}
①には何という数字が入るか答えよ。
20
*/

/*
第９問
① testFunc( int a)
{
	return;
}
①にはint,float,voidのどれが正しいか答えよ。
int
*/


/*
第１０問
２点間の距離を求める関数を作成してください。
*/

/*
double add_point(struct point a,struct point b)
{
    return sqrt(sqr(a.X-b.X)+sqr(a.Y-b.Y));
}
int main(void)
{
    struct point a, b;
    double m;

    printf("座標 A\n");
    a = input_point();
    printf("座標 B\n");
    b = input_point();

    m=add_point(a,b);

    printf("座標 AB間の距離: %f\n", m);

    return 0;
}
*/

/*第１１問
カード構造体を作成してください。
このカードはトランプのカードのことです。
情報として、なんのカードなのかを持っていてください。
スペードの7である、ハートの13であるなど。
この構造体には現在の自分の情報を設定する処理と、
現在の自分の情報を開示する処理を作ってください。


トランプの山札の構造体を作成してください。
その際カードには先ほど作った構造体を使用してください。
以下の条件を満たしておくこと。
トランプの枚数は53枚(1 ～ 13 * 4 + ジョーカー1)
Card card[53];

シャッフル機能を実装する。
card[53]にランダムにカード情報を付与してください。
card[0]がクラブの6、card[1]がハートの5といったように。
その際同じカードは存在しないようにしてください。
*/


/*

*/