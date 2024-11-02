#include <stdio.h>
#include <stdlib.h>

int main()
{
	int k,end;
	int num[100] = {0,0,1};
	printf("Please decide which number you want to end with¡G");
	scanf("%d", &end);
	for (k = 1; k < end+1; k++)
	{
		if (k != 1)
			num[k + 1] = num[k] + num[k - 1];
		if (k == end )
			printf("%d\n", num[k]);
		else
			printf("%d,", num[k]);
	}
	system("pause");
	return 0;
}