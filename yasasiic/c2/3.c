#include <stdio.h>
/* 入力される文字をカウント；第1版 */
main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%1d\n", nc);
}
