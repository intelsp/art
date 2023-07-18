// mirsq.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//
// 
// 
//Author: SHAILENDRA | Thanks to Dear MONK

#include <iostream>

int mirrr(int num);

int main(int argc, char** argv)
{
	if (argc < 3)
	{
		printf("help mirsq 1 100 \n");
		EXIT_FAILURE;
	}

	int m = atoi(argv[1]);
	int n = atoi(argv[2]);

	int count = 0;

	for (int i = m; i <= n; i++)
	{
		int x = mirrr(i);
		for (int j = m; j <= n; j++)
		{
			int y = mirrr(j);
			if ((i * i + j * j) == (x * x + y * y))
			{
				printf("%d %d = %d %d \n", i, j, x, y);
				count = count + 1;
			}

		}

	}

	printf("Numbers of pairs of Mirror Squares is : %d\n", count);
}



int mirrr(int num)
{
	int mirrored = 0;
	while (num > 0)
	{
		mirrored = mirrored * 10 + num % 10;
		num /= 10;
	}

	return mirrored;
}