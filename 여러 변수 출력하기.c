#include <stdio.h>

int main()
{
	int num1, num2;
	num1 = 21;
	num2 = 17;

	printf("num1 = %d, num2 = %d\n", num1, num2);
	num1 = num2;
	printf("num1 = %d, num2 = %d\n", num1, num2);

	return 0;
}
