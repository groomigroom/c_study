#include <stdio.h>

int main()
{
	int num;
	float fnum;

	printf("정수와 실수 입력:");
	scanf("%d %f", &num, &fnum);

	printf("결과: %d %f\n", num, fnum);
	
	return 0;
}
