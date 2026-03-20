#include <stdio.h>

int main()
{
	int num_one, num_two;
	float div;

	printf("정수 2개 입력: ");
	scanf("%d %d", &num_one, &num_two);

	printf("num_one = %d, num_two = %d\n", num_one, num_two);
	printf("덧셈 = %d\n", num_one + num_two);
	printf("뺄셈 = %d\n", num_one - num_two);
	printf("곱셈 = %d\n", num_one * num_two);
	div = num_one / num_two;
	printf("나눗셈 = %f\n", div);

	return 0;
}
