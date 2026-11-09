#include <stdio.h>

int main(void)
{
    int i = 0;
    char str[4];

    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = '\0';

    printf("%s\n", str);

    while (str[i] != '\0')      // 현재 문자가 맨 끝(NULL)이 아닌 동안
    {
        printf("%c\n", str[i]); // 현재 문자 하나 출력
        i++;                    // i를 1 증가
    }

    return 0;
}