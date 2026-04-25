// 4.25.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	//最初に答えを定義する
	//int answer = 5;

	int t = (int)time(nullptr);		//現在の時刻を取得して、整数に変換する
	//nullptrは、C++11以降で使用できる定数で、ポインタがどこも指していないことを示すために使用されます。time関数は、現在の時刻をtime_t型で返しますが、これをint型にキャストしています。
	int answer = t % 10;
	
	printf("%d\n", answer);		//答えを表示する)
	int rank = 0;		//ランクを格納する変数を定義する。初期値は0で、後で条件に応じてランクを設定するために使用されます。
	int input;

	scanf_s("%d", &input);
	int sub = answer - input;		//答えと入力の差を計算する
	if (input == answer)
	{
		rank = 2;
		printf("一致！\n");
	}

	else if (answer < input)
	{
		printf("答えはもっと大きい！\n");
	}
	else if(answer > input)
	{
		printf("答えはもっと小さい！\n");
	}
	else {

		printf("不一致！\n");

		if (sub > -3 && sub < 3)	//elseの中で、答えと入力の差が-3から3の範囲内であれば、「惜しい」と表示する条件を追加しています。つまり、入力が答えに近い場合に「惜しい」と表示されます。
		{
			rank = 1;
			printf("惜しい\n");
		}
		
	}
	switch (rank)
	{
	case 2:
		printf("ランクS\n");
		break;
	case 1:
		printf("ランクA\n");
		break;
	default:
		printf("ランクB\n");
		break;
	}
	return 0;
}

