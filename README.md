# c_study

문법:


예제:
#include <stdio.h>

int main() { // int main(void)도 가능하다.
    printf("구름이 멍멍이\n");
    return 0;
}

전체 코드 해석
#include <stdio.h>


표준 입출력 라이브러리(stdio.h)를 포함한다는 의미입니다.
printf() 같은 함수는 이 라이브러리에 포함되어 있습니다.

int main() { // int main(void)도 가능하다.


프로그램의 **시작점(진입점)**인 main 함수입니다.

int main(void)와 의미는 같으며, 둘 다 정상적인 C 프로그램의 기본 구조입니다.

함수가 실행을 마친 후 정수형 값을 반환해야 한다는 뜻입니다.

    printf("구름이 멍멍이\n");


printf() 함수로 "구름이 멍멍이"라는 문자열을 출력합니다.

\n은 **줄바꿈(new line)**을 의미합니다.

    return 0;
}


프로그램이 정상적으로 종료되었음을 운영체제에 알리는 반환값입니다.

관례적으로 0은 성공을 의미합니다.

99병의 맥주 예시 ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ

#include <stdio.h>

int main(){
    for(int i=99; i>0; i--){
        if(i != 1){
            printf("%d bottles of beer on the wall, %d bottles of beer. Take one down and pass it around, %d bottles of beer on the wall.\n"
            ,i,i,i-1);
        }else{
            printf("1 bottle of beer on the wall, 1 bottle of beer. Take it down and pass it around, no more bottles of beer on the wall.\n");
        }
    }
    return 0;
}

-->
일부 오래된 C 컴파일러에서는 아래 형식이 허용되지 않습니다.

for(int i = 99; i > 0; i--)


만약 컴파일러가 C99 이상(C11 등)을 지원하면 문제 없음
하지만 C89 컴파일러라면 오류가 발생합니다.

✔ 범용적으로 안전하게 쓰는 방법은:

int i;
for(i = 99; i > 0; i--)

ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ

fizzbuzz예시

#include <stdio.h>

int main(){
    for(int i=1; i<101; i++){
        if(i % 15 == 0){
            printf("FizzBuzz\n");
        }else if(i % 3 == 0){
            printf("Fizz\n");
        }else if(i % 5 == 0){
            printf("Buzz\n");
        }else{
            printf("%d\n", i);
        }
    }
    return 0;
}

ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ

#include <limits.h>
#include <stdio.h>

int check_overflow(int i)
{
    if (i + 1 < i) {
        printf("OVERFLOW!\n");
		return 1;
    }
	return 0;
}

int main(void)
{
    int a = INT_MAX;
    check_overflow(a);
    return 0;
}


ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
https://namu.wiki/w/C(%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%B0%8D%20%EC%96%B8%EC%96%B4)/%EC%83%81%EC%84%B8
