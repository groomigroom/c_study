#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int inum1, inum2, isum, icha, ixx;
	float islash;
	
	printf("2개의 정수 입력:\n");
	scanf("%d %d", &inum1, &inum2);	
	isum = inum1 + inum2;
	icha = inum1 - inum2;
	ixx = inum1 * inum2;
	//% 연산자는 나머지 
	//강제 형변환 
	islash = (float)inum1 / inum2;
	printf("%d + %d = %d\n", inum1, inum2, isum);
	printf("%d - %d = %d\n", inum1, inum2, icha);
	printf("%d * %d = %d\n", inum1, inum2, ixx);
	//소수점 2자리까지 보려면 쩜 소수점 수 
	printf("%d / %d = %.2f\n", inum1, inum2, islash);	
	return 0;
	
	
}
