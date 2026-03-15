#include <stdio.h>
#include <math.h>
//<math.h>는 제곱근, 삼각함수, 지수, 로그 등 고급 수학 연산 함수들을 담고 있는 표준 라이브러리 헤더 파일입니다.

int main(void)
{
    double a = 1;
    double b = -2;
    double c = -3;

//Square Root -> 제곱근, 루트
    double root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    double root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    printf("Root1 : %f\n", root1);
    printf("Root2 : %f\n", root2);
    return 0;
}
