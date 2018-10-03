// Part3 : 変数


#include <stdio.h>		// C言語標準のインクルードファイル


// プログラムコードの出力大本
int main()
{
	// 変数というもの

	/* 
	この「moji」というのが変数。そして「int」というのが変数型(へんすうがた)
	「int」というのは整数値を扱っているものである。
	*/
	int moji;


	// これを使って前回やった「printf」で何かできると考えると思いますが、出来ます。

	// ですがこのままではできません。理由は「moji」の中は今何も入っていません。なので数を入れます。

	moji = 10;			// これで「moji」の「10」という数値が入りました。


	printf("%d\n", moji);		// これで「moji」の中に入っている「10」が出力されます。



	// 四則演算
	/*
	先ほど作った変数は「moji」という名前を変えるだけでいくらでも作れます。
	ということは、数を格納するものがいくらでも作れます。
	つまりこのコード上で計算をさせることができます。
	*/
	int A;			// 演算の行う変数１
	int B;			// 演算の行う変数２
	int answer;		// 演算結果
	
	A = 5;			// Aに数値を入れる
	B = 10;			// Bに数値を入れる

	// 足し算「+」
	answer = A + B;
	printf("足し算：%d + %d = %d\n", A, B, answer);

	// 引き算「-」
	answer = A - B;
	printf("引き算：%d - %d = %d\n", A, B, answer);

	// 掛け算「*」
	answer = A * B;
	printf("掛け算：%d * %d = %d\n", A, B, answer);

	// 割り算「/」（商を出力）
	answer = A / B;
	printf("割り算：%d / %d = %d\n", A, B, answer);

	// 剰余算「%」（余りを出力）
	answer = A % B;
	printf("剰余算：%d %% %d = %d\n", A, B, answer);
	

	/*
	「answer」を使いまわしていますが中身を変えるのは常にできます。（後々出ますが出来ないものもあります。）
	*/


	// 単純計算の書き換え
	/*
	数値を１ずつ以上増やしたい、または２ずつ以上増やしたいといった場合、簡単に記述できます。
	*/
	int test = 10;		// 現在10

	test = test + 1;	// 現在11

	test++;				// 現在12

	test += 2;			// 現在14


	// 以下インクリメントとデクリメントの詳しい部分

	int highTest = 10;		// 現在10

	highTest++;				// 現在11

	++highTest;				// 現在12

	if (++highTest >= 13)	// 現在13
	{
		printf("通ります。\n");
	}

	if (highTest++ >= 14)	// 現在13(ifの調べた後に++が行われる)
	{
		printf("通りません。\n");
	}
	else
	{
		printf("さて今いくつでしょう。：%d\n", highTest);	// 現在14
	}

	highTest--;				// 現在13

	--highTest;				// 現在12

	if (--highTest <= 11)	// 現在11
	{
		printf("通ります。\n");
	}

	if (highTest-- <= 10)	// 現在11(ifの調べた後に++が行われる)
	{
		printf("通りません。\n");
	}
	else
	{
		printf("さて今いくつでしょう。：%d\n", highTest);	// 現在10
	}
	

	return 0;						// 正常終了確認処理
}