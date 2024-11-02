#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1, num2, k, total=1;
	printf("I will help you find the lowest common multiple\n");
	printf("Please enter two numbers¡G");
	scanf("%d %d", &num1, &num2);
	printf("[%d,%d]", num1, num2);
	for (k = num1; k > 0; k--)
	{
		if (((num1 % k) == 0) && ((num2 % k) == 0))
		{
			total = total * k;
			num1 /= k;
			num2 /= k;
		}
	}
	printf("The least common multiple is¡G%d\n", total * num1 * num2);
	system("pause");
	return 0;
}