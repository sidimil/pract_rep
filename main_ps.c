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
		,'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f'
		, 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w' 
		,'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	int var_1, t_size = sizeof(test_1) / sizeof(test_1[0]);

	printf("Введите сколько символов у вас будет в пароле:\n");
	scanf_s("%d", &var_1);
	fopen_s(&p1,"pass.txt", "w");
	for (; var_1 > 0; var_1--)
	{
		fprintf(p1, "%c", test_1[rand() % t_size]);
	}
	fclose(p1);
	return 0;
}
