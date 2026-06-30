#include <stdio.h>
#include <stdlib.h>
#define MAX 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ssum (int ikor, int ieng, int imath) {
	int isum;
	isum = ikor + ieng + imath;
	return isum;
}

float ffavg (float isum) {
	float favg;
	favg = isum / 3;
	return favg;
}

char grade (float favg) {
	char cgrade;
	if(favg >= 90) {
		cgrade = 'A';
	}
	else if (favg >= 80) {
		cgrade = 'B';
	}
	else if (favg >= 70) {
		cgrade = 'C';
	}
	else if (favg >= 60) {
		cgrade = 'D';
	}
	else {
		cgrade = 'F';
	}
	return cgrade;
}

int main(int argc, char *argv[]) {
	int ikor[5], ieng[5], imath[5];
	int isum[5];
	float favg[5];
	int i, j;
	char cgrade[5], cjung;
	int isuk[5];
	int itemp;
	float ftemp;
	char ctemp;
	
	for (i = 0; i < MAX; i++) {
		printf("[%d]국어, 영어, 수학", i + 1);
		scanf("%d %d %d", &ikor[i], &ieng[i], &imath[i]);
		isum[i] = ssum(ikor[i], ieng[i], imath[i]); 
		favg[i] = ffavg((float)isum[i]);
		cgrade[i] = grade(favg[i]);
		isuk[i] = 1;
	}
	
	for (i = 0; i < 5; i++) {
	for (j = 0; j < 5; j++) {
		if (favg[i] < favg[j]) {
			isuk[i]++;
			}
		}	
	}
	
	printf("\t \t \t성적표\n");
	printf("-------------------------------------------------------------------\n");
	printf("번호\t 국어\t 영어\t 수학\t 합계\t 평균\t 학점\t 석차\n");
	printf("-------------------------------------------------------------------\n");
	for(i = 0; i < MAX; i++) {
		printf("%d\t %d\t %d\t %d\t %d\t %.2f\t %c\t %d\n", i + 1, ikor[i], ieng[i], imath[i], isum[i], favg[i], cgrade[i], isuk[i]);
	}
	
	printf("정렬을 하시겠습니까? (오름차순 : a, 내림차순 : d)");
	scanf(" %c", &cjung);
	
	if (cjung == 'a') {
		for (i = 0; i < MAX; i++) {
			for (j = 0; j < MAX; j++) {
				if (isum[i] > isum[j]) {
					itemp = isum[i];
					isum[i] = isum[j];
					isum[j] = itemp;
					
					itemp = ikor[i];
					ikor[i] = ikor[j];
					ikor[j] = itemp;
					
					itemp = ieng[i];
					ieng[i] = ieng[j];
					ieng[j] = itemp;
					
					itemp = imath[i];
					imath[i] = imath[j];
					imath[j] = itemp;
					
					itemp = isuk[i];
					isuk[i] = isuk[j];
					isuk[j] = itemp;
					
					ftemp = favg[i];
					favg[i] = favg[j];
					favg[j] = ftemp;
					
					ctemp = cgrade[i];
					cgrade[i] = cgrade[j];
					cgrade[j] = ctemp;					
				}
			}
		}
		for(i = 0; i < MAX; i++) {
			printf("%d\t %d\t %d\t %d\t %d\t %.2f\t %c\t %d\n", i + 1, ikor[i], ieng[i], imath[i], isum[i], favg[i], cgrade[i], isuk[i]);
		}
	}
	
	if (cjung == 'd') {
		for (i = 0; i < MAX; i++) {
			for (j = 0; j < MAX; j++) {
				if (isum[i] < isum[j]) {
					itemp = isum[i];
					isum[i] = isum[j];
					isum[j] = itemp;
					
					itemp = ikor[i];
					ikor[i] = ikor[j];
					ikor[j] = itemp;
					
					itemp = ieng[i];
					ieng[i] = ieng[j];
					ieng[j] = itemp;
					
					itemp = imath[i];
					imath[i] = imath[j];
					imath[j] = itemp;
					
					itemp = isuk[i];
					isuk[i] = isuk[j];
					isuk[j] = itemp;
					
					ftemp = favg[i];
					favg[i] = favg[j];
					favg[j] = ftemp;
					
					ctemp = cgrade[i];
					cgrade[i] = cgrade[j];
					cgrade[j] = ctemp;					
				}
			}
		}
		for(i = 0; i < MAX; i++) {
			printf("%d\t %d\t %d\t %d\t %d\t %.2f\t %c\t %d\n", i + 1, ikor[i], ieng[i], imath[i], isum[i], favg[i], cgrade[i], isuk[i]);
		}
	}
	else {
		printf("종료\n");
	}
	
	
	
	return 0;
}
