/*
	�q�Ʀr,
	�ϥ��H������key�ȡC
*/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int key, num, count,play_again;
	srand(time(NULL));		//�ؤl��:�n�ϥήɶ��Χ��ƭȡA�~�|�C���H�����浲�G���@��
	play_again = 1;
	while (play_again)
	{
		key = rand() % (100-0+1)+0;		//�H���d��: (�̤j��-�̤p��+1)+�̤p��
		count = 0;
		do {
			printf("�п�J�@��0~99���ƭ�:");
			scanf("%d",&num);
			count += 1;
			if (num == key)
			{
				printf("�q��%d���q���Ʀr", count);
			}
			else
			{
				if (num > key)
				{
					printf("�q��%d��,�Ʀr�q�Ӥj!", count);
				}
				else
				{
					printf("�q��%d��,�Ʀr�q�Ӥp!", count);
				}
			}
		} while (num != key);
		printf("�O�_�A���@��?(�O,�п�J1�F�_,�п�J0");
		scanf("%d", &play_again);
	}
	return 0;
}
