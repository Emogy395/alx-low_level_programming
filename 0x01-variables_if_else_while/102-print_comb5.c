#include<stdio.h>

/**
 * main - Prints all possible combinations of two two-digits numbers,
 * ranging from 0-99, seperated by a comma followed by a space.
 * Return: Always 0.
*/
int main(void)
{
	int first_num, second_num;

	for (first_num = 0; first_num <= 98; first_num++)
	{
		for (second_num = first_num + 1; second_num <= 99; second_num++)
		{
			putchar((first_num / 10) + '0');
			putchar((first_num % 10) + '0');
			putchar(' ');
			putchar((second_num / 10) + '0');
			putchar((second_num % 10) + '0');

			if (first_num == 98 && second_num == 99)
			{
				continue;
			}

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
