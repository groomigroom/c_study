#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main() {
	int inum[MAX];
	int itemp;
	int i, j;
	char cq;
	
	for(i = 0; i < MAX; i++) {
		printf("[%d] : ", i);
		scanf("%d", &inum[i]);
	}
	printf("\n");
	
	printf("정렬 할래? (y, n)");
	scanf(" %c", &cq);
	
	if (cq == 'y') {
		for(i = 0; i < MAX; i++) {
			for (j = 0; j < MAX; j++) {
				if (inum[i] < inum[j]) {
					itemp = inum[i];
					inum[i] = inum[j];
					inum[j] = itemp;
				}	
			}
		}
	}
	//j = i부터 시작하면 선택정렬 
	//j = i + 1부터 시작하면 복잡도 5회 뺀거 
	
	for (i = 0; i < MAX; i++) {
		printf("[%d] : %d\n", i, inum[i]);
	}
	return 0;
}
