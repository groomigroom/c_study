#include <stdio.h>

int main()
{
    char sname[20];
    int icandy;
    printf("구매하고 싶은 사탕의 이름과 사탕의 개수를 입력하세요.\n 치아 건강을 위해서 현재 사탕을 5개까지만 구매 가능합니다.\n 예시: 하얀사탕 5\n");
    scanf("%s %d", sname, &icandy);
    printf("%s을 말씀하셨습니다.\n", sname);
    if (1 <= icandy && icandy <= 5)
    {
        printf("%d원입니다.\n", icandy * 500);
    }
    else if (1 > icandy)
    {
        printf("1~5 사이의 수량을 입력해 주세요.");
    }
    else
    {
        printf("치아 건강을 위해서 사탕을 5개까지만 구입할 수 있습니다.");
    };

    return 0;
};
