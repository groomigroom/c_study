#include <stdio.h>
#include <stdlib.h>

int main() {
	int inum[10];
	int imin, imax, isum = 0;
	float favg;
	int i;
	
	for (i = 0; i < 10; i++) {
		printf("%d 점수 입력", i + 1);
		scanf("%d", &inum[i]);
		
		isum += inum[i];
	}
	
	favg = (float)isum / 10;
	
	imax = inum[0];
	imin = inum[0];
	
	for (i = 1; i < 10; i++) {
		if (imax < inum[i]) {
			imax = inum[i];
		}
		if (imin > inum[i]) {
			imin = inum[i];
		}
	}
	
	printf("\n합계: %d\n", isum);
	printf("\n평균: %.1f\n", favg);
	printf("\n최대값: %d\n", imax);
	printf("\n최소값: %d\n", imin);
	 
	return 0;
}
