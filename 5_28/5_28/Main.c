#include <stdio.h>
#include <stdlib.h>

int main()
{
	char letter;
	printf("This is a program that changes case\n");
	printf("Please enter a letter¡G");
	scanf("%c", &letter);
	if (letter >= 0x61)
		printf("%c ¡÷ %c\n", letter, (letter - 0x20));
	else
		printf("%c ¡÷ %c\n", letter, (letter + 0x20));
	system("pause");
	return 0;
}