// Part7：switch文

#include <stdio.h>

int main()
{
	/*
	switch文はいわゆる条件分岐。ifと同じようなものだが異なる。
	*/

	/// 変数A
	int A = 10;

	
	// コメントアウトにて説明していく。
	switch (A)
	{
	case 0:			// if(A == 0)と同等
		printf("Aは0である\n");
		break;

	case 10:		// else if(A == 10)と同等
		printf("Aは10である\n");
		break;

	default:		// elseと同等
		printf("上記の条件を満たさない\n");
		break;
	}

	printf("\n");

	// 上記と比較してみてください。
	switch (A)
	{
	case 0:			// if(A == 0)と同等
		printf("Aは0である\n");

	case 10:		// else if(A == 10)と同等
		printf("Aは10である\n");

	default:		// elseと同等
		printf("上記の条件を満たさない\n");
		break;
	}


	/* 
	実行してみると分かりますが、「break;」を書かないとその次の処理も条件関係なく行われてしまいます。
	それがifと異なるswitchの特徴です。
	*/



	return 0;
}