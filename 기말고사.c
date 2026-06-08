#include <stdio.h>
#include <time.h>
void fuu(int y) {
    printf("%d\n", y);
}

int fuuu (int y) {
    return y + y;
}

int main()
{
   int a = 1;
   char c = 'c';
   if (a > 1) {
    printf("1초과다");
   }
   else {
    printf("1이하다");
   }
   if (c == 'c') {
    printf("%c", c);
   }
   if (a == 1 && c == 'c') {
    printf("정답\n");
   }
   //while
   int d = 0;
   while (d < 5) {
    printf("5\n");
    d++;
   }
   //for
   int e = 0;
   for(e = 0; e < 5; e++) {
    printf("5e\n");
   }
   //do_while
   int f = 0;
   do {
    printf("5dw\n");
    f++;
   } while (f < 5);
   //중첩 for문
   int fone = 1;
   int ftwo = 2;
   for(fone = 1; fone < 10; fone++) {
    for(ftwo = 2; ftwo < 10; ftwo++) {
        printf("%d * %d = %d\n", fone, ftwo, fone * ftwo);
    }
    printf("\n");
   }
   srand(time(NULL));
   int com = rand() % 2;
   printf("%d\n", com);

   //while,, break
   int wb = 1;
   while(1) {
    wb += 1;
    if(wb == 7) {
        break;
    }
   }
   printf("%d\n", wb);
   fuu(wb);
    int ddo = 2;
   ddo = fuuu(ddo);
   printf("%d\n", ddo);
}
