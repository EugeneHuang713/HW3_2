#include <stdio.h>
#include<stdlib.h>

int main()
{
	int base, exponent,i,sum=1;
	printf("Please enter the base number¡G");
	scanf("%d", &base);
	printf("Please enter the power¡G");
	scanf("%d", &exponent);
	printf("power(%d,%d)=", base, exponent);
	for (i = 0; i < exponent; i++)
	{
		if(i== exponent-1)
			printf("%d=", base);
		else
			printf("%d*", base);
		sum *= base;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}