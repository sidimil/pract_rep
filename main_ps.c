
#include "pch.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

	FILE *p1;
	system("chcp 1251");
	system("cls");

	srand(time(NULL));
	char test_1[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O'
	, 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	char test_2[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
	 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char test_3[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	char test_4[] = { '\\', '\"', '\'', '(', ')', '>', '<', '=', '-', '_', ';',
	 '\:', '\!', '\@', '¬', '\`', '\#', '\~', '\$', '\%', '\^', '\&', '\*' };
	int var_1, var_2;
	int choice = 0;
	int sz_ch = 0;
	char *ch_y = NULL;
	ch_y = (char*) malloc(sizeof(NULL));
	int sz_ch_y;

	printf("1. Прописные        2. Строчные\n");
	printf("3. Цифры            4. Символы\n");
	printf("Введите с какими символами у вас будет пароль(цифры подряд):\n");
	scanf_s("%d", &var_1);

	printf("Введите сколько символов у вас будет в пароле:\n");
	scanf_s("%d", &var_2);
	fopen_s(&p1,"pass.txt", "w");

	while (var_1 % 10 != 0)
	{
		choice = (var_1 % 10);
		switch ((int)choice)
		{
		case 1:
			ch_y = (char *)realloc(ch_y, sz_ch + sizeof(test_1));
			for (int i = 0; sizeof(test_1) > i; i++)
				ch_y[sz_ch + i] = test_1[i];
			sz_ch = sz_ch + sizeof(test_1);
			var_1 = var_1 / 10;
			break;
		case 2:
			ch_y = (char *)realloc(ch_y, sz_ch + sizeof(test_2));
			for (int i = 0; sizeof(test_2) > i; i++)
				ch_y[sz_ch + i] = test_2[i];
			sz_ch = sz_ch + sizeof(test_2);
			var_1 = var_1 / 10;
			break;
		case 3:
			ch_y = (char *)realloc(ch_y, sz_ch + sizeof(test_3));
			for (int i = 0; sizeof(test_3) > i; i++)
				ch_y[sz_ch + i] = test_3[i];
			sz_ch = sz_ch + sizeof(test_3);
			var_1 = var_1 / 10;
			break;
		case 4:
			ch_y = (char *)realloc(ch_y, sz_ch + sizeof(test_4));
			for (int i = 0; sizeof(test_4) > i; i++)
				ch_y[sz_ch + i] = test_4[i];
			sz_ch = sz_ch + sizeof(test_4);
			var_1 = var_1 / 10;
			break;
		default :
			var_1 = var_1 / 10;
			break;
		}
	}

	for (; var_2 > 0; var_2--)
	{
		fprintf(p1, "%c", ch_y[rand() % sz_ch]);
	}
	fclose(p1);
	free(ch_y);
	return 0;
}
