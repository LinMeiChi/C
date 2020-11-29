/*
	猜數字,
	使用隨機產生key值。
*/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int key, num, count,play_again;
	srand(time(NULL));		//種子數:要使用時間或更改數值，才會每次隨機執行結果不一樣
	play_again = 1;
	while (play_again)
	{
		key = rand() % (100-0+1)+0;		//隨機範圍: (最大值-最小值+1)+最小值
		count = 0;
		do {
			printf("請輸入一個0~99的數值:");
			scanf("%d",&num);
			count += 1;
			if (num == key)
			{
				printf("猜第%d次猜中數字", count);
			}
			else
			{
				if (num > key)
				{
					printf("猜第%d次,數字猜太大!", count);
				}
				else
				{
					printf("猜第%d次,數字猜太小!", count);
				}
			}
		} while (num != key);
		printf("是否再玩一次?(是,請輸入1；否,請輸入0");
		scanf("%d", &play_again);
	}
	return 0;
}
